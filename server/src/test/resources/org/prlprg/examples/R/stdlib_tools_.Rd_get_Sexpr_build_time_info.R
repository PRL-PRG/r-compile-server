#? stdlib
`.Rd_get_Sexpr_build_time_info` <- function (x) 
{
    y <- getDynamicFlags(x)
    if (!y["\\Sexpr"]) 
        c(`\\Sexpr` = FALSE, build = FALSE, later = FALSE, never = FALSE)
    else if (!any(y[c("install", "render")])) 
        c(`\\Sexpr` = TRUE, build = TRUE, later = FALSE, never = FALSE)
    else {
        nodes <- .Rd_find_nodes_with_tags(x, "\\Sexpr")
        btinfo <- vapply(nodes, function(e) {
            flags <- getDynamicFlags(e)
            if (flags["build"]) 
                return("build")
            else if (flags["install"]) {
                s <- trimws(paste(as.character(e), collapse = ""))
                if (startsWith(s, "tools:::Rd_expr_PR(") || startsWith(s, 
                  "tools:::Rd_expr_doi(")) 
                  return("never")
            }
            "later"
        }, "")
        c(`\\Sexpr` = TRUE, y["build"], later = any(btinfo == 
            "later"), never = any(btinfo == "never"))
    }
}
