#? stdlib
`R_license_db_labels` <- function (ldb) 
{
    if (is.null(ldb)) 
        return(NULL)
    lab <- ldb$SSS
    pos <- which(lab == "")
    abbrevs <- ldb$Abbrev[pos]
    versions <- ldb$Version[pos]
    lab[pos] <- ifelse(nzchar(abbrevs), abbrevs, ldb$Name[pos])
    ind <- nzchar(versions)
    pos <- pos[ind]
    lab[pos] <- sprintf("%s version %s", lab[pos], versions[ind])
    lab
}
