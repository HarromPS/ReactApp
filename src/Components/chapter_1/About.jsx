import React, { useState } from 'react';
import Navbar from './navBar';

// Dark Mode options
export default function About() {
    const [btnStyle, setBtnStyle] = useState({
        // this will be CSS oject
        color: "black",
        backgroundColor: "white",
    });

    const [btn, setBtn] = useState("Enable Dark Mode");
    const toggleClass = () => {
        if (btnStyle.color === "white") {
            setBtnStyle({
                color: "black",
                backgroundColor: "white",
            });
            setBtn("Enable Light Mode");
        }
        else{
            setBtnStyle({
                color: "white",
                backgroundColor: "black",
                border: "1px solid white"
            });
            setBtn("Enable Dark Mode");

        }
    };
    return (
        <>
            {/* Navbar */}
            <Navbar />

            {/* Wrapper */}
            <div className="container my-4" style={btnStyle}>
                <div className="accordion" id="accordionExample" style={btnStyle}>
                    <div className="accordion-item" style={btnStyle}>
                        <h2 className="accordion-header">
                            <button className="accordion-button" type="button" data-bs-toggle="collapse" data-bs-target="#collapseOne" aria-expanded="true" aria-controls="collapseOne" style={btnStyle}>
                                Accordion Item #1
                            </button>
                        </h2>
                        <div id="collapseOne" className="accordion-collapse collapse show" data-bs-parent="#accordionExample" style={btnStyle}>
                            <div className="accordion-body" style={btnStyle}>
                                <strong>This is the first item's accordion body.</strong> It is shown by default, until the collapse plugin adds the appropriate classes that we use to style each element. These classes control the overall appearance, as well as the showing and hiding via CSS transitions. You can modify any of this with custom CSS or overriding our default variables. It's also worth noting that just about any HTML can go within the <code>.accordion-body</code>, though the transition does limit overflow.
                            </div>
                        </div>
                    </div>
                    <div className="accordion-item">
                        <h2 className="accordion-header">
                            <button className="accordion-button collapsed" type="button" data-bs-toggle="collapse" data-bs-target="#collapseTwo" aria-expanded="false" aria-controls="collapseTwo" style={btnStyle}>
                                Accordion Item #2
                            </button>
                        </h2>
                        <div id="collapseTwo" className="accordion-collapse collapse" data-bs-parent="#accordionExample">
                            <div className="accordion-body" style={btnStyle}>
                                <strong>This is the second item's accordion body.</strong> It is hidden by default, until the collapse plugin adds the appropriate classes that we use to style each element. These classes control the overall appearance, as well as the showing and hiding via CSS transitions. You can modify any of this with custom CSS or overriding our default variables. It's also worth noting that just about any HTML can go within the <code>.accordion-body</code>, though the transition does limit overflow.
                            </div>
                        </div>
                    </div>
                    <div className="accordion-item" style={btnStyle}>
                        <h2 className="accordion-header" style={btnStyle}>
                            <button className="accordion-button collapsed" type="button" data-bs-toggle="collapse" data-bs-target="#collapseThree" aria-expanded="false" aria-controls="collapseThree" style={btnStyle}>
                                Accordion Item #3
                            </button>
                        </h2>
                        <div id="collapseThree" className="accordion-collapse collapse" data-bs-parent="#accordionExample" >
                            <div className="accordion-body" >
                                <strong>This is the third item's accordion body.</strong> It is hidden by default, until the collapse plugin adds the appropriate classes that we use to style each element. These classes control the overall appearance, as well as the showing and hiding via CSS transitions. You can modify any of this with custom CSS or overriding our default variables. It's also worth noting that just about any HTML can go within the <code>.accordion-body</code>, though the transition does limit overflow.
                            </div>
                        </div>
                    </div>
                </div>
            </div>
            <div className="container my-3">
                    <button onClick={toggleClass} className="btn btn-primary">{btn}</button>
            </div>
        </>

    );
}