fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-486084632`;
    st `Sys.chmod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-486084632`(paths, mode, use_umask) {
  (reg paths:*, reg mode:*, reg use_umask:*) -+> V { var paths:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, var use_umask:*, reg use_umask_isMissing:L, reg use_umask_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paths1:*, reg paths2:V, reg as_octmode:cls, reg mode1:*, reg mode2:V, reg p:p(V +), reg r3:V, reg use_umask1:*, reg use_umask2:V, reg Sys_chmod:cls, reg r4:V |
    mkenv;
    st paths = paths;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L0("0777") else L0(mode);
  L0(mode_orDefault):
    st mode = mode_orDefault;
    use_umask_isMissing = missing.0(use_umask);
    if use_umask_isMissing then L1(TRUE) else L1(use_umask);
  L1(use_umask_orDefault):
    st use_umask = use_umask_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    paths1 = ld paths;
    check L5() else D0();
  L4():
    r = dyn base(<lang Sys.chmod(paths, as.octmode(mode), use_umask)>);
    goto L2(r);
  D0():
    deopt 2 [paths1];
  L5():
    paths2 = force? paths1;
    checkMissing(paths2);
    as_octmode = ldf `as.octmode`;
    check L6() else D1();
  D1():
    deopt 5 [];
  L6():
    p = prom<V +>{
      mode1 = ld mode;
      mode2 = force? mode1;
      checkMissing(mode2);
      return mode2;
    };
    r3 = dyn as_octmode(p);
    check L7() else D2();
  D2():
    deopt 7 [r3];
  L7():
    use_umask1 = ld use_umask;
    check L8() else D3();
  D3():
    deopt 8 [use_umask1];
  L8():
    use_umask2 = force? use_umask1;
    checkMissing(use_umask2);
    Sys_chmod = ldf `Sys.chmod` in base;
    r4 = dyn Sys_chmod(paths2, r3, use_umask2);
    check L9() else D4();
  D4():
    deopt 11 [r4];
  L9():
    goto L2(r4);
  }
}