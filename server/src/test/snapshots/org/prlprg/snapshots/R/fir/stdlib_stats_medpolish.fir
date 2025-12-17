fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg rbind:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg c2:cls, reg r15:V, reg p3:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg c3:cls, reg r19:V, reg p4:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg c4:cls, reg r23:V, reg p5:p(V +), reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg r29:V, reg c5:cls, reg r30:V, reg paste:cls, reg p6:p(V +), reg r32:V, reg list:cls, reg r33:V, reg l:*, reg dimnames__:cls, reg r34:V, reg deaths:*, reg deaths1:V, reg medpolish:cls, reg deaths2:*, reg deaths3:V, reg p7:p(V +), reg r36:V, reg plot:cls, reg med_d:*, reg med_d1:V, reg p8:p(V +), reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg deaths4:*, reg deaths5:V, reg med_d2:*, reg med_d3:V, reg c6:L, reg deaths7:V, reg med_d5:V, reg dr:V, reg dc:L, reg dx:V, reg deaths9:V, reg dx1:V, reg r41:V, reg outer:cls, reg med_d6:*, reg med_d7:V, reg c7:L, reg med_d9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r42:V, reg p9:p(V +), reg med_d10:*, reg med_d11:V, reg c8:L, reg med_d13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r44:V, reg p10:p(V +), reg __:*, reg __1:V, reg p11:p(V +), reg r47:V, reg r48:V, reg med_d14:*, reg med_d15:V, reg c9:L, reg deaths11:V, reg r50:V, reg med_d17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg deaths13:V, reg r52:V, reg dx7:V, reg r53:V, reg r54:V, reg r55:V, reg all:cls, reg r56:V |
    mkenv;
    r = clos inner3010433090;
    st medpolish = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    rbind = ldf rbind;
    check L8() else D2();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L6():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L7() else D1();
  L8():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c(14.0, 15.0, 14.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(14.0, 15.0, 14.0);
      goto L0(r5);
    };
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c1 = ldf c in base;
      r11 = dyn c1(7.0, 4.0, 7.0);
      goto L0(r11);
    L2():
      r9 = dyn base2(7.0, 4.0, 7.0);
      goto L0(r9);
    };
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c2 = ldf c in base;
      r15 = dyn c2(8.0, 2.0, 10.0);
      goto L0(r15);
    L2():
      r13 = dyn base3(8.0, 2.0, 10.0);
      goto L0(r13);
    };
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c3 = ldf c in base;
      r19 = dyn c3(15.0, 9.0, 10.0);
      goto L0(r19);
    L2():
      r17 = dyn base4(15.0, 9.0, 10.0);
      goto L0(r17);
    };
    p5 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      c4 = ldf c in base;
      r23 = dyn c4(0.0, 2.0, 0.0);
      goto L0(r23);
    L2():
      r21 = dyn base5(0.0, 2.0, 0.0);
      goto L0(r21);
    };
    r25 = dyn rbind(p1, p2, p3, p4, p5);
    check L9() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 15 [r25];
  L7():
    goto L0();
  L9():
    st deaths = r25;
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L10() else L11();
  L1(r27):
    l = ld deaths;
    dimnames__ = ldf `dimnames<-`;
    check L18() else D8();
  L10():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L12() else L13();
  L11():
    r26 = dyn base6(<lang c("1-24", "25-74", "75-199", "200++", "NA")>, <lang paste(`:`(1973.0, 1975.0))>);
    goto L1(r26);
  D8():
    deopt 35 [r27, l, r27];
  L2(r29):
    paste = ldf paste;
    check L15() else D5();
  L12():
    c5 = ldf c in base;
    r30 = dyn c5("1-24", "25-74", "75-199", "200++", "NA");
    check L14() else D4();
  L13():
    r28 = dyn base7("1-24", "25-74", "75-199", "200++", "NA");
    goto L2(r28);
  L18():
    r34 = dyn dimnames__(l, NULL, r27);
    check L19() else D9();
  D4():
    deopt 27 [r30];
  D5():
    deopt 29 [];
  D9():
    deopt 37 [r27, r34];
  L14():
    goto L2(r30);
  L15():
    p6 = prom<V +>{
      return <int 1973, 1974, 1975>;
    };
    r32 = dyn paste(p6);
    check L16() else D6();
  L19():
    st deaths = r34;
    deaths = ld deaths;
    check L20() else D10();
  D6():
    deopt 31 [r32];
  D10():
    deopt 39 [deaths];
  L16():
    list = ldf list in base;
    r33 = dyn list(r29, r32);
    check L17() else D7();
  L20():
    deaths1 = force? deaths;
    checkMissing(deaths1);
    medpolish = ldf medpolish;
    check L21() else D11();
  D7():
    deopt 33 [r33];
  D11():
    deopt 42 [];
  L17():
    goto L1(r33);
  L21():
    p7 = prom<V +>{
      deaths2 = ld deaths;
      deaths3 = force? deaths2;
      checkMissing(deaths3);
      return deaths3;
    };
    r36 = dyn medpolish(p7);
    check L22() else D12();
  D12():
    deopt 44 [r36];
  L22():
    st `med.d` = r36;
    plot = ldf plot;
    check L23() else D13();
  D13():
    deopt 47 [];
  L23():
    p8 = prom<V +>{
      med_d = ld `med.d`;
      med_d1 = force? med_d;
      checkMissing(med_d1);
      return med_d1;
    };
    r38 = dyn plot(p8);
    check L24() else D14();
  D14():
    deopt 49 [r38];
  L24():
    sym8 = ldf all;
    base8 = ldf all in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L25() else L26();
  L3(r40):
    popenv;
    return r40;
  L25():
    deaths4 = ld deaths;
    check L27() else D15();
  L26():
    r39 = dyn base8(<lang `==`(deaths, `+`(`+`(`$`(med.d, overall), outer(`$`(med.d, row), `$`(med.d, col), `+`)), `$`(med.d, residuals)))>);
    goto L3(r39);
  D15():
    deopt 52 [deaths4];
  L27():
    deaths5 = force? deaths4;
    checkMissing(deaths5);
    med_d2 = ld `med.d`;
    check L28() else D16();
  D16():
    deopt 53 [deaths5, med_d2];
  L28():
    med_d3 = force? med_d2;
    checkMissing(med_d3);
    c6 = `is.object`(med_d3);
    if c6 then L30() else L31(deaths5, med_d3);
  L29(deaths9, dx1):
    outer = ldf outer;
    check L33() else D17();
  L30():
    dr = tryDispatchBuiltin.1("$", med_d3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(deaths5, dr);
  L31(deaths7, med_d5):
    r41 = `$`(med_d5, <sym overall>);
    goto L29(deaths7, r41);
  D17():
    deopt 56 [deaths9, dx1];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(deaths5, dx);
  L33():
    p9 = prom<V +>{
      med_d6 = ld `med.d`;
      med_d7 = force? med_d6;
      checkMissing(med_d7);
      c7 = `is.object`(med_d7);
      if c7 then L1() else L2(med_d7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", med_d7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(med_d9):
      r42 = `$`(med_d9, <sym row>);
      goto L0(r42);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p10 = prom<V +>{
      med_d10 = ld `med.d`;
      med_d11 = force? med_d10;
      checkMissing(med_d11);
      c8 = `is.object`(med_d11);
      if c8 then L1() else L2(med_d11);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", med_d11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(med_d13):
      r44 = `$`(med_d13, <sym col>);
      goto L0(r44);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p11 = prom<V +>{
      __ = ld `+`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r47 = dyn outer(p9, p10, p11);
    check L34() else D18();
  D18():
    deopt 60 [deaths9, dx1, r47];
  L34():
    r48 = `+`(dx1, r47);
    med_d14 = ld `med.d`;
    check L35() else D19();
  D19():
    deopt 61 [deaths9, r48, med_d14];
  L35():
    med_d15 = force? med_d14;
    checkMissing(med_d15);
    c9 = `is.object`(med_d15);
    if c9 then L37() else L38(deaths9, r48, med_d15);
  L36(deaths13, r52, dx7):
    r54 = `+`(r52, dx7);
    r55 = `==`(deaths13, r54);
    all = ldf all in base;
    r56 = dyn all(r55);
    check L40() else D20();
  L37():
    dr6 = tryDispatchBuiltin.1("$", med_d15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L39() else L38(deaths9, r48, dr6);
  L38(deaths11, r50, med_d17):
    r53 = `$`(med_d17, <sym residuals>);
    goto L36(deaths11, r50, r53);
  D20():
    deopt 67 [r56];
  L39():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L36(deaths9, r48, dx6);
  L40():
    goto L3(r56);
  }
}
fun inner3010433090(x, eps, maxiter, `trace.iter`, `na.rm`) {
  (reg x:*, reg eps:*, reg maxiter:*, reg trace_iter:*, reg na_rm:*) -+> V { var x:*, var eps:*, reg eps_isMissing:L, reg eps_orDefault:*, var maxiter:*, reg maxiter_isMissing:L, reg maxiter_orDefault:*, var `trace.iter`:*, reg trace_iter_isMissing:L, reg trace_iter_orDefault:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg nrow:cls, reg z:*, reg z1:V, reg p1:p(V +), reg r3:V, reg ncol:cls, reg z2:*, reg z3:V, reg p2:p(V +), reg r5:V, reg numeric:cls, reg nr:*, reg nr1:V, reg p3:p(V +), reg r7:V, reg numeric1:cls, reg nc:*, reg nc1:V, reg p4:p(V +), reg r9:V, reg maxiter1:*, reg maxiter2:V, reg r10:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x3:V, reg apply:cls, reg z4:*, reg z5:V, reg p5:p(V +), reg median:*, reg median1:V, reg p6:p(V +), reg na_rm1:*, reg na_rm2:V, reg p7:p(V +), reg r14:V, reg z6:*, reg z7:V, reg matrix:cls, reg rdelta:*, reg rdelta1:V, reg p8:p(V +), reg nr2:*, reg nr3:V, reg p9:p(V +), reg nc2:*, reg nc3:V, reg p10:p(V +), reg r18:V, reg r19:V, reg r20:*, reg r21:V, reg rdelta2:*, reg rdelta3:V, reg r22:V, reg median2:cls, reg c1:*, reg c2:V, reg p11:p(V +), reg na_rm3:*, reg na_rm4:V, reg p12:p(V +), reg r25:V, reg c3:*, reg c4:V, reg delta:*, reg delta1:V, reg r26:V, reg t:*, reg t1:V, reg delta2:*, reg delta3:V, reg r27:V, reg apply1:cls, reg z8:*, reg z9:V, reg p13:p(V +), reg median3:*, reg median4:V, reg p14:p(V +), reg na_rm5:*, reg na_rm6:V, reg p15:p(V +), reg r31:V, reg z10:*, reg z11:V, reg matrix1:cls, reg cdelta:*, reg cdelta1:V, reg p16:p(V +), reg nr4:*, reg nr5:V, reg p17:p(V +), reg nc4:*, reg nc5:V, reg p18:p(V +), reg r35:V, reg r36:V, reg c5:*, reg c6:V, reg cdelta2:*, reg cdelta3:V, reg r37:V, reg median5:cls, reg r38:*, reg r39:V, reg p19:p(V +), reg na_rm7:*, reg na_rm8:V, reg p20:p(V +), reg r42:V, reg r43:*, reg r44:V, reg delta4:*, reg delta5:V, reg r45:V, reg t2:*, reg t3:V, reg delta6:*, reg delta7:V, reg r46:V, reg sym:cls, reg base:cls, reg guard:L, reg r47:V, reg i7:I, reg r48:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r49:V, reg i10:I, reg r50:V, reg z12:*, reg z13:V, reg abs:cls, reg r51:V, reg na_rm9:*, reg na_rm10:V, reg sum:cls, reg r52:V, reg newsum:*, reg newsum1:V, reg r53:V, reg c7:L, reg i11:I, reg c8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r54:V, reg i15:I, reg c12:L, reg r55:V, reg newsum2:*, reg newsum3:V, reg oldsum:*, reg oldsum1:V, reg r56:V, reg abs1:cls, reg r57:V, reg eps1:*, reg eps2:V, reg newsum4:*, reg newsum5:V, reg r58:V, reg r59:V, reg c13:L, reg c14:V, reg converged:*, reg converged1:V, reg c16:L, reg newsum6:*, reg newsum7:V, reg trace_iter1:*, reg trace_iter2:V, reg c17:L, reg cat:cls, reg iter:*, reg iter1:V, reg p21:p(V +), reg newsum8:*, reg newsum9:V, reg p22:p(V +), reg r63:V, reg i24:I, reg converged2:*, reg converged3:V, reg c18:L, reg trace_iter3:*, reg trace_iter4:V, reg c19:L, reg cat1:cls, reg newsum10:*, reg newsum11:V, reg p23:p(V +), reg r66:V, reg r67:V, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg maxiter3:*, reg maxiter4:V, reg p24:p(V +), reg r70:V, reg p25:p(V +), reg maxiter5:*, reg maxiter6:V, reg p26:p(V +), reg r73:V, reg p27:p(V +), reg r75:V, reg rownames:cls, reg z14:*, reg z15:V, reg p28:p(V +), reg r77:V, reg l1:*, reg names__:cls, reg r78:V, reg colnames:cls, reg z16:*, reg z17:V, reg p29:p(V +), reg r80:V, reg l2:*, reg names__1:cls, reg r81:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r82:V, reg r83:V, reg t4:*, reg t5:V, reg r84:*, reg r85:V, reg c20:*, reg c21:V, reg z18:*, reg z19:V, reg deparse1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r86:V, reg r87:V, reg substitute:cls, reg r88:V, reg p30:p(V +), reg r90:V, reg list:cls, reg r91:V, reg l3:*, reg class__:cls, reg r92:V, reg ans:*, reg ans1:V |
    mkenv;
    st x = x;
    eps_isMissing = missing.0(eps);
    if eps_isMissing then L0(0.01) else L0(eps);
  L0(eps_orDefault):
    st eps = eps_orDefault;
    maxiter_isMissing = missing.0(maxiter);
    if maxiter_isMissing then L1(10) else L1(maxiter);
  L1(maxiter_orDefault):
    st maxiter = maxiter_orDefault;
    trace_iter_isMissing = missing.0(trace_iter);
    if trace_iter_isMissing then L2(TRUE) else L2(trace_iter);
  L2(trace_iter_orDefault):
    st `trace.iter` = trace_iter_orDefault;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L3(FALSE) else L3(na_rm);
  L3(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    as_matrix = ldf `as.matrix`;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_matrix(p);
    check L21() else D1();
  D1():
    deopt 3 [r1];
  L21():
    st z = r1;
    nrow = ldf nrow;
    check L22() else D2();
  D2():
    deopt 6 [];
  L22():
    p1 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r3 = dyn nrow(p1);
    check L23() else D3();
  D3():
    deopt 8 [r3];
  L23():
    st nr = r3;
    ncol = ldf ncol;
    check L24() else D4();
  D4():
    deopt 11 [];
  L24():
    p2 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r5 = dyn ncol(p2);
    check L25() else D5();
  D5():
    deopt 13 [r5];
  L25():
    st nc = r5;
    st t = 0.0;
    numeric = ldf numeric;
    check L26() else D6();
  D6():
    deopt 19 [];
  L26():
    p3 = prom<V +>{
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      return nr1;
    };
    r7 = dyn numeric(p3);
    check L27() else D7();
  D7():
    deopt 21 [r7];
  L27():
    st r = r7;
    numeric1 = ldf numeric;
    check L28() else D8();
  D8():
    deopt 24 [];
  L28():
    p4 = prom<V +>{
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      return nc1;
    };
    r9 = dyn numeric1(p4);
    check L29() else D9();
  D9():
    deopt 26 [r9];
  L29():
    st c = r9;
    st oldsum = 0.0;
    maxiter1 = ld maxiter;
    check L30() else D10();
  D10():
    deopt 32 [1, maxiter1];
  L30():
    maxiter2 = force? maxiter1;
    checkMissing(maxiter2);
    r10 = `:`(1, maxiter2);
    s = toForSeq(r10);
    l = length(s);
    i = 0;
    goto L4(i);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L31() else L14();
  L10():
    converged2 = ld converged;
    check L86() else D52();
  L14():
    x3 = `[[`(s, i2, NULL, TRUE);
    st iter = x3;
    apply = ldf apply;
    check L32() else D11();
  L31():
    goto L10();
  D11():
    deopt 36 [i2];
  D52():
    deopt 178 [converged2];
  L32():
    p5 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    p6 = prom<V +>{
      median = ld median;
      median1 = force? median;
      checkMissing(median1);
      return median1;
    };
    p7 = prom<V +>{
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      return na_rm2;
    };
    r14 = dyn apply[, , , `na.rm`](p5, 1, p6, p7);
    check L33() else D12();
  L86():
    converged3 = force? converged2;
    checkMissing(converged3);
    c18 = `as.logical`(converged3);
    if c18 then L87() else L15();
  D12():
    deopt 42 [i2, r14];
  L15():
    warning = ldf warning;
    check L94() else D56();
  L18():
    rownames = ldf rownames;
    check L96() else D58();
  L33():
    st rdelta = r14;
    z6 = ld z;
    check L34() else D13();
  L87():
    trace_iter3 = ld `trace.iter`;
    check L88() else D53();
  D13():
    deopt 44 [i2, z6];
  D53():
    deopt 180 [trace_iter3];
  D56():
    deopt 193 [];
  D58():
    deopt 199 [];
  L34():
    z7 = force? z6;
    checkMissing(z7);
    matrix = ldf matrix;
    check L35() else D14();
  L88():
    trace_iter4 = force? trace_iter3;
    checkMissing(trace_iter4);
    c19 = `as.logical`(trace_iter4);
    if c19 then L89() else L16();
  L94():
    p27 = prom<V +>{
      sprintf = ldf sprintf;
      p25 = prom<V +>{
        ngettext = ldf ngettext;
        p24 = prom<V +>{
          maxiter3 = ld maxiter;
          maxiter4 = force? maxiter3;
          checkMissing(maxiter4);
          return maxiter4;
        };
        r70 = dyn ngettext(p24, "medpolish() did not converge in %d iteration", "medpolish() did not converge in %d iterations");
        return r70;
      };
      p26 = prom<V +>{
        maxiter5 = ld maxiter;
        maxiter6 = force? maxiter5;
        checkMissing(maxiter6);
        return maxiter6;
      };
      r73 = dyn sprintf(p25, p26);
      return r73;
    };
    r75 = dyn warning[, domain](p27, NA_LGL);
    check L95() else D57();
  L96():
    p28 = prom<V +>{
      z14 = ld z;
      z15 = force? z14;
      checkMissing(z15);
      return z15;
    };
    r77 = dyn rownames(p28);
    check L97() else D59();
  D14():
    deopt 46 [i2, z7];
  D57():
    deopt 197 [r75];
  D59():
    deopt 201 [r77];
  L16():
    goto L17(NULL);
  L17(r67):
    goto L18();
  L35():
    p8 = prom<V +>{
      rdelta = ld rdelta;
      rdelta1 = force? rdelta;
      checkMissing(rdelta1);
      return rdelta1;
    };
    p9 = prom<V +>{
      nr2 = ld nr;
      nr3 = force? nr2;
      checkMissing(nr3);
      return nr3;
    };
    p10 = prom<V +>{
      nc2 = ld nc;
      nc3 = force? nc2;
      checkMissing(nc3);
      return nc3;
    };
    r18 = dyn matrix[, nrow, ncol](p8, p9, p10);
    check L36() else D15();
  L89():
    cat1 = ldf cat;
    check L90() else D54();
  L95():
    goto L18();
  L97():
    l1 = ld r;
    names__ = ldf `names<-`;
    check L98() else D60();
  D15():
    deopt 52 [i2, z7, r18];
  D54():
    deopt 183 [];
  D60():
    deopt 203 [r77, l1, r77];
  L36():
    r19 = `-`(z7, r18);
    st z = r19;
    r20 = ld r;
    check L37() else D16();
  L90():
    p23 = prom<V +>{
      newsum10 = ld newsum;
      newsum11 = force? newsum10;
      checkMissing(newsum11);
      return newsum11;
    };
    r66 = dyn cat1[, , , sep]("Final: ", p23, "\n", "");
    check L91() else D55();
  L98():
    r78 = dyn names__(l1, NULL, r77);
    check L99() else D61();
  D16():
    deopt 55 [i2, r20];
  D55():
    deopt 189 [r66];
  D61():
    deopt 205 [r77, r78];
  L37():
    r21 = force? r20;
    checkMissing(r21);
    rdelta2 = ld rdelta;
    check L38() else D17();
  L91():
    goto L17(r66);
  L99():
    st r = r78;
    colnames = ldf colnames;
    check L100() else D62();
  D17():
    deopt 56 [i2, r21, rdelta2];
  D62():
    deopt 208 [];
  L38():
    rdelta3 = force? rdelta2;
    checkMissing(rdelta3);
    r22 = `+`(r21, rdelta3);
    st r = r22;
    median2 = ldf median;
    check L39() else D18();
  L100():
    p29 = prom<V +>{
      z16 = ld z;
      z17 = force? z16;
      checkMissing(z17);
      return z17;
    };
    r80 = dyn colnames(p29);
    check L101() else D63();
  D18():
    deopt 61 [i2];
  D63():
    deopt 210 [r80];
  L39():
    p11 = prom<V +>{
      c1 = ld c;
      c2 = force? c1;
      checkMissing(c2);
      return c2;
    };
    p12 = prom<V +>{
      na_rm3 = ld `na.rm`;
      na_rm4 = force? na_rm3;
      checkMissing(na_rm4);
      return na_rm4;
    };
    r25 = dyn median2[, `na.rm`](p11, p12);
    check L40() else D19();
  L101():
    l2 = ld c;
    names__1 = ldf `names<-`;
    check L102() else D64();
  D19():
    deopt 65 [i2, r25];
  D64():
    deopt 212 [r80, l2, r80];
  L40():
    st delta = r25;
    c3 = ld c;
    check L41() else D20();
  L102():
    r81 = dyn names__1(l2, NULL, r80);
    check L103() else D65();
  D20():
    deopt 67 [i2, c3];
  D65():
    deopt 214 [r80, r81];
  L41():
    c4 = force? c3;
    checkMissing(c4);
    delta = ld delta;
    check L42() else D21();
  L103():
    st c = r81;
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L104() else L105();
  D21():
    deopt 68 [i2, c4, delta];
  L19(r83):
    st ans = r83;
    l3 = ld ans;
    class__ = ldf `class<-`;
    check L113() else D73();
  L42():
    delta1 = force? delta;
    checkMissing(delta1);
    r26 = `-`(c4, delta1);
    st c = r26;
    t = ld t;
    check L43() else D22();
  L104():
    t4 = ld t;
    check L106() else D66();
  L105():
    r82 = dyn base3[overall, row, col, residuals, name](<sym t>, <sym r>, <sym c>, <sym z>, <lang deparse1(substitute(x))>);
    goto L19(r82);
  D22():
    deopt 72 [i2, t];
  D66():
    deopt 218 [t4];
  D73():
    deopt 241 ["medpolish", l3, "medpolish"];
  L43():
    t1 = force? t;
    checkMissing(t1);
    delta2 = ld delta;
    check L44() else D23();
  L106():
    t5 = force? t4;
    checkMissing(t5);
    r84 = ld r;
    check L107() else D67();
  L113():
    r92 = dyn class__(l3, NULL, "medpolish");
    check L114() else D74();
  D23():
    deopt 73 [i2, t1, delta2];
  D67():
    deopt 221 [r84];
  D74():
    deopt 243 ["medpolish", r92];
  L44():
    delta3 = force? delta2;
    checkMissing(delta3);
    r27 = `+`(t1, delta3);
    st t = r27;
    apply1 = ldf apply;
    check L45() else D24();
  L107():
    r85 = force? r84;
    checkMissing(r85);
    c20 = ld c;
    check L108() else D68();
  L114():
    st ans = r92;
    ans = ld ans;
    check L115() else D75();
  D24():
    deopt 78 [i2];
  D68():
    deopt 224 [c20];
  D75():
    deopt 245 [ans];
  L45():
    p13 = prom<V +>{
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      return z9;
    };
    p14 = prom<V +>{
      median3 = ld median;
      median4 = force? median3;
      checkMissing(median4);
      return median4;
    };
    p15 = prom<V +>{
      na_rm5 = ld `na.rm`;
      na_rm6 = force? na_rm5;
      checkMissing(na_rm6);
      return na_rm6;
    };
    r31 = dyn apply1[, , , `na.rm`](p13, 2, p14, p15);
    check L46() else D25();
  L108():
    c21 = force? c20;
    checkMissing(c21);
    z18 = ld z;
    check L109() else D69();
  L115():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D25():
    deopt 84 [i2, r31];
  D69():
    deopt 227 [z18];
  L46():
    st cdelta = r31;
    z10 = ld z;
    check L47() else D26();
  L109():
    z19 = force? z18;
    checkMissing(z19);
    deparse1 = ldf deparse1;
    check L110() else D70();
  D26():
    deopt 86 [i2, z10];
  D70():
    deopt 231 [];
  L47():
    z11 = force? z10;
    checkMissing(z11);
    matrix1 = ldf matrix;
    check L48() else D27();
  L110():
    p30 = prom<V +>{
      sym4 = ldf substitute;
      base4 = ldf substitute in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r87):
      return r87;
    L1():
      substitute = ldf substitute in base;
      r88 = dyn substitute(<sym x>);
      goto L0(r88);
    L2():
      r86 = dyn base4(<sym x>);
      goto L0(r86);
    };
    r90 = dyn deparse1(p30);
    check L111() else D71();
  D27():
    deopt 88 [i2, z11];
  D71():
    deopt 233 [r90];
  L48():
    p16 = prom<V +>{
      cdelta = ld cdelta;
      cdelta1 = force? cdelta;
      checkMissing(cdelta1);
      return cdelta1;
    };
    p17 = prom<V +>{
      nr4 = ld nr;
      nr5 = force? nr4;
      checkMissing(nr5);
      return nr5;
    };
    p18 = prom<V +>{
      nc4 = ld nc;
      nc5 = force? nc4;
      checkMissing(nc5);
      return nc5;
    };
    r35 = dyn matrix1[, nrow, ncol, byrow](p16, p17, p18, TRUE);
    check L49() else D28();
  L111():
    list = ldf list in base;
    r91 = dyn list(t5, r85, c21, z19, r90);
    check L112() else D72();
  D28():
    deopt 96 [i2, z11, r35];
  D72():
    deopt 236 [r91];
  L49():
    r36 = `-`(z11, r35);
    st z = r36;
    c5 = ld c;
    check L50() else D29();
  L112():
    goto L19(r91);
  D29():
    deopt 99 [i2, c5];
  L50():
    c6 = force? c5;
    checkMissing(c6);
    cdelta2 = ld cdelta;
    check L51() else D30();
  D30():
    deopt 100 [i2, c6, cdelta2];
  L51():
    cdelta3 = force? cdelta2;
    checkMissing(cdelta3);
    r37 = `+`(c6, cdelta3);
    st c = r37;
    median5 = ldf median;
    check L52() else D31();
  D31():
    deopt 105 [i2];
  L52():
    p19 = prom<V +>{
      r38 = ld r;
      r39 = force? r38;
      checkMissing(r39);
      return r39;
    };
    p20 = prom<V +>{
      na_rm7 = ld `na.rm`;
      na_rm8 = force? na_rm7;
      checkMissing(na_rm8);
      return na_rm8;
    };
    r42 = dyn median5[, `na.rm`](p19, p20);
    check L53() else D32();
  D32():
    deopt 109 [i2, r42];
  L53():
    st delta = r42;
    r43 = ld r;
    check L54() else D33();
  D33():
    deopt 111 [i2, r43];
  L54():
    r44 = force? r43;
    checkMissing(r44);
    delta4 = ld delta;
    check L55() else D34();
  D34():
    deopt 112 [i2, r44, delta4];
  L55():
    delta5 = force? delta4;
    checkMissing(delta5);
    r45 = `-`(r44, delta5);
    st r = r45;
    t2 = ld t;
    check L56() else D35();
  D35():
    deopt 116 [i2, t2];
  L56():
    t3 = force? t2;
    checkMissing(t3);
    delta6 = ld delta;
    check L57() else D36();
  D36():
    deopt 117 [i2, t3, delta6];
  L57():
    delta7 = force? delta6;
    checkMissing(delta7);
    r46 = `+`(t3, delta7);
    st t = r46;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L58() else L59();
  L5(i7, r48):
    st newsum = r48;
    newsum = ld newsum;
    check L66() else D41();
  L58():
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  L59():
    r47 = dyn base[, `na.rm`](<lang abs(z)>, <sym na.rm>);
    goto L5(i2, r47);
  D41():
    deopt 135 [i7, newsum];
  L6(i10, r50):
    na_rm9 = ld `na.rm`;
    check L64() else D39();
  L60():
    z12 = ld z;
    check L62() else D37();
  L61():
    r49 = dyn base1(<sym z>);
    goto L6(i2, r49);
  L66():
    newsum1 = force? newsum;
    checkMissing(newsum1);
    r53 = `==`(newsum1, 0.0);
    c7 = `as.logical`(r53);
    if c7 then L7(i7, c7) else L67();
  D37():
    deopt 125 [i2, z12];
  D39():
    deopt 129 [i10, na_rm9];
  L7(i11, c8):
    st converged = c8;
    converged = ld converged;
    check L76() else D47();
  L62():
    z13 = force? z12;
    checkMissing(z13);
    abs = ldf abs in base;
    r51 = dyn abs(z13);
    check L63() else D38();
  L64():
    na_rm10 = force? na_rm9;
    checkMissing(na_rm10);
    sum = ldf sum in base;
    r52 = dyn sum(r50, na_rm10);
    check L65() else D40();
  L67():
    sym2 = ldf abs;
    base2 = ldf abs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  D38():
    deopt 128 [i2, r51];
  D40():
    deopt 133 [i10, r52];
  D47():
    deopt 153 [i11, converged];
  L8(i15, c12, r55):
    eps1 = ld eps;
    check L73() else D45();
  L63():
    goto L6(i2, r51);
  L65():
    goto L5(i10, r52);
  L68():
    newsum2 = ld newsum;
    check L70() else D42();
  L69():
    r54 = dyn base2(<lang `-`(newsum, oldsum)>);
    goto L8(i7, c7, r54);
  L76():
    converged1 = force? converged;
    checkMissing(converged1);
    c16 = `as.logical`(converged1);
    if c16 then L77() else L9();
  D42():
    deopt 141 [i7, c7, newsum2];
  D45():
    deopt 146 [i15, c12, r55, eps1];
  L9():
    newsum6 = ld newsum;
    check L80() else D48();
  L70():
    newsum3 = force? newsum2;
    checkMissing(newsum3);
    oldsum = ld oldsum;
    check L71() else D43();
  L73():
    eps2 = force? eps1;
    checkMissing(eps2);
    newsum4 = ld newsum;
    check L74() else D46();
  L77():
    goto L10();
  D43():
    deopt 142 [i7, c7, newsum3, oldsum];
  D46():
    deopt 147 [i15, c12, r55, eps2, newsum4];
  D48():
    deopt 159 [i11, newsum6];
  L71():
    oldsum1 = force? oldsum;
    checkMissing(oldsum1);
    r56 = `-`(newsum3, oldsum1);
    abs1 = ldf abs in base;
    r57 = dyn abs1(r56);
    check L72() else D44();
  L74():
    newsum5 = force? newsum4;
    checkMissing(newsum5);
    r58 = `*`(eps2, newsum5);
    r59 = `<`(r55, r58);
    c13 = `as.logical`(r59);
    c14 = `||`(c12, c13);
    goto L7(i15, c14);
  L80():
    newsum7 = force? newsum6;
    checkMissing(newsum7);
    st oldsum = newsum7;
    trace_iter1 = ld `trace.iter`;
    check L81() else D49();
  D44():
    deopt 146 [i7, c7, r57];
  D49():
    deopt 162 [i11, trace_iter1];
  L72():
    goto L8(i7, c7, r57);
  L81():
    trace_iter2 = force? trace_iter1;
    checkMissing(trace_iter2);
    c17 = `as.logical`(trace_iter2);
    if c17 then L82() else L12();
  L12():
    goto L13(i11);
  L13(i24):
    goto L4(i24);
  L82():
    cat = ldf cat;
    check L83() else D50();
  D50():
    deopt 165 [i11];
  L83():
    p21 = prom<V +>{
      iter = ld iter;
      iter1 = force? iter;
      checkMissing(iter1);
      return iter1;
    };
    p22 = prom<V +>{
      newsum8 = ld newsum;
      newsum9 = force? newsum8;
      checkMissing(newsum9);
      return newsum9;
    };
    r63 = dyn cat[, , , , sep](p21, ": ", p22, "\n", "");
    check L84() else D51();
  D51():
    deopt 172 [i11, r63];
  L84():
    goto L13(i11);
  }
}