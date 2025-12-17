fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner913548352;
    st `layout.show` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner913548352(n) {
  (reg n:*) -+> V { var n:*, reg n_isMissing:L, reg n_orDefault:*, reg par:cls, reg r:V, reg par1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg rep_int:cls, reg r3:V, reg p:p(V +), reg r5:V, reg par2:cls, reg oma_saved:*, reg oma_saved1:V, reg p1:p(V +), reg r7:V, reg par3:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg rep_int1:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg on_exit:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg n1:*, reg n2:V, reg r18:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg plot_new:cls, reg r19:V, reg box:cls, reg r20:V, reg text:cls, reg i5:*, reg i6:V, reg p3:p(V +), reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg invisible:cls, reg r25:V |
    mkenv;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(1.0) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    par = ldf par;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    r = dyn par("oma");
    check L7() else D1();
  D1():
    deopt 3 [r];
  L7():
    st `oma.saved` = r;
    par1 = ldf par;
    check L8() else D2();
  D2():
    deopt 6 [];
  L8():
    p = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      rep_int = ldf `rep.int` in base;
      r3 = dyn rep_int(0.0, 4.0);
      goto L0(r3);
    L2():
      r1 = dyn base(0.0, 4.0);
      goto L0(r1);
    };
    r5 = dyn par1[oma](p);
    check L9() else D3();
  D3():
    deopt 9 [r5];
  L9():
    par2 = ldf par;
    check L10() else D4();
  D4():
    deopt 11 [];
  L10():
    p1 = prom<V +>{
      oma_saved = ld `oma.saved`;
      oma_saved1 = force? oma_saved;
      checkMissing(oma_saved1);
      return oma_saved1;
    };
    r7 = dyn par2[oma](p1);
    check L11() else D5();
  D5():
    deopt 14 [r7];
  L11():
    par3 = ldf par;
    check L12() else D6();
  D6():
    deopt 16 [];
  L12():
    p2 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      rep_int1 = ldf `rep.int` in base;
      r10 = dyn rep_int1(0.0, 4.0);
      goto L0(r10);
    L2():
      r8 = dyn base1(0.0, 4.0);
      goto L0(r8);
    };
    r12 = dyn par3[mar](p2);
    check L13() else D7();
  D7():
    deopt 19 [r12];
  L13():
    st `o.par` = r12;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L1():
    sym3 = ldf seq_len;
    base3 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L16() else L17();
  L14():
    on_exit = ldf `on.exit` in base;
    r15 = dyn on_exit(<lang par(o.par)>);
    goto L1();
  L15():
    r13 = dyn base2(<lang par(o.par)>);
    goto L1();
  L2(r17):
    s = toForSeq(r17);
    l = length(s);
    i = 0;
    goto L3(i);
  L16():
    n1 = ld n;
    check L18() else D8();
  L17():
    r16 = dyn base3(<sym n>);
    goto L2(r16);
  D8():
    deopt 25 [n1];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L19() else L4();
  L18():
    n2 = force? n1;
    checkMissing(n2);
    r18 = seq_len(n2);
    goto L2(r18);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    plot_new = ldf `plot.new`;
    check L20() else D9();
  L19():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  D9():
    deopt 29 [i2];
  L5(r24):
    popenv;
    return r24;
  L20():
    r19 = dyn plot_new();
    check L21() else D10();
  L26():
    invisible = ldf invisible in base;
    r25 = dyn invisible();
    check L28() else D15();
  L27():
    r23 = dyn base4();
    goto L5(r23);
  D10():
    deopt 30 [i2, r19];
  D15():
    deopt 46 [r25];
  L21():
    box = ldf box;
    check L22() else D11();
  L28():
    goto L5(r25);
  D11():
    deopt 32 [i2];
  L22():
    r20 = dyn box();
    check L23() else D12();
  D12():
    deopt 33 [i2, r20];
  L23():
    text = ldf text;
    check L24() else D13();
  D13():
    deopt 35 [i2];
  L24():
    p3 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r22 = dyn text(0.5, 0.5, p3);
    check L25() else D14();
  D14():
    deopt 39 [i2, r22];
  L25():
    goto L3(i2);
  }
}