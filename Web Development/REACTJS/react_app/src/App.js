import React from 'react'
import './App.css';
import React, { useState, useEffect } from "react";
import { BrowserRouter, Route, Routes,Link } from "react-router-dom";
import { Navbar } from './MyAppComponents/Navbar';


export const App = () => {
  return (
    <>
      <BrowserRouter>
      <Routes>
        <Route exact path="/navbar" element={Navbar}></Route>
        <div>
         <Link to='/navbar'><button>Navbar</button></Link>
        </div>

      </Routes>
      </BrowserRouter>
    </>
  )
}
