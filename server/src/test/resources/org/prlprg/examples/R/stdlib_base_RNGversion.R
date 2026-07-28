#? stdlib
`RNGversion` <- function (vstr) 
{
    vnum <- as.numeric(strsplit(as.character(vstr), ".", fixed = TRUE)[[1L]])
    if (length(vnum) < 2L) 
        stop("malformed version string")
    if (vnum[1L] == 0 && vnum[2L] < 99) 
        RNGkind("Wichmann-Hill", "Buggy Kinderman-Ramage", "Rounding")
    else if (vnum[1L] == 0 || vnum[1L] == 1 && vnum[2L] <= 6) 
        RNGkind("Marsaglia-Multicarry", "Buggy Kinderman-Ramage", 
            "Rounding")
    else if (vnum[1L] <= 2 || vnum[1L] == 3 && vnum[2L] <= 5) 
        RNGkind("Mersenne-Twister", "Inversion", "Rounding")
    else RNGkind("Mersenne-Twister", "Inversion", "Rejection")
}
