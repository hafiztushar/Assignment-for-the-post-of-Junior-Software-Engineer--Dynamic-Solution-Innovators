import React from 'react'

function Success(history) {


    return (
        <div className="success">
            Congratulations on successfull login<br />
            <button style={{color:'blue'}} onClick={()=>  window.location.assign('/')}>go back</button>
             
        </div>
    )
}

export default Success
