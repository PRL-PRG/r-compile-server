fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `sys.status` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sys_calls:cls, reg r2:V, reg sys_parents:cls, reg r3:V, reg sys_frames:cls, reg r4:V, reg list:cls, reg r5:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    sys_calls = ldf `sys.calls`;
    check L3() else D0();
  L2():
    r = dyn base[`sys.calls`, `sys.parents`, `sys.frames`](<lang sys.calls()>, <lang sys.parents()>, <lang sys.frames()>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    r2 = dyn sys_calls();
    check L4() else D1();
  D1():
    deopt 4 [r2];
  L4():
    sys_parents = ldf `sys.parents`;
    check L5() else D2();
  D2():
    deopt 7 [];
  L5():
    r3 = dyn sys_parents();
    check L6() else D3();
  D3():
    deopt 8 [r3];
  L6():
    sys_frames = ldf `sys.frames`;
    check L7() else D4();
  D4():
    deopt 11 [];
  L7():
    r4 = dyn sys_frames();
    check L8() else D5();
  D5():
    deopt 12 [r4];
  L8():
    list = ldf list in base;
    r5 = dyn list(r2, r3, r4);
    check L9() else D6();
  D6():
    deopt 15 [r5];
  L9():
    goto L0(r5);
  }
}