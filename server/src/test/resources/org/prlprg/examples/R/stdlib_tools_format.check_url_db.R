#? stdlib
`format.check_url_db` <- function (x, ...) 
{
    if (!NROW(x)) 
        return(character())
    u <- x$URL
    new <- x$New
    ind <- nzchar(new)
    if (any(ind)) {
        u[ind] <- sprintf("%s (moved to %s)", u[ind], new[ind])
        if (config_val_to_logical(Sys.getenv("_R_CHECK_URLS_SHOW_301_STATUS_", 
            "FALSE"))) {
            x$Message[ind] <- "Moved Permanently"
            x$Status[ind] <- "301"
        }
    }
    paste0(sprintf("URL: %s", u), sprintf("\nFrom: %s", vapply(x$From, 
        paste, "", collapse = "\n      ")), ifelse((s <- x$Status) == 
        "", "", sprintf("\nStatus: %s", s)), ifelse((m <- x$Message) == 
        "", "", sprintf("\nMessage: %s", gsub("\n", "\n  ", m, 
        fixed = TRUE))), ifelse((m <- x$Spaces) == "", "", "\nURL contains spaces"), 
        ifelse((m <- x$CRAN) == "", "", "\nCRAN URL not in canonical form"), 
        ifelse((m <- x$R) == "", "", "\nR-project URL not in canonical form"))
}
