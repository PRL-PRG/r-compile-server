#? stdlib
`.functions_to_be_ignored_from_usage` <- function (package_name) 
{
    c("<-", "=", if (package_name == "base") c("(", "{", "function", 
        "if", "for", "while", "repeat", "Math", "Ops", "Summary", 
        "Complex", "matrixOps"), if (package_name == "utils") "?", 
        if (package_name == "methods") "@")
}
