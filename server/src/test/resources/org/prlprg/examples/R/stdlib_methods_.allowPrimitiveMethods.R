#? stdlib
`.allowPrimitiveMethods` <- function (onOff) 
{
    code <- if (onOff) 
        "SET"
    else "CLEAR"
    .Call(C_R_M_setPrimitiveMethods, "", NULL, code, NULL, NULL)
}
