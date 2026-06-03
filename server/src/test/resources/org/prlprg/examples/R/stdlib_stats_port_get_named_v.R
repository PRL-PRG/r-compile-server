#? stdlib
`port_get_named_v` <- function (v) 
{
    setNames(v[port_v_nms], names(port_v_nms))
}
