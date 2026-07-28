#? stdlib
`.setIfBase` <- function (f, fdef, mlist) 
{
    if (is.null(f)) 
        FALSE
    else {
        found <- base::exists(f, "package:base")
        if (found) {
            base::assign(".Methods", envir = base::environment(fdef), 
                base::get(f, "package:base"))
        }
        found
    }
}
