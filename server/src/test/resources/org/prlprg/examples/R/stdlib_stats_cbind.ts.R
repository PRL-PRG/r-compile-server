#? stdlib
`cbind.ts` <- function (..., deparse.level = 1) 
{
    if (deparse.level != 1) 
        .NotYetUsed("deparse.level != 1")
    .cbind.ts(list(...), .makeNamesTs(...), dframe = FALSE, union = TRUE)
}
