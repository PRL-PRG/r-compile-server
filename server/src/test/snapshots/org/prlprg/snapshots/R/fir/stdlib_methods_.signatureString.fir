fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4160782785;
    st `.signatureString` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4160782785(fdef, signature) {
  (reg fdef:*, reg signature:*) -+> V { var fdef:*, var signature:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg signature1:*, reg signature2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg snames:*, reg snames1:V, reg c:V, reg c1:L, reg is:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r6:V, reg c2:L, reg __:cls, reg r7:V, reg matchSignature:cls, reg signature3:*, reg signature4:V, reg p1:p(V +), reg fdef3:*, reg fdef4:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg snames2:*, reg snames3:V, reg length:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg r18:V, reg signature5:*, reg signature6:V, reg length1:cls, reg r19:V, reg r20:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg signature7:*, reg signature8:V, reg length2:cls, reg r23:V, reg l:*, reg length__:cls, reg r24:V, reg r25:V, reg paste:cls, reg signature9:*, reg signature10:V, reg p3:p(V +), reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg signature11:*, reg signature12:V, reg as_character:cls, reg r32:V, reg paste1:cls, reg paste2:cls, reg snames4:*, reg snames5:V, reg p4:p(V +), reg signature13:*, reg signature14:V, reg p5:p(V +), reg r35:V, reg p6:p(V +), reg r37:V |
    mkenv;
    st fdef = fdef;
    st signature = signature;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    st snames = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L12():
    signature1 = ld signature;
    check L14() else D0();
  L13():
    r = dyn base(<sym signature>);
    goto L0(r);
  D0():
    deopt 2 [signature1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L19() else L2();
  L14():
    signature2 = force? signature1;
    checkMissing(signature2);
    names = ldf names in base;
    r2 = dyn names(signature2);
    check L15() else D1();
  L16():
    snames = ld snames;
    check L18() else D2();
  L17():
    r3 = dyn base1(<sym snames>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [snames];
  L2():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L10():
    paste1 = ldf paste;
    check L50() else D19();
  L15():
    goto L0(r2);
  L18():
    snames1 = force? snames;
    checkMissing(snames1);
    c = `==`(snames1, NULL);
    goto L1(c);
  L19():
    is = ldf is;
    check L20() else D3();
  D3():
    deopt 12 [];
  D19():
    deopt 65 [];
  L11(r31):
    st signature = r31;
    goto L10();
  L20():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r6 = dyn is(p, "genericFunction");
    check L21() else D4();
  L46():
    signature11 = ld signature;
    check L48() else D17();
  L47():
    r30 = dyn base5(<sym signature>);
    goto L11(r30);
  L50():
    p6 = prom<V +>{
      paste2 = ldf paste0;
      p4 = prom<V +>{
        snames4 = ld snames;
        snames5 = force? snames4;
        checkMissing(snames5);
        return snames5;
      };
      p5 = prom<V +>{
        signature13 = ld signature;
        signature14 = force? signature13;
        checkMissing(signature14);
        return signature14;
      };
      r35 = dyn paste2(p4, "=\"", p5, "\"");
      return r35;
    };
    r37 = dyn paste1[, collapse](p6, ", ");
    check L51() else D20();
  D4():
    deopt 15 [r6];
  D17():
    deopt 59 [signature11];
  D20():
    deopt 69 [r37];
  L21():
    c2 = `as.logical`(r6);
    if c2 then L22() else L3();
  L48():
    signature12 = force? signature11;
    checkMissing(signature12);
    as_character = ldf `as.character` in base;
    r32 = dyn as_character(signature12);
    check L49() else D18();
  L51():
    popenv;
    return r37;
  D18():
    deopt 62 [r32];
  L3():
    paste = ldf paste;
    check L42() else D15();
  L22():
    __ = ldf `@` in base;
    r7 = dyn __(<sym fdef>, <sym signature>);
    st snames = r7;
    matchSignature = ldf matchSignature;
    check L23() else D5();
  L49():
    goto L11(r32);
  D5():
    deopt 20 [];
  D15():
    deopt 51 [];
  L23():
    p1 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    p2 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r10 = dyn matchSignature(p1, p2);
    check L24() else D6();
  L42():
    p3 = prom<V +>{
      signature9 = ld signature;
      signature10 = force? signature9;
      checkMissing(signature10);
      return signature10;
    };
    r28 = dyn paste[, collapse](p3, ", ");
    check L43() else D16();
  D6():
    deopt 23 [r10];
  D16():
    deopt 55 [r28];
  L24():
    st signature = r10;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L43():
    popenv;
    return r28;
  L4(r12):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L25():
    snames2 = ld snames;
    check L27() else D7();
  L26():
    r11 = dyn base2(<sym snames>);
    goto L4(r11);
  D7():
    deopt 27 [snames2];
  L5(r17, r18):
    r20 = `>`(r17, r18);
    c3 = `as.logical`(r20);
    if c3 then L33() else L6();
  L27():
    snames3 = force? snames2;
    checkMissing(snames3);
    length = ldf length in base;
    r13 = dyn length(snames3);
    check L28() else D8();
  L29():
    signature5 = ld signature;
    check L31() else D9();
  L30():
    r16 = dyn base3(<sym signature>);
    goto L5(r12, r16);
  D8():
    deopt 30 [r13];
  D9():
    deopt 32 [r12, signature5];
  L6():
    goto L8(NULL);
  L8(r25):
    goto L10();
  L28():
    goto L4(r13);
  L31():
    signature6 = force? signature5;
    checkMissing(signature6);
    length1 = ldf length in base;
    r19 = dyn length1(signature6);
    check L32() else D10();
  L33():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  D10():
    deopt 35 [r12, r19];
  L7(r22):
    l = ld snames;
    length__ = ldf `length<-`;
    check L38() else D13();
  L32():
    goto L5(r12, r19);
  L34():
    signature7 = ld signature;
    check L36() else D11();
  L35():
    r21 = dyn base4(<sym signature>);
    goto L7(r21);
  D11():
    deopt 39 [signature7];
  D13():
    deopt 44 [r22, l, r22];
  L36():
    signature8 = force? signature7;
    checkMissing(signature8);
    length2 = ldf length in base;
    r23 = dyn length2(signature8);
    check L37() else D12();
  L38():
    r24 = dyn length__(l, NULL, r22);
    check L39() else D14();
  D12():
    deopt 42 [r23];
  D14():
    deopt 46 [r22, r24];
  L37():
    goto L7(r23);
  L39():
    st snames = r24;
    goto L8(r22);
  }
}