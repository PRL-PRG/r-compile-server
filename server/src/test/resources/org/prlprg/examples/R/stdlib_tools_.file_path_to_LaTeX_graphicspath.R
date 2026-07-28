#? stdlib
`.file_path_to_LaTeX_graphicspath` <- function (x) 
{
    x <- normalizePath(x, "/")
    sprintf(paste(c("\\makeatletter", "\\ifthenelse", "{\\boolean{Rd@graphicspath@needs@quotes}}", 
        "{\\graphicspath{{\"%s/\"}}}", "{\\graphicspath{{%s/}}}", 
        "\\makeatother"), collapse = ""), x, x)
}
