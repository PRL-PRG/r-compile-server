fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg is_symlink:cls, reg r2:V |
    mkenv;
    r = clos `inner-246859285`;
    st `Sys.readlink` = r;
    r1 = clos `inner-246859285`;
    st `is.symlink` = r1;
    is_symlink = ldf `is.symlink`;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    r2 = dyn is_symlink("/foo/bar");
    check L1() else D1();
  D1():
    deopt 9 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun `inner-246859285`(paths) {
  (reg paths:*) -+> V { var paths:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paths1:*, reg paths2:V, reg Sys_readlink:cls, reg r2:V |
    mkenv;
    st paths = paths;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    paths1 = ld paths;
    check L3() else D0();
  L2():
    r = dyn base(<lang Sys.readlink(paths)>);
    goto L0(r);
  D0():
    deopt 2 [paths1];
  L3():
    paths2 = force? paths1;
    checkMissing(paths2);
    Sys_readlink = ldf `Sys.readlink` in base;
    r2 = dyn Sys_readlink(paths2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}