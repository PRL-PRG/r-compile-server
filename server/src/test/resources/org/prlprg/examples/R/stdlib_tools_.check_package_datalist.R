#? stdlib
`.check_package_datalist` <- function (package, lib.loc = NULL) 
{
    out <- list()
    ans1 <- list_data_in_pkg(package, lib.loc)
    ans2 <- list_data_in_pkg(package, lib.loc, use_datalist = FALSE)
    ans1 <- lapply(ans1, sort)
    ans1 <- ans1[order(names(ans1))]
    ans2 <- lapply(ans2, sort)
    ans2 <- ans2[order(names(ans2))]
    if (!identical(ans1, ans2)) {
        nx1 <- names(ans1)
        nx2 <- names(ans2)
        ex1 <- unlist(ans1)
        ex2 <- unlist(ans2)
        out <- Filter(length, list(n12 = setdiff(nx1, nx2), n21 = setdiff(nx2, 
            nx1), e12 = setdiff(ex1, ex2), e21 = setdiff(ex2, 
            ex1)))
    }
    class(out) <- "check_package_datalist"
    out
}
