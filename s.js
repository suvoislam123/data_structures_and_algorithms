const myPromise = new Promise((resolve, rejected) => {
    const user = "Shuvo Islam";
    if (!user)
    {
        rejected("Something went wrong");
    }   
    else {
        setTimeout(() => {
            resolve("Successfully got the data");
        }, 1000);
    }

});
myPromise.then(res => console.log(res)).catch(err => console.log(err));
async function sum(a, b)
{
    s = a + b;
    return s;
}
sum(12, 33).then(data => console.log(data));
console.log("done");