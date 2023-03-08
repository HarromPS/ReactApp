#include <iostream>
#include <cstdio>
using namespace std;

typedef struct BrowserHistory
{
    char *val[5001];
    int top;
    int size;
} BrowserHistory;

BrowserHistory *browserHistoryCreate(char *homepage)
{
    BrowserHistory *obj = (BrowserHistory *)malloc(sizeof(BrowserHistory) * 1);
    obj->top++;
    obj->val[obj->top] = homepage;
    obj->size = obj->top;
    return obj;
}

void browserHistoryVisit(BrowserHistory *obj, char *url)
{
    obj->size++;
    obj->top++;
    obj->val[obj->top] = url;
}

char *browserHistoryBack(BrowserHistory *obj, int steps)
{
    int x = obj->top - 1;
    for (int i = steps; i > 0; i--)
    {
        x--;
        if (x < 0)
        {
            x = 0;
        }
    }
    obj->top = x + 1;
    return obj->val[x];
}

char *browserHistoryForward(BrowserHistory *obj, int steps)
{
    int x = obj->top - 1;
    for (int i = 1; i <= steps; i++)
    {
        x++;
        if (x >= obj->size)
        {
            x = obj->size - 1;
        }
    }
    obj->top = x + 1;
    return obj->val[x];
}

void browserHistoryFree(BrowserHistory *obj)
{
    free(obj);
}

int main()
{
    BrowserHistory *b = (BrowserHistory *)malloc(sizeof(BrowserHistory) * 1);
    b = browserHistoryCreate("leetcode.com");
    browserHistoryVisit(b, "google.com");
    browserHistoryVisit(b, "facebook.com");
    browserHistoryVisit(b, "youtube.com");
    printf("%s\n", browserHistoryBack(b, 1));
    printf("%s\n", browserHistoryBack(b, 1));
    printf("%s\n", browserHistoryBack(b, 1));
    browserHistoryVisit(b, "linkedin.com");
    char *s = browserHistoryForward(b, 2);
    browserHistoryBack(b, 2);
    browserHistoryBack(b, 7);
    browserHistoryFree(b);
    return 0;
}
