fun main() {
  () -+> V { reg r:cls, reg exists:cls, reg r1:V, reg c:L, reg getCallingDLL:cls, reg ansari_test:*, reg ansari_test1:V, reg p:p(V +), reg r3:V |
    mkenv;
    r = clos inner1745403622;
    st getCallingDLL = r;
    exists = ldf exists;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn exists("ansari.test");
    check L2() else D1();
  D1():
    deopt 6 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L3():
    getCallingDLL = ldf getCallingDLL;
    check L4() else D2();
  D2():
    deopt 8 [];
  L4():
    p = prom<V +>{
      ansari_test = ld `ansari.test`;
      ansari_test1 = force? ansari_test;
      checkMissing(ansari_test1);
      return ansari_test1;
    };
    r3 = dyn getCallingDLL(p);
    check L5() else D3();
  D3():
    deopt 10 [r3];
  L5():
    popenv;
    return r3;
  }
}
fun inner1745403622(f, doStop) {
  (reg f:*, reg doStop:*) -+> V { var f:*, reg f_isMissing:L, reg f_orDefault:*, reg sys_function:cls, reg p:p(V +), reg r1:V, reg p1:p(V +), var doStop:*, reg doStop_isMissing:L, reg doStop_orDefault:*, reg environment:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg r4:V, reg isNamespace:cls, reg e:*, reg e1:V, reg p3:p(V +), reg r6:V, reg r7:V, reg c:L, reg doStop1:*, reg doStop2:V, reg c1:L, reg stop:cls, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg getCallingDLLe:cls, reg e2:*, reg e3:V, reg p4:p(V +), reg r14:V, reg c2:V, reg c3:L, reg c5:V, reg doStop3:*, reg doStop4:V, reg c6:L, reg c7:V, reg c9:L, reg stop1:cls, reg r15:V, reg r17:*, reg r18:V |
    mkenv;
    f_isMissing = missing.0(f);
    if f_isMissing then L0() else L1(f);
  L0():
    p1 = prom<V +>{
      sys_function = ldf `sys.function`;
      p = prom<V +>{
        return -1.0;
      };
      r1 = dyn sys_function(p);
      return r1;
    };
    goto L1(p1);
  L1(f_orDefault):
    st f = f_orDefault;
    doStop_isMissing = missing.0(doStop);
    if doStop_isMissing then L2(FALSE) else L2(doStop);
  L2(doStop_orDefault):
    st doStop = doStop_orDefault;
    environment = ldf environment;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p2 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r4 = dyn environment(p2);
    check L12() else D1();
  D1():
    deopt 3 [r4];
  L12():
    st e = r4;
    isNamespace = ldf isNamespace;
    check L13() else D2();
  D2():
    deopt 6 [];
  L13():
    p3 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r6 = dyn isNamespace(p3);
    check L14() else D3();
  D3():
    deopt 8 [r6];
  L14():
    r7 = `!`(r6);
    c = `as.logical`(r7);
    if c then L15() else L3();
  L3():
    goto L6();
  L6():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L15():
    doStop1 = ld doStop;
    check L16() else D4();
  D4():
    deopt 10 [doStop1];
  L7(r12):
    c3 = `as.logical`(r12);
    if c3 then L27() else L8(c3);
  L16():
    doStop2 = force? doStop1;
    checkMissing(doStop2);
    c1 = `as.logical`(doStop2);
    if c1 then L17() else L4();
  L23():
    getCallingDLLe = ldf getCallingDLLe;
    check L25() else D7();
  L24():
    r11 = dyn base(<lang `<-`(r, getCallingDLLe(e))>);
    goto L7(r11);
  D7():
    deopt 23 [];
  L4():
    popenv;
    return NULL;
  L8(c5):
    c9 = `as.logical`(c5);
    if c9 then L30() else L9();
  L17():
    stop = ldf stop;
    check L18() else D5();
  L25():
    p4 = prom<V +>{
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      return e3;
    };
    r14 = dyn getCallingDLLe(p4);
    check L26() else D8();
  L27():
    doStop3 = ld doStop;
    check L28() else D9();
  D5():
    deopt 13 [];
  D8():
    deopt 25 [r14];
  D9():
    deopt 28 [c3, doStop3];
  L9():
    goto L10();
  L10():
    r17 = ld r;
    check L34() else D12();
  L18():
    r8 = dyn stop("function is not in a namespace, so cannot locate associated DLL");
    check L19() else D6();
  L26():
    st r = r14;
    c2 = `==`(r14, NULL);
    goto L7(c2);
  L28():
    doStop4 = force? doStop3;
    checkMissing(doStop4);
    c6 = `as.logical`(doStop4);
    c7 = `&&`(c3, c6);
    goto L8(c7);
  L30():
    stop1 = ldf stop;
    check L31() else D10();
  D6():
    deopt 15 [r8];
  D10():
    deopt 32 [];
  D12():
    deopt 37 [r17];
  L19():
    goto L6();
  L31():
    r15 = dyn stop1("looking for DLL for native routine call, but no DLLs in namespace of call");
    check L32() else D11();
  L34():
    r18 = force? r17;
    checkMissing(r18);
    popenv;
    return r18;
  D11():
    deopt 34 [r15];
  L32():
    goto L10();
  }
}