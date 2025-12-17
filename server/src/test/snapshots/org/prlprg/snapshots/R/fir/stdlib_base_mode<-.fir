fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner736444261;
    st `mode<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner736444261(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg storage_mode:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg value1:*, reg value2:V, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg is_factor:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r6:V, reg c1:L, reg stop:cls, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg x7:*, reg x8:V, reg attributes:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg x9:*, reg x10:V, reg attr:cls, reg r16:V, reg c2:V, reg r17:V, reg value3:*, reg value4:V, reg r18:V, reg get:cls, reg paste0:cls, reg value5:*, reg value6:V, reg p2:p(V +), reg r20:V, reg p3:p(V +), reg parent_frame:cls, reg r22:V, reg p4:p(V +), reg r24:V, reg mde:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg r26:V, reg atr:*, reg atr1:V, reg l:*, reg attributes__:cls, reg r27:V, reg setSingle:*, reg setSingle1:V, reg isSingle:*, reg isSingle1:V, reg r28:V, reg c3:L, reg setSingle2:*, reg setSingle3:V, reg c4:L, reg r29:V, reg l1:*, reg attr__:cls, reg r30:V, reg x13:*, reg x14:V |
    mkenv;
    st x = x;
    st value = value;
    storage_mode = ldf `storage.mode`;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn storage_mode(p);
    check L12() else D1();
  D1():
    deopt 3 [r1];
  L12():
    value1 = ld value;
    check L13() else D2();
  D2():
    deopt 3 [r1, value1];
  L13():
    value2 = force? value1;
    checkMissing(value2);
    r2 = `==`(r1, value2);
    c = `as.logical`(r2);
    if c then L14() else L0();
  L0():
    is_factor = ldf `is.factor`;
    check L18() else D4();
  L14():
    x3 = ld x;
    check L15() else D3();
  D3():
    deopt 6 [x3];
  D4():
    deopt 12 [];
  L15():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L18():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r6 = dyn is_factor(p1);
    check L19() else D5();
  D5():
    deopt 14 [r6];
  L19():
    c1 = `as.logical`(r6);
    if c1 then L20() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf attributes;
    base = ldf attributes in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L20():
    stop = ldf stop;
    check L21() else D6();
  D6():
    deopt 16 [];
  L4(r10):
    st atr = r10;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L21():
    r7 = dyn stop("invalid to change the storage mode of a factor");
    check L22() else D7();
  L24():
    x7 = ld x;
    check L26() else D8();
  L25():
    r9 = dyn base(<sym x>);
    goto L4(r9);
  D7():
    deopt 18 [r7];
  D8():
    deopt 23 [x7];
  L5(r13):
    r17 = `!`(r13);
    st isSingle = r17;
    value3 = ld value;
    check L34() else D12();
  L22():
    goto L3();
  L26():
    x8 = force? x7;
    checkMissing(x8);
    attributes = ldf attributes in base;
    r11 = dyn attributes(x8);
    check L27() else D9();
  L28():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L29():
    r12 = dyn base1(<lang attr(x, "Csingle")>);
    goto L5(r12);
  D9():
    deopt 26 [r11];
  D12():
    deopt 39 [value3];
  L6(r15):
    c2 = `==`(r15, NULL);
    goto L5(c2);
  L27():
    goto L4(r11);
  L30():
    x9 = ld x;
    check L32() else D10();
  L31():
    r14 = dyn base2(<sym x>, "Csingle");
    goto L6(r14);
  L34():
    value4 = force? value3;
    checkMissing(value4);
    r18 = `==`(value4, "single");
    st setSingle = r18;
    get = ldf get;
    check L35() else D13();
  D10():
    deopt 31 [x9];
  D13():
    deopt 45 [];
  L32():
    x10 = force? x9;
    checkMissing(x10);
    attr = ldf attr in base;
    r16 = dyn attr(x10, "Csingle");
    check L33() else D11();
  L35():
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        value5 = ld value;
        value6 = force? value5;
        checkMissing(value6);
        return value6;
      };
      r20 = dyn paste0("as.", p2);
      return r20;
    };
    p4 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r22 = dyn parent_frame();
      return r22;
    };
    r24 = dyn get[, mode, envir](p3, "function", p4);
    check L36() else D14();
  D11():
    deopt 35 [r16];
  D14():
    deopt 51 [r24];
  L33():
    goto L6(r16);
  L36():
    st mde = r24;
    mde = ldf mde;
    check L37() else D15();
  D15():
    deopt 54 [];
  L37():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r26 = dyn mde(p5);
    check L38() else D16();
  D16():
    deopt 56 [r26];
  L38():
    st x = r26;
    atr = ld atr;
    check L39() else D17();
  D17():
    deopt 58 [atr];
  L39():
    atr1 = force? atr;
    checkMissing(atr1);
    l = ld x;
    attributes__ = ldf `attributes<-`;
    check L40() else D18();
  D18():
    deopt 61 [atr1, l, atr1];
  L40():
    r27 = dyn attributes__(l, NULL, atr1);
    check L41() else D19();
  D19():
    deopt 63 [atr1, r27];
  L41():
    st x = r27;
    setSingle = ld setSingle;
    check L42() else D20();
  D20():
    deopt 65 [setSingle];
  L42():
    setSingle1 = force? setSingle;
    checkMissing(setSingle1);
    isSingle = ld isSingle;
    check L43() else D21();
  D21():
    deopt 66 [setSingle1, isSingle];
  L43():
    isSingle1 = force? isSingle;
    checkMissing(isSingle1);
    r28 = `!=`(setSingle1, isSingle1);
    c3 = `as.logical`(r28);
    if c3 then L44() else L7();
  L7():
    goto L10();
  L10():
    x13 = ld x;
    check L51() else D25();
  L44():
    setSingle2 = ld setSingle;
    check L45() else D22();
  D22():
    deopt 69 [setSingle2];
  D25():
    deopt 83 [x13];
  L45():
    setSingle3 = force? setSingle2;
    checkMissing(setSingle3);
    c4 = `as.logical`(setSingle3);
    if c4 then L46() else L8();
  L51():
    x14 = force? x13;
    checkMissing(x14);
    popenv;
    return x14;
  L8():
    goto L9(NULL);
  L9(r29):
    l1 = ld x;
    attr__ = ldf `attr<-`;
    check L48() else D23();
  L46():
    goto L9(TRUE);
  D23():
    deopt 76 [r29, l1, r29];
  L48():
    r30 = dyn attr__(l1, NULL, "Csingle", r29);
    check L49() else D24();
  D24():
    deopt 79 [r29, r30];
  L49():
    st x = r30;
    goto L10();
  }
}