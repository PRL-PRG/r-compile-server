fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st getTaskCallbackNames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _C_R_getTaskCallbackNames:*, reg _C_R_getTaskCallbackNames1:V, reg vargs:dots, reg r2:V |
    mkenv;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _C_R_getTaskCallbackNames = ld `.C_R_getTaskCallbackNames`;
    check L3() else D0();
  L2():
    r = dyn base(<sym .C_R_getTaskCallbackNames>);
    goto L0(r);
  D0():
    deopt 1 [_C_R_getTaskCallbackNames];
  L3():
    _C_R_getTaskCallbackNames1 = force? _C_R_getTaskCallbackNames;
    checkMissing(_C_R_getTaskCallbackNames1);
    vargs = dots[];
    r2 = `.Call`(_C_R_getTaskCallbackNames1, vargs, <missing>);
    goto L0(r2);
  }
}