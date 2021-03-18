import React from 'react'

function Failure() {
    return (
        <div className="failure">
            User doesn't exist<br />
            <button style={{color:'blue'}} onClick={()=>  window.location.assign('/')}>try again</button>
             
        </div>
    )
}

export default Failure
