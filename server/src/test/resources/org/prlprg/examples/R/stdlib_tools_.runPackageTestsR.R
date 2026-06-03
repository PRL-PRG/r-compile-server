#? stdlib
`.runPackageTestsR` <- function (...) 
{
    cat("\n")
    status <- .runPackageTests(...)
    q("no", status = status)
}
