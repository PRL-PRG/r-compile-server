#? stdlib
`.split_op_version` <- function (x) 
{
    pat <- "^([^\\([:space:]]+)[[:space:]]*\\(([^\\)]+)\\).*"
    x1 <- sub(pat, "\\1", x)
    x2 <- sub(pat, "\\2", x)
    if (x2 != x1) {
        pat <- "[[:space:]]*([[<>=!]+)[[:space:]]+(.*)"
        version <- sub(pat, "\\2", x2)
        if (!startsWith(version, "r")) 
            version <- package_version(version)
        list(name = x1, op = sub(pat, "\\1", x2), version = version)
    }
    else list(name = x1)
}
