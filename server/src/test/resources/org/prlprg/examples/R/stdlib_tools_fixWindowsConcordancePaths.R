#? stdlib
`fixWindowsConcordancePaths` <- function (split) 
{
    if (length(split) <= 4) 
        return(split)
    driveletter <- grep("^[a-zA-Z]$", split[2:4]) + 1
    ofs <- grep("^ofs [[:digit:]]+$", split[4:length(split)]) + 
        3
    driveletter <- setdiff(driveletter, ofs - 1)
    if (!length(driveletter)) 
        return(split)
    if (!length(ofs) || length(split) >= 6) {
        if (2 %in% driveletter) {
            split <- c(split[1], paste(split[2], split[3], sep = ":"), 
                split[4:length(split)])
            driveletter <- driveletter - 1
        }
        if (3 %in% driveletter) {
            split <- c(split[1:2], paste(split[3], split[4], 
                sep = ":"), split[5:length(split)])
        }
    }
    split
}
