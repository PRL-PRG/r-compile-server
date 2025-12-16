fun main() {
  () -+> V { reg r:cls, reg gl:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg gl1:cls, reg r6:V, reg gl2:cls, reg r7:V |
    mkenv;
    r = clos `inner-2032500740`;
    st gl = r;
    gl = ldf gl;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("Control", "Treat");
      goto L0(r3);
    L2():
      r1 = dyn base("Control", "Treat");
      goto L0(r1);
    };
    r5 = dyn gl[, , labels](2.0, 8.0, p);
    check L1() else D1();
  D1():
    deopt 9 [r5];
  L1():
    gl1 = ldf gl;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    r6 = dyn gl1(2.0, 1.0, 20.0);
    check L3() else D3();
  D3():
    deopt 15 [r6];
  L3():
    gl2 = ldf gl;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    r7 = dyn gl2(2.0, 2.0, 20.0);
    check L5() else D5();
  D5():
    deopt 21 [r7];
  L5():
    popenv;
    return r7;
  }
}
fun `inner-2032500740`(n, k, length, labels, ordered) {
  (reg n:*, reg k:*, reg length:*, reg labels:*, reg ordered:*) -+> V { var n:*, var k:*, var length:*, reg length_isMissing:L, reg length_orDefault:*, reg n1:*, reg n2:V, reg k1:*, reg k2:V, reg r:V, reg p:p(V +), var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg n3:*, reg n4:V, reg r4:I, reg p1:p(V +), var ordered:*, reg ordered_isMissing:L, reg ordered_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg n5:*, reg n6:V, reg r12:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg k3:*, reg k4:V, reg n7:*, reg n8:V, reg rep_int:cls, reg r15:V, reg rep_int1:cls, reg r16:V, reg length1:*, reg length2:V, reg rep_len:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg labels1:*, reg labels2:V, reg as_character:cls, reg r20:V, reg l:*, reg levels__:cls, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg ordered1:*, reg ordered2:V, reg c:L, reg r24:V, reg c1:cls, reg r25:V, reg l1:*, reg class__:cls, reg r26:V, reg f:*, reg f1:V |
    mkenv;
    st n = n;
    st k = k;
    length_isMissing = missing.0(length);
    if length_isMissing then L0() else L1(length);
  L0():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      r = `*`(n2, k2);
      return r;
    };
    goto L1(p);
  L1(length_orDefault):
    st length = length_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L2() else L3(labels);
  L2():
    p1 = prom<V +>{
      sym = ldf seq_len;
      base = ldf seq_len in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      r4 = seq_len(n4);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym n>);
      goto L0(r2);
    };
    goto L3(p1);
  L3(labels_orDefault):
    st labels = labels_orDefault;
    ordered_isMissing = missing.0(ordered);
    if ordered_isMissing then L4(FALSE) else L4(ordered);
  L4(ordered_orDefault):
    st ordered = ordered_orDefault;
    sym1 = ldf rep_len;
    base1 = ldf rep_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L5(r7):
    st f = r7;
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L28() else L29();
  L13():
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L14():
    r6 = dyn base1(<lang rep.int(seq_len(n), rep.int(k, n))>, <sym length>);
    goto L5(r6);
  L6(r9):
    length1 = ld length;
    check L26() else D5();
  L9(r19):
    l = ld f;
    levels__ = ldf `levels<-`;
    check L32() else D9();
  L15():
    sym3 = ldf seq_len;
    base3 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  L16():
    r8 = dyn base2(<lang seq_len(n)>, <lang rep.int(k, n)>);
    goto L6(r8);
  L28():
    labels1 = ld labels;
    check L30() else D7();
  L29():
    r18 = dyn base5(<sym labels>);
    goto L9(r18);
  D5():
    deopt 18 [length1];
  D7():
    deopt 25 [labels1];
  D9():
    deopt 30 [r19, l, r19];
  L7(r11):
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L20() else L21();
  L17():
    n5 = ld n;
    check L19() else D0();
  L18():
    r10 = dyn base3(<sym n>);
    goto L7(r10);
  L26():
    length2 = force? length1;
    checkMissing(length2);
    rep_len = ldf rep_len in base;
    r17 = dyn rep_len(r9, length2);
    check L27() else D6();
  L30():
    labels2 = force? labels1;
    checkMissing(labels2);
    as_character = ldf `as.character` in base;
    r20 = dyn as_character(labels2);
    check L31() else D8();
  L32():
    r21 = dyn levels__(l, NULL, r19);
    check L33() else D10();
  D0():
    deopt 5 [n5];
  D6():
    deopt 21 [r17];
  D8():
    deopt 28 [r20];
  D10():
    deopt 32 [r19, r21];
  L8(r14):
    rep_int1 = ldf `rep.int` in base;
    r16 = dyn rep_int1(r11, r14);
    check L25() else D4();
  L19():
    n6 = force? n5;
    checkMissing(n6);
    r12 = seq_len(n6);
    goto L7(r12);
  L20():
    k3 = ld k;
    check L22() else D1();
  L21():
    r13 = dyn base4(<sym k>, <sym n>);
    goto L8(r13);
  L27():
    goto L5(r17);
  L31():
    goto L9(r20);
  L33():
    st f = r21;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L34() else L35();
  D1():
    deopt 10 [k3];
  D4():
    deopt 17 [r16];
  L10(r23):
    l1 = ld f;
    class__ = ldf `class<-`;
    check L40() else D13();
  L22():
    k4 = force? k3;
    checkMissing(k4);
    n7 = ld n;
    check L23() else D2();
  L25():
    goto L6(r16);
  L34():
    ordered1 = ld ordered;
    check L36() else D11();
  L35():
    r22 = dyn base6(<lang if(ordered, "ordered")>, "factor");
    goto L10(r22);
  D2():
    deopt 12 [n7];
  D11():
    deopt 36 [ordered1];
  D13():
    deopt 46 [r23, l1, r23];
  L23():
    n8 = force? n7;
    checkMissing(n8);
    rep_int = ldf `rep.int` in base;
    r15 = dyn rep_int(k4, n8);
    check L24() else D3();
  L36():
    ordered2 = force? ordered1;
    checkMissing(ordered2);
    c = `as.logical`(ordered2);
    if c then L37() else L11();
  L40():
    r26 = dyn class__(l1, NULL, r23);
    check L41() else D14();
  D3():
    deopt 15 [r15];
  D14():
    deopt 48 [r23, r26];
  L11():
    goto L12(NULL);
  L12(r24):
    c1 = ldf c in base;
    r25 = dyn c1(r24, "factor");
    check L39() else D12();
  L24():
    goto L8(r15);
  L37():
    goto L12("ordered");
  L41():
    st f = r26;
    f = ld f;
    check L42() else D15();
  D12():
    deopt 44 [r25];
  D15():
    deopt 50 [f];
  L39():
    goto L10(r25);
  L42():
    f1 = force? f;
    checkMissing(f1);
    popenv;
    return f1;
  }
}