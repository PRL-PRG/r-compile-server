#? stdlib
`.simpleExtReplace` <- function (from, to, value) 
{
    for (what in methods:::.InhSlotNames(to)) methods::slot(from, 
        what) <- methods::slot(value, what)
    from
}
