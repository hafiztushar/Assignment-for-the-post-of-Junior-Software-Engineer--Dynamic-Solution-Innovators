import React, {useState} from 'react'

function Home() {

    const [email, setEmail] = useState("");
    const [password, setPassword] = useState("");
    const [error, setError] = useState("");
    const [status, setStatus] = useState("");

    const submitForm = (e) => {
        if (email === "" || password === "") {
            setError("all fields erquired");
            e.preventDefault();
        }
        //an api call with email and password to authenticate the user is required Your JSON is hosted at: https://jsonkeeper.com/b/66SS

        //yes Your JSON is hosted at: https://jsonkeeper.com/b/XGMW
        else {
            fetch('https://jsonkeeper.com/b/XGMW')
                .then(({ result }) => setStatus(result));
            e.preventDefault();
        }

    }

    return (
        <div className="container">
            <div className="box">
                <form>
                    <div className="input-box">
                        <span>Email</span><br/>
                        <input type="email" value={email} onChange={e => setEmail(e.target.value)} />
                    </div>
                    <div className="input-box">
                        <span>Password</span><br/>
                        <input type="password" value={password} onChange={e => setPassword(e.target.value)} />
                    </div>
                    <div className="input-box">
                        <span></span>
                        <input type="submit" value="Login" onClick={submitForm }/>
                    </div>
                    <div className="input-box">
                        <span>{error}</span>
                        <span>{status}</span>
                    </div>
                </form>
            </div>
        </div>
    )
}

export default Home
