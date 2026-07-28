#? stdlib
`inRfuns` <- function (syms) 
{
    rfuns <- Rfuns()
    if (length(rfuns) == 0) 
        inRfunsCrude(syms)
    else syms[unmap(syms) %in% unmap(rfuns)]
}
