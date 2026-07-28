#? stdlib
`.makeActiveBinding` <- function (thisField) 
{
    if (is(thisField, "activeBindingFunction")) 
        thisField
    else new("activeBindingFunction", thisField)
}
