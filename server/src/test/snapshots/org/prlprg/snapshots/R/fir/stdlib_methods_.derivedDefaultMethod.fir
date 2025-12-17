fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2855466992;
    st `.derivedDefaultMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2855466992(fdef, internal) {
  (reg fdef:*, reg internal:*) -+> V { var fdef:*, var internal:*, reg internal_isMissing:L, reg internal_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fdef1:*, reg fdef2:V, reg is_function:cls, reg r2:V, reg c:L, reg c2:V, reg is_primitive:cls, reg fdef3:*, reg fdef4:V, reg p:p(V +), reg r4:V, reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg internal1:*, reg internal2:V, reg c7:V, reg r8:V, reg c8:L, reg new:cls, reg internal3:*, reg internal4:V, reg p1:p(V +), reg r10:V, reg new1:cls, reg r12:V, reg fdef5:*, reg fdef6:V, reg l:*, reg ___:cls, reg r13:V, reg _newSignature:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg _anyClassName:*, reg _anyClassName1:V, reg list:cls, reg r16:V, reg p2:p(V +), reg formalArgs:cls, reg fdef7:*, reg fdef8:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg r21:V, reg l1:*, reg ___1:cls, reg r22:V, reg l2:*, reg ___2:cls, reg r23:V, reg value:*, reg value1:V, reg fdef9:*, reg fdef10:V |
    mkenv;
    st fdef = fdef;
    internal_isMissing = missing.0(internal);
    if internal_isMissing then L0(NULL) else L0(internal);
  L0(internal_orDefault):
    st internal = internal_orDefault;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    c = `as.logical`(r1);
    if c then L11() else L2(c);
  L7():
    fdef1 = ld fdef;
    check L9() else D0();
  L8():
    r = dyn base(<sym fdef>);
    goto L1(r);
  D0():
    deopt 2 [fdef1];
  L2(c2):
    c6 = `as.logical`(c2);
    if c6 then L15() else L3();
  L9():
    fdef2 = force? fdef1;
    checkMissing(fdef2);
    is_function = ldf `is.function` in base;
    r2 = dyn is_function(fdef2);
    check L10() else D1();
  L11():
    is_primitive = ldf `is.primitive`;
    check L12() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [c];
  L3():
    fdef9 = ld fdef;
    check L36() else D19();
  L10():
    goto L1(r2);
  L12():
    p = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r4 = dyn is_primitive(p);
    check L13() else D3();
  L15():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D3():
    deopt 9 [c, r4];
  D19():
    deopt 56 [fdef9];
  L4(r7):
    r8 = `!`(r7);
    c8 = `as.logical`(r8);
    if c8 then L19() else L5();
  L13():
    r5 = `!`(r4);
    c3 = `as.logical`(r5);
    c4 = `&&`(c, c3);
    goto L2(c4);
  L16():
    internal1 = ld internal;
    check L18() else D4();
  L17():
    r6 = dyn base1(<sym internal>);
    goto L4(r6);
  L36():
    fdef10 = force? fdef9;
    checkMissing(fdef10);
    popenv;
    return fdef10;
  D4():
    deopt 13 [internal1];
  L5():
    new1 = ldf new;
    check L23() else D7();
  L6():
    fdef5 = ld fdef;
    check L25() else D9();
  L18():
    internal2 = force? internal1;
    checkMissing(internal2);
    c7 = `==`(internal2, NULL);
    goto L4(c7);
  L19():
    new = ldf new;
    check L20() else D5();
  D5():
    deopt 18 [];
  D7():
    deopt 25 [];
  D9():
    deopt 29 [fdef5];
  L20():
    p1 = prom<V +>{
      internal3 = ld internal;
      internal4 = force? internal3;
      checkMissing(internal4);
      return internal4;
    };
    r10 = dyn new[, internal]("internalDispatchMethod", p1);
    check L21() else D6();
  L23():
    r12 = dyn new1("derivedDefaultMethod");
    check L24() else D8();
  L25():
    fdef6 = force? fdef5;
    checkMissing(fdef6);
    l = ld value;
    ___ = ldf `@<-`;
    check L26() else D10();
  D6():
    deopt 22 [r10];
  D8():
    deopt 27 [r12];
  D10():
    deopt 32 [fdef6, l, fdef6];
  L21():
    st value = r10;
    goto L6();
  L24():
    st value = r12;
    goto L6();
  L26():
    r13 = dyn ___(l, NULL, ".Data", fdef6);
    check L27() else D11();
  D11():
    deopt 35 [fdef6, r13];
  L27():
    st value = r13;
    _newSignature = ldf `.newSignature`;
    check L28() else D12();
  D12():
    deopt 38 [];
  L28():
    p2 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      _anyClassName = ld `.anyClassName`;
      _anyClassName1 = force? _anyClassName;
      checkMissing(_anyClassName1);
      list = ldf list in base;
      r16 = dyn list(_anyClassName1);
      goto L0(r16);
    L2():
      r14 = dyn base2(<sym .anyClassName>);
      goto L0(r14);
    };
    p4 = prom<V +>{
      formalArgs = ldf formalArgs;
      p3 = prom<V +>{
        fdef7 = ld fdef;
        fdef8 = force? fdef7;
        checkMissing(fdef8);
        return fdef8;
      };
      r19 = dyn formalArgs(p3);
      return r19;
    };
    r21 = dyn _newSignature(p2, p4);
    check L29() else D13();
  D13():
    deopt 41 [r21];
  L29():
    l1 = ld value;
    ___1 = ldf `@<-`;
    check L30() else D14();
  D14():
    deopt 43 [r21, l1, r21];
  L30():
    r22 = dyn ___1(l1, NULL, "defined", r21);
    check L31() else D15();
  D15():
    deopt 46 [r21, r22];
  L31():
    st value = r22;
    l2 = ld value;
    ___2 = ldf `@<-`;
    check L32() else D16();
  D16():
    deopt 49 [r21, l2, r21];
  L32():
    r23 = dyn ___2(l2, NULL, "target", r21);
    check L33() else D17();
  D17():
    deopt 52 [r21, r23];
  L33():
    st value = r23;
    value = ld value;
    check L34() else D18();
  D18():
    deopt 54 [value];
  L34():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}