fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st Rd_macros_package_dir = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg Sys_getenv:cls, reg r:V |
    mkenv;
    Sys_getenv = ldf `Sys.getenv`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn Sys_getenv("_R_RD_MACROS_PACKAGE_DIR_", ".");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    popenv;
    return r;
  }
}