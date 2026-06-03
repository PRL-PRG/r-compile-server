#? stdlib
`SweaveGetSyntax` <- function (file) 
{
    synt <- apropos("SweaveSyntax", mode = "list")
    for (sname in synt) {
        s <- get(sname, mode = "list")
        if (!identical(class(s), "SweaveSyntax")) 
            next
        if (length(grep(s$extension, file))) 
            return(s)
    }
    SweaveSyntaxNoweb
}
