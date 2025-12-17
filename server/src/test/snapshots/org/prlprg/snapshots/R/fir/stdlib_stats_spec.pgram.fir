fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg spectrum:cls, reg ldeaths:*, reg ldeaths1:V, reg p1:p(V +), reg r6:V, reg spectrum1:cls, reg ldeaths2:*, reg ldeaths3:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg c:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg spectrum2:cls, reg ldeaths4:*, reg ldeaths5:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c1:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg spectrum3:cls, reg mdeaths:*, reg mdeaths1:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg c2:cls, reg r22:V, reg p7:p(V +), reg r24:V, reg spectrum4:cls, reg fdeaths:*, reg fdeaths1:V, reg p8:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg c3:cls, reg r28:V, reg p9:p(V +), reg r30:V, reg spec_pgram:cls, reg ts_union:cls, reg mdeaths2:*, reg mdeaths3:V, reg p10:p(V +), reg fdeaths2:*, reg fdeaths3:V, reg p11:p(V +), reg r33:V, reg p12:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg c4:cls, reg r37:V, reg p13:p(V +), reg r39:V, reg plot:cls, reg mfdeaths_spc:*, reg mfdeaths_spc1:V, reg p14:p(V +), reg r41:V, reg plot1:cls, reg mfdeaths_spc2:*, reg mfdeaths_spc3:V, reg p15:p(V +), reg r43:V, reg spec_pgram1:cls, reg ts_intersect:cls, reg mdeaths4:*, reg mdeaths5:V, reg p16:p(V +), reg lag:cls, reg fdeaths4:*, reg fdeaths5:V, reg p17:p(V +), reg r46:V, reg p18:p(V +), reg r48:V, reg p19:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg c5:cls, reg r52:V, reg p20:p(V +), reg r54:V, reg plot2:cls, reg mfdeaths_spc4:*, reg mfdeaths_spc5:V, reg p21:p(V +), reg r56:V, reg plot3:cls, reg mfdeaths_spc6:*, reg mfdeaths_spc7:V, reg p22:p(V +), reg r58:V, reg spectrum5:cls, reg EuStockMarkets:*, reg EuStockMarkets1:V, reg p23:p(V +), reg kernel:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg c6:cls, reg r62:V, reg p24:p(V +), reg r64:V, reg p25:p(V +), reg r66:V, reg plot4:cls, reg stocks_spc:*, reg stocks_spc1:V, reg p26:p(V +), reg r68:V, reg plot5:cls, reg stocks_spc2:*, reg stocks_spc3:V, reg p27:p(V +), reg r70:V, reg plot6:cls, reg stocks_spc4:*, reg stocks_spc5:V, reg p28:p(V +), reg r72:V, reg spectrum6:cls, reg ts_union1:cls, reg BJsales:*, reg BJsales1:V, reg p29:p(V +), reg BJsales_lead:*, reg BJsales_lead1:V, reg p30:p(V +), reg r75:V, reg p31:p(V +), reg kernel1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r77:V, reg r78:V, reg c7:cls, reg r79:V, reg p32:p(V +), reg r81:V, reg p33:p(V +), reg r83:V, reg plot7:cls, reg sales_spc:*, reg sales_spc1:V, reg p34:p(V +), reg r85:V, reg plot8:cls, reg sales_spc2:*, reg sales_spc3:V, reg p35:p(V +), reg r87:V |
    mkenv;
    r = clos inner1079089949;
    st `spec.pgram` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    spectrum = ldf spectrum;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      ldeaths = ld ldeaths;
      ldeaths1 = force? ldeaths;
      checkMissing(ldeaths1);
      return ldeaths1;
    };
    r6 = dyn spectrum(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L4():
    goto L0();
  L6():
    spectrum1 = ldf spectrum;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p2 = prom<V +>{
      ldeaths2 = ld ldeaths;
      ldeaths3 = force? ldeaths2;
      checkMissing(ldeaths3);
      return ldeaths3;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      c = ldf c in base;
      r10 = dyn c(3.0, 5.0);
      goto L0(r10);
    L2():
      r8 = dyn base1(3.0, 5.0);
      goto L0(r8);
    };
    r12 = dyn spectrum1[, spans](p2, p3);
    check L8() else D5();
  D5():
    deopt 17 [r12];
  L8():
    spectrum2 = ldf spectrum;
    check L9() else D6();
  D6():
    deopt 19 [];
  L9():
    p4 = prom<V +>{
      ldeaths4 = ld ldeaths;
      ldeaths5 = force? ldeaths4;
      checkMissing(ldeaths5);
      return ldeaths5;
    };
    p5 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c1 = ldf c in base;
      r16 = dyn c1(5.0, 7.0);
      goto L0(r16);
    L2():
      r14 = dyn base2(5.0, 7.0);
      goto L0(r14);
    };
    r18 = dyn spectrum2[, spans](p4, p5);
    check L10() else D7();
  D7():
    deopt 23 [r18];
  L10():
    spectrum3 = ldf spectrum;
    check L11() else D8();
  D8():
    deopt 25 [];
  L11():
    p6 = prom<V +>{
      mdeaths = ld mdeaths;
      mdeaths1 = force? mdeaths;
      checkMissing(mdeaths1);
      return mdeaths1;
    };
    p7 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c2 = ldf c in base;
      r22 = dyn c2(3.0, 3.0);
      goto L0(r22);
    L2():
      r20 = dyn base3(3.0, 3.0);
      goto L0(r20);
    };
    r24 = dyn spectrum3[, spans](p6, p7);
    check L12() else D9();
  D9():
    deopt 29 [r24];
  L12():
    spectrum4 = ldf spectrum;
    check L13() else D10();
  D10():
    deopt 31 [];
  L13():
    p8 = prom<V +>{
      fdeaths = ld fdeaths;
      fdeaths1 = force? fdeaths;
      checkMissing(fdeaths1);
      return fdeaths1;
    };
    p9 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      c3 = ldf c in base;
      r28 = dyn c3(3.0, 3.0);
      goto L0(r28);
    L2():
      r26 = dyn base4(3.0, 3.0);
      goto L0(r26);
    };
    r30 = dyn spectrum4[, spans](p8, p9);
    check L14() else D11();
  D11():
    deopt 35 [r30];
  L14():
    spec_pgram = ldf `spec.pgram`;
    check L15() else D12();
  D12():
    deopt 37 [];
  L15():
    p12 = prom<V +>{
      ts_union = ldf `ts.union`;
      p10 = prom<V +>{
        mdeaths2 = ld mdeaths;
        mdeaths3 = force? mdeaths2;
        checkMissing(mdeaths3);
        return mdeaths3;
      };
      p11 = prom<V +>{
        fdeaths2 = ld fdeaths;
        fdeaths3 = force? fdeaths2;
        checkMissing(fdeaths3);
        return fdeaths3;
      };
      r33 = dyn ts_union(p10, p11);
      return r33;
    };
    p13 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      c4 = ldf c in base;
      r37 = dyn c4(3.0, 3.0);
      goto L0(r37);
    L2():
      r35 = dyn base5(3.0, 3.0);
      goto L0(r35);
    };
    r39 = dyn spec_pgram[, spans](p12, p13);
    check L16() else D13();
  D13():
    deopt 41 [r39];
  L16():
    st `mfdeaths.spc` = r39;
    plot = ldf plot;
    check L17() else D14();
  D14():
    deopt 44 [];
  L17():
    p14 = prom<V +>{
      mfdeaths_spc = ld `mfdeaths.spc`;
      mfdeaths_spc1 = force? mfdeaths_spc;
      checkMissing(mfdeaths_spc1);
      return mfdeaths_spc1;
    };
    r41 = dyn plot[, `plot.type`](p14, "coherency");
    check L18() else D15();
  D15():
    deopt 48 [r41];
  L18():
    plot1 = ldf plot;
    check L19() else D16();
  D16():
    deopt 50 [];
  L19():
    p15 = prom<V +>{
      mfdeaths_spc2 = ld `mfdeaths.spc`;
      mfdeaths_spc3 = force? mfdeaths_spc2;
      checkMissing(mfdeaths_spc3);
      return mfdeaths_spc3;
    };
    r43 = dyn plot1[, `plot.type`](p15, "phase");
    check L20() else D17();
  D17():
    deopt 54 [r43];
  L20():
    spec_pgram1 = ldf `spec.pgram`;
    check L21() else D18();
  D18():
    deopt 56 [];
  L21():
    p19 = prom<V +>{
      ts_intersect = ldf `ts.intersect`;
      p16 = prom<V +>{
        mdeaths4 = ld mdeaths;
        mdeaths5 = force? mdeaths4;
        checkMissing(mdeaths5);
        return mdeaths5;
      };
      p18 = prom<V +>{
        lag = ldf lag;
        p17 = prom<V +>{
          fdeaths4 = ld fdeaths;
          fdeaths5 = force? fdeaths4;
          checkMissing(fdeaths5);
          return fdeaths5;
        };
        r46 = dyn lag(p17, 4.0);
        return r46;
      };
      r48 = dyn ts_intersect(p16, p18);
      return r48;
    };
    p20 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      c5 = ldf c in base;
      r52 = dyn c5(3.0, 3.0);
      goto L0(r52);
    L2():
      r50 = dyn base6(3.0, 3.0);
      goto L0(r50);
    };
    r54 = dyn spec_pgram1[, spans, plot](p19, p20, FALSE);
    check L22() else D19();
  D19():
    deopt 62 [r54];
  L22():
    st `mfdeaths.spc` = r54;
    plot2 = ldf plot;
    check L23() else D20();
  D20():
    deopt 65 [];
  L23():
    p21 = prom<V +>{
      mfdeaths_spc4 = ld `mfdeaths.spc`;
      mfdeaths_spc5 = force? mfdeaths_spc4;
      checkMissing(mfdeaths_spc5);
      return mfdeaths_spc5;
    };
    r56 = dyn plot2[, `plot.type`](p21, "coherency");
    check L24() else D21();
  D21():
    deopt 69 [r56];
  L24():
    plot3 = ldf plot;
    check L25() else D22();
  D22():
    deopt 71 [];
  L25():
    p22 = prom<V +>{
      mfdeaths_spc6 = ld `mfdeaths.spc`;
      mfdeaths_spc7 = force? mfdeaths_spc6;
      checkMissing(mfdeaths_spc7);
      return mfdeaths_spc7;
    };
    r58 = dyn plot3[, `plot.type`](p22, "phase");
    check L26() else D23();
  D23():
    deopt 75 [r58];
  L26():
    spectrum5 = ldf spectrum;
    check L27() else D24();
  D24():
    deopt 77 [];
  L27():
    p23 = prom<V +>{
      EuStockMarkets = ld EuStockMarkets;
      EuStockMarkets1 = force? EuStockMarkets;
      checkMissing(EuStockMarkets1);
      return EuStockMarkets1;
    };
    p25 = prom<V +>{
      kernel = ldf kernel;
      p24 = prom<V +>{
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r61):
        return r61;
      L1():
        c6 = ldf c in base;
        r62 = dyn c6(30.0, 50.0);
        goto L0(r62);
      L2():
        r60 = dyn base7(30.0, 50.0);
        goto L0(r60);
      };
      r64 = dyn kernel("daniell", p24);
      return r64;
    };
    r66 = dyn spectrum5[, , plot](p23, p25, FALSE);
    check L28() else D25();
  D25():
    deopt 82 [r66];
  L28():
    st `stocks.spc` = r66;
    plot4 = ldf plot;
    check L29() else D26();
  D26():
    deopt 85 [];
  L29():
    p26 = prom<V +>{
      stocks_spc = ld `stocks.spc`;
      stocks_spc1 = force? stocks_spc;
      checkMissing(stocks_spc1);
      return stocks_spc1;
    };
    r68 = dyn plot4[, `plot.type`](p26, "marginal");
    check L30() else D27();
  D27():
    deopt 89 [r68];
  L30():
    plot5 = ldf plot;
    check L31() else D28();
  D28():
    deopt 91 [];
  L31():
    p27 = prom<V +>{
      stocks_spc2 = ld `stocks.spc`;
      stocks_spc3 = force? stocks_spc2;
      checkMissing(stocks_spc3);
      return stocks_spc3;
    };
    r70 = dyn plot5[, `plot.type`](p27, "coherency");
    check L32() else D29();
  D29():
    deopt 95 [r70];
  L32():
    plot6 = ldf plot;
    check L33() else D30();
  D30():
    deopt 97 [];
  L33():
    p28 = prom<V +>{
      stocks_spc4 = ld `stocks.spc`;
      stocks_spc5 = force? stocks_spc4;
      checkMissing(stocks_spc5);
      return stocks_spc5;
    };
    r72 = dyn plot6[, `plot.type`](p28, "phase");
    check L34() else D31();
  D31():
    deopt 101 [r72];
  L34():
    spectrum6 = ldf spectrum;
    check L35() else D32();
  D32():
    deopt 103 [];
  L35():
    p31 = prom<V +>{
      ts_union1 = ldf `ts.union`;
      p29 = prom<V +>{
        BJsales = ld BJsales;
        BJsales1 = force? BJsales;
        checkMissing(BJsales1);
        return BJsales1;
      };
      p30 = prom<V +>{
        BJsales_lead = ld `BJsales.lead`;
        BJsales_lead1 = force? BJsales_lead;
        checkMissing(BJsales_lead1);
        return BJsales_lead1;
      };
      r75 = dyn ts_union1(p29, p30);
      return r75;
    };
    p33 = prom<V +>{
      kernel1 = ldf kernel;
      p32 = prom<V +>{
        sym8 = ldf c;
        base8 = ldf c in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r78):
        return r78;
      L1():
        c7 = ldf c in base;
        r79 = dyn c7(5.0, 7.0);
        goto L0(r79);
      L2():
        r77 = dyn base8(5.0, 7.0);
        goto L0(r77);
      };
      r81 = dyn kernel1("modified.daniell", p32);
      return r81;
    };
    r83 = dyn spectrum6(p31, p33);
    check L36() else D33();
  D33():
    deopt 106 [r83];
  L36():
    st `sales.spc` = r83;
    plot7 = ldf plot;
    check L37() else D34();
  D34():
    deopt 109 [];
  L37():
    p34 = prom<V +>{
      sales_spc = ld `sales.spc`;
      sales_spc1 = force? sales_spc;
      checkMissing(sales_spc1);
      return sales_spc1;
    };
    r85 = dyn plot7[, `plot.type`](p34, "coherency");
    check L38() else D35();
  D35():
    deopt 113 [r85];
  L38():
    plot8 = ldf plot;
    check L39() else D36();
  D36():
    deopt 115 [];
  L39():
    p35 = prom<V +>{
      sales_spc2 = ld `sales.spc`;
      sales_spc3 = force? sales_spc2;
      checkMissing(sales_spc3);
      return sales_spc3;
    };
    r87 = dyn plot8[, `plot.type`](p35, "phase");
    check L40() else D37();
  D37():
    deopt 119 [r87];
  L40():
    popenv;
    return r87;
  }
}
fun inner1079089949(x, spans, kernel, taper, pad, fast, demean, detrend, plot, `na.action`, `...`) {
  (reg x:*, reg spans:*, reg kernel:*, reg taper:*, reg pad:*, reg fast:*, reg demean:*, reg detrend:*, reg plot:*, reg na_action:*, reg ddd:dots) -+> V { var x:*, var spans:*, reg spans_isMissing:L, reg spans_orDefault:*, var kernel:*, reg kernel_isMissing:L, reg kernel_orDefault:*, var taper:*, reg taper_isMissing:L, reg taper_orDefault:*, var pad:*, reg pad_isMissing:L, reg pad_orDefault:*, var fast:*, reg fast_isMissing:L, reg fast_orDefault:*, var demean:*, reg demean_isMissing:L, reg demean_orDefault:*, var detrend:*, reg detrend_isMissing:L, reg detrend_orDefault:*, var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p:p(V +), var `...`:dots?, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg substitute:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg na_action1:cls, reg as_ts:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V, reg frequency:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg r11:V, reg as_matrix:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg r13:V, reg nrow:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r15:V, reg ncol:cls, reg x9:*, reg x10:V, reg p7:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg spans1:*, reg spans2:V, reg c:V, reg r20:V, reg c1:L, reg is_tskernel:cls, reg spans3:*, reg spans4:V, reg p8:p(V +), reg r22:V, reg c2:L, reg spans5:*, reg spans6:V, reg spans7:V, reg kernel1:cls, reg spans8:*, reg spans9:V, reg ___:cls, reg r23:V, reg p9:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg kernel2:*, reg kernel3:V, reg c3:V, reg r28:V, reg c4:L, reg c6:V, reg is_tskernel1:cls, reg kernel4:*, reg kernel5:V, reg p10:p(V +), reg r30:V, reg r31:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r32:V, reg detrend1:*, reg detrend2:V, reg c11:L, reg N:*, reg N1:V, reg r34:V, reg N2:*, reg N3:V, reg r35:V, reg r36:V, reg r37:V, reg N4:*, reg N5:V, reg N6:*, reg N7:V, reg r38:V, reg r39:V, reg r40:V, reg r41:V, reg ncol1:cls, reg x11:*, reg x12:V, reg p11:p(V +), reg r43:V, reg r44:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c12:L, reg x13:V, reg x14:*, reg x15:V, reg c13:L, reg i6:I, reg x17:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r45:V, reg mean:cls, reg x18:*, reg x19:V, reg c14:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i11:*, reg i12:V, reg __1:cls, reg r46:V, reg p12:p(V +), reg r48:V, reg r49:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r52:V, reg i15:I, reg r53:V, reg r54:V, reg x22:*, reg x23:V, reg c15:L, reg i17:I, reg r56:V, reg x25:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i19:I, reg r58:V, reg dx5:V, reg i20:*, reg i21:V, reg __2:cls, reg r59:V, reg t:*, reg t1:V, reg r60:V, reg sum:cls, reg r61:V, reg t2:*, reg t3:V, reg r62:V, reg sumt2:*, reg sumt3:V, reg r63:V, reg r64:V, reg l1:*, reg c16:L, reg i23:I, reg r66:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i25:I, reg dx7:V, reg i26:*, reg i27:V, reg ___1:cls, reg r69:V, reg demean1:*, reg demean2:V, reg c17:L, reg sweep:cls, reg x26:*, reg x27:V, reg p13:p(V +), reg colMeans:cls, reg x28:*, reg x29:V, reg p14:p(V +), reg r72:V, reg p15:p(V +), reg r74:V, reg spec_taper:cls, reg x30:*, reg x31:V, reg p16:p(V +), reg taper1:*, reg taper2:V, reg p17:p(V +), reg r77:V, reg taper3:*, reg taper4:V, reg r78:V, reg r79:V, reg r80:V, reg taper5:*, reg taper6:V, reg r81:V, reg r82:V, reg r83:V, reg pad1:*, reg pad2:V, reg r84:V, reg c18:L, reg rbind:cls, reg x32:*, reg x33:V, reg p18:p(V +), reg matrix:cls, reg N8:*, reg N9:V, reg pad3:*, reg pad4:V, reg r86:V, reg p19:p(V +), reg ncol2:cls, reg x34:*, reg x35:V, reg p20:p(V +), reg r89:V, reg p21:p(V +), reg r91:V, reg p22:p(V +), reg r93:V, reg nrow1:cls, reg x36:*, reg x37:V, reg p23:p(V +), reg r95:V, reg fast1:*, reg fast2:V, reg c19:L, reg nextn:cls, reg N10:*, reg N11:V, reg p24:p(V +), reg r98:V, reg r99:V, reg N12:*, reg N13:V, reg rbind1:cls, reg x38:*, reg x39:V, reg p25:p(V +), reg matrix1:cls, reg NewN:*, reg NewN1:V, reg N14:*, reg N15:V, reg r101:V, reg p26:p(V +), reg ncol3:cls, reg x40:*, reg x41:V, reg p27:p(V +), reg r104:V, reg p28:p(V +), reg r106:V, reg p29:p(V +), reg r108:V, reg nrow2:cls, reg x42:*, reg x43:V, reg p30:p(V +), reg r110:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r111:V, reg r112:V, reg N16:*, reg N17:V, reg r113:V, reg r114:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r115:V, reg r116:V, reg xfreq:*, reg xfreq1:V, reg N18:*, reg N19:V, reg r117:V, reg xfreq2:*, reg xfreq3:V, reg N20:*, reg N21:V, reg r118:V, reg Nspec:*, reg Nspec1:V, reg seq_int:cls, reg r119:V, reg mvfft:cls, reg x44:*, reg x45:V, reg p31:p(V +), reg r121:V, reg array:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r122:V, reg r123:V, reg N22:*, reg N23:V, reg ncol4:cls, reg x46:*, reg x47:V, reg p32:p(V +), reg r125:V, reg ncol5:cls, reg x48:*, reg x49:V, reg p33:p(V +), reg r127:V, reg c20:cls, reg r128:V, reg p34:p(V +), reg r130:V, reg ncol6:cls, reg x50:*, reg x51:V, reg p35:p(V +), reg r132:V, reg r133:V, reg s1:V, reg l4:I, reg i29:I, reg i30:I, reg i31:I, reg c21:L, reg x52:V, reg ncol7:cls, reg x53:*, reg x54:V, reg p36:p(V +), reg r135:V, reg r136:V, reg s2:V, reg l5:I, reg i34:I, reg i35:I, reg i36:I, reg i37:I, reg c22:L, reg x55:V, reg xfft:*, reg xfft1:V, reg c23:L, reg i44:I, reg i45:I, reg xfft3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i48:I, reg i49:I, reg dx9:V, reg i50:*, reg i51:V, reg __3:cls, reg r137:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r138:V, reg i56:I, reg i57:I, reg dx12:V, reg r139:V, reg xfft4:*, reg xfft5:V, reg c24:L, reg i60:I, reg i61:I, reg dx14:V, reg xfft7:V, reg dr10:V, reg dc5:L, reg dx16:V, reg i64:I, reg i65:I, reg dx17:V, reg dx18:V, reg j:*, reg j1:V, reg __4:cls, reg r140:V, reg Conj:cls, reg r141:V, reg r142:V, reg N24:*, reg N25:V, reg xfreq4:*, reg xfreq5:V, reg r143:V, reg r144:V, reg l6:*, reg c25:L, reg i68:I, reg i69:I, reg r146:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx19:V, reg i72:I, reg i73:I, reg dx20:V, reg i74:*, reg i75:V, reg j2:*, reg j3:V, reg ___2:cls, reg r149:V, reg pgram:*, reg pgram1:V, reg c26:L, reg i78:I, reg i79:I, reg r151:R, reg pgram3:V, reg dr14:V, reg dc7:L, reg dx21:V, reg i82:I, reg i83:I, reg r153:R, reg dx22:V, reg i84:*, reg i85:V, reg j4:*, reg j5:V, reg __5:cls, reg r154:V, reg pgram4:*, reg pgram5:V, reg c27:L, reg i88:I, reg i89:I, reg r156:R, reg dx24:V, reg pgram7:V, reg dr16:V, reg dc8:L, reg dx26:V, reg i92:I, reg i93:I, reg r158:R, reg dx27:V, reg dx28:V, reg N26:*, reg N27:V, reg i94:*, reg i95:V, reg j6:*, reg j7:V, reg __6:cls, reg r159:V, reg r160:V, reg r161:V, reg l9:*, reg c28:L, reg i98:I, reg i99:I, reg r163:V, reg l11:*, reg dr18:V, reg dc9:L, reg dx29:V, reg i102:I, reg i103:I, reg dx30:V, reg i104:*, reg i105:V, reg j8:*, reg j9:V, reg ___3:cls, reg r166:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r167:V, reg r168:V, reg kernel6:*, reg kernel7:V, reg c29:V, reg r169:V, reg c30:L, reg ncol8:cls, reg x56:*, reg x57:V, reg p37:p(V +), reg r171:V, reg r172:V, reg s3:V, reg l12:I, reg i106:I, reg i107:I, reg i108:I, reg c31:L, reg x58:V, reg ncol9:cls, reg x59:*, reg x60:V, reg p38:p(V +), reg r174:V, reg r175:V, reg s4:V, reg l13:I, reg i111:I, reg i112:I, reg i113:I, reg i114:I, reg c32:L, reg x61:V, reg kernapply:cls, reg pgram8:*, reg pgram9:V, reg c33:L, reg dr20:V, reg dc10:L, reg dx31:V, reg dx32:V, reg i119:*, reg i120:V, reg j10:*, reg j11:V, reg __7:cls, reg r176:V, reg p39:p(V +), reg kernel8:*, reg kernel9:V, reg p40:p(V +), reg r179:V, reg l14:*, reg c34:L, reg i123:I, reg i124:I, reg r181:V, reg l16:*, reg dr22:V, reg dc11:L, reg dx33:V, reg i127:I, reg i128:I, reg dx34:V, reg i129:*, reg i130:V, reg j12:*, reg j13:V, reg ___4:cls, reg r184:V, reg df_kernel:cls, reg kernel10:*, reg kernel11:V, reg p41:p(V +), reg r186:V, reg bandwidth_kernel:cls, reg kernel12:*, reg kernel13:V, reg p42:p(V +), reg r188:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r190:V, reg r191:V, reg r192:V, reg df:*, reg df1:V, reg u4:*, reg u5:V, reg u6:*, reg u7:V, reg r193:V, reg r194:V, reg r195:V, reg df2:*, reg df3:V, reg N28:*, reg N29:V, reg N30:*, reg N31:V, reg r196:V, reg r197:V, reg bandwidth:*, reg bandwidth1:V, reg xfreq6:*, reg xfreq7:V, reg r198:V, reg N32:*, reg N33:V, reg r199:V, reg pgram12:*, reg pgram13:V, reg c35:L, reg pgram15:V, reg dr24:V, reg dc12:L, reg dx35:V, reg dx36:V, reg Nspec2:*, reg Nspec3:V, reg r200:V, reg r201:V, reg __8:cls, reg r202:V, reg matrix2:cls, reg Nspec4:*, reg Nspec5:V, reg p43:p(V +), reg nser:*, reg nser1:V, reg p44:p(V +), reg r205:V, reg nser2:*, reg nser3:V, reg r206:V, reg s5:V, reg l17:I, reg i131:I, reg i132:I, reg i133:I, reg c36:L, reg x62:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r207:V, reg i138:I, reg r208:V, reg pgram16:*, reg pgram17:V, reg c37:L, reg i140:I, reg pgram19:V, reg dr26:V, reg dc13:L, reg dx37:V, reg i142:I, reg dx38:V, reg Nspec6:*, reg Nspec7:V, reg r209:V, reg i143:*, reg i144:V, reg i145:*, reg i146:V, reg __9:cls, reg r210:V, reg Re:cls, reg r211:V, reg l18:*, reg c38:L, reg i148:I, reg r213:V, reg l20:*, reg dr28:V, reg dc14:L, reg dx39:V, reg i150:I, reg dx40:V, reg i151:*, reg i152:V, reg ___5:cls, reg r216:V, reg nser4:*, reg nser5:V, reg r217:V, reg c39:L, reg matrix3:cls, reg Nspec8:*, reg Nspec9:V, reg p45:p(V +), reg nser6:*, reg nser7:V, reg nser8:*, reg nser9:V, reg r220:V, reg r221:V, reg r222:V, reg p46:p(V +), reg r224:V, reg nser10:*, reg nser11:V, reg r225:V, reg r226:V, reg s6:V, reg l21:I, reg i153:I, reg i154:I, reg i155:I, reg c40:L, reg x63:V, reg i158:*, reg i159:V, reg r227:V, reg nser12:*, reg nser13:V, reg r228:V, reg s7:V, reg l22:I, reg i160:I, reg i161:I, reg i162:I, reg i163:I, reg c41:L, reg x64:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r229:V, reg i172:I, reg i173:I, reg r230:V, reg pgram20:*, reg pgram21:V, reg c42:L, reg i176:I, reg i177:I, reg pgram23:V, reg dr30:V, reg dc15:L, reg dx41:V, reg i180:I, reg i181:I, reg dx42:V, reg i182:*, reg i183:V, reg j14:*, reg j15:V, reg __10:cls, reg r231:V, reg Mod:cls, reg r232:V, reg r233:V, reg spec:*, reg spec1:V, reg c43:L, reg i186:I, reg i187:I, reg r235:V, reg spec3:V, reg dr32:V, reg dc16:L, reg dx43:V, reg i190:I, reg i191:I, reg r237:V, reg dx44:V, reg i192:*, reg i193:V, reg __11:cls, reg r238:V, reg spec4:*, reg spec5:V, reg c44:L, reg i196:I, reg i197:I, reg r240:V, reg dx46:V, reg spec7:V, reg dr34:V, reg dc17:L, reg dx48:V, reg i200:I, reg i201:I, reg r242:V, reg dx49:V, reg dx50:V, reg j16:*, reg j17:V, reg __12:cls, reg r243:V, reg r244:V, reg r245:V, reg l23:*, reg c45:L, reg i204:I, reg i205:I, reg r247:V, reg l25:*, reg dr36:V, reg dc18:L, reg dx51:V, reg i208:I, reg i209:I, reg dx52:V, reg i210:*, reg i211:V, reg j18:*, reg j19:V, reg r250:V, reg j20:*, reg j21:V, reg r251:V, reg r252:V, reg r253:V, reg r254:V, reg ___6:cls, reg r255:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r256:V, reg i216:I, reg i217:I, reg r257:V, reg pgram24:*, reg pgram25:V, reg c46:L, reg i220:I, reg i221:I, reg pgram27:V, reg dr38:V, reg dc19:L, reg dx53:V, reg i224:I, reg i225:I, reg dx54:V, reg i226:*, reg i227:V, reg j22:*, reg j23:V, reg __13:cls, reg r258:V, reg Arg:cls, reg r259:V, reg l26:*, reg c47:L, reg i230:I, reg i231:I, reg r261:V, reg l28:*, reg dr40:V, reg dc20:L, reg dx55:V, reg i234:I, reg i235:I, reg dx56:V, reg i236:*, reg i237:V, reg j24:*, reg j25:V, reg r264:V, reg j26:*, reg j27:V, reg r265:V, reg r266:V, reg r267:V, reg r268:V, reg ___7:cls, reg r269:V, reg nser14:*, reg nser15:V, reg r270:V, reg s8:V, reg l29:I, reg i238:I, reg i239:I, reg i240:I, reg c48:L, reg x65:V, reg spec8:*, reg spec9:V, reg c49:L, reg i244:I, reg spec11:V, reg dr42:V, reg dc21:L, reg dx57:V, reg i246:I, reg dx58:V, reg i247:*, reg i248:V, reg __14:cls, reg r271:V, reg u8:*, reg u9:V, reg r272:V, reg l30:*, reg c50:L, reg i250:I, reg r274:V, reg l32:*, reg dr44:V, reg dc22:L, reg dx59:V, reg i252:I, reg dx60:V, reg i253:*, reg i254:V, reg ___8:cls, reg r277:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r278:V, reg r279:V, reg spec12:*, reg spec13:V, reg drop:cls, reg r280:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r281:V, reg r282:V, reg freq:*, reg freq1:V, reg spec14:*, reg spec15:V, reg coh:*, reg coh1:V, reg phase:*, reg phase1:V, reg kernel14:*, reg kernel15:V, reg df4:*, reg df5:V, reg bandwidth2:*, reg bandwidth3:V, reg N34:*, reg N35:V, reg N36:*, reg N37:V, reg series:*, reg series1:V, reg colnames:cls, reg x66:*, reg x67:V, reg p47:p(V +), reg r284:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r285:V, reg r286:V, reg kernel16:*, reg kernel17:V, reg c51:V, reg c52:L, reg r287:S, reg taper7:*, reg taper8:V, reg pad5:*, reg pad6:V, reg detrend3:*, reg detrend4:V, reg demean3:*, reg demean4:V, reg list:cls, reg r288:V, reg l33:*, reg class__:cls, reg r289:V, reg plot1:*, reg plot2:V, reg c53:L, reg plot3:cls, reg spg_out:*, reg spg_out1:V, reg p48:p(V +), reg ddd1:dots?, reg r291:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r292:V, reg r293:V, reg spg_out2:*, reg spg_out3:V, reg invisible:cls, reg r294:V, reg spg_out4:*, reg spg_out5:V |
    mkenv;
    st x = x;
    spans_isMissing = missing.0(spans);
    if spans_isMissing then L0(NULL) else L0(spans);
  L0(spans_orDefault):
    st spans = spans_orDefault;
    kernel_isMissing = missing.0(kernel);
    if kernel_isMissing then L1(NULL) else L1(kernel);
  L1(kernel_orDefault):
    st kernel = kernel_orDefault;
    taper_isMissing = missing.0(taper);
    if taper_isMissing then L2(0.1) else L2(taper);
  L2(taper_orDefault):
    st taper = taper_orDefault;
    pad_isMissing = missing.0(pad);
    if pad_isMissing then L3(0.0) else L3(pad);
  L3(pad_orDefault):
    st pad = pad_orDefault;
    fast_isMissing = missing.0(fast);
    if fast_isMissing then L4(TRUE) else L4(fast);
  L4(fast_orDefault):
    st fast = fast_orDefault;
    demean_isMissing = missing.0(demean);
    if demean_isMissing then L5(FALSE) else L5(demean);
  L5(demean_orDefault):
    st demean = demean_orDefault;
    detrend_isMissing = missing.0(detrend);
    if detrend_isMissing then L6(TRUE) else L6(detrend);
  L6(detrend_orDefault):
    st detrend = detrend_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L7(TRUE) else L7(plot);
  L7(plot_orDefault):
    st plot = plot_orDefault;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L8() else L9(na_action);
  L8():
    p = prom<V +>{
      na_fail = ld `na.fail`;
      na_fail1 = force? na_fail;
      checkMissing(na_fail1);
      return na_fail1;
    };
    goto L9(p);
  L9(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    st `...` = ddd;
    deparse1 = ldf deparse1;
    check L85() else D0();
  D0():
    deopt 1 [];
  L85():
    p1 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      substitute = ldf substitute in base;
      r3 = dyn substitute(<sym x>);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym x>);
      goto L0(r1);
    };
    r5 = dyn deparse1(p1);
    check L86() else D1();
  D1():
    deopt 3 [r5];
  L86():
    st series = r5;
    na_action1 = ldf `na.action`;
    check L87() else D2();
  D2():
    deopt 6 [];
  L87():
    p3 = prom<V +>{
      as_ts = ldf `as.ts`;
      p2 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r7 = dyn as_ts(p2);
      return r7;
    };
    r9 = dyn na_action1(p3);
    check L88() else D3();
  D3():
    deopt 8 [r9];
  L88():
    st x = r9;
    frequency = ldf frequency;
    check L89() else D4();
  D4():
    deopt 11 [];
  L89():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r11 = dyn frequency(p4);
    check L90() else D5();
  D5():
    deopt 13 [r11];
  L90():
    st xfreq = r11;
    as_matrix = ldf `as.matrix`;
    check L91() else D6();
  D6():
    deopt 16 [];
  L91():
    p5 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r13 = dyn as_matrix(p5);
    check L92() else D7();
  D7():
    deopt 18 [r13];
  L92():
    st x = r13;
    nrow = ldf nrow;
    check L93() else D8();
  D8():
    deopt 21 [];
  L93():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r15 = dyn nrow(p6);
    check L94() else D9();
  D9():
    deopt 23 [r15];
  L94():
    st N0 = r15;
    st N = r15;
    ncol = ldf ncol;
    check L95() else D10();
  D10():
    deopt 27 [];
  L95():
    p7 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r17 = dyn ncol(p7);
    check L96() else D11();
  D11():
    deopt 29 [r17];
  L96():
    st nser = r17;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L97() else L98();
  L10(r19):
    r20 = `!`(r19);
    c1 = `as.logical`(r20);
    if c1 then L100() else L11();
  L97():
    spans1 = ld spans;
    check L99() else D12();
  L98():
    r18 = dyn base1(<sym spans>);
    goto L10(r18);
  D12():
    deopt 32 [spans1];
  L11():
    goto L14();
  L14():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L109() else L110();
  L99():
    spans2 = force? spans1;
    checkMissing(spans2);
    c = `==`(spans2, NULL);
    goto L10(c);
  L100():
    is_tskernel = ldf `is.tskernel`;
    check L101() else D13();
  D13():
    deopt 37 [];
  L15(r27):
    r28 = `!`(r27);
    c4 = `as.logical`(r28);
    if c4 then L112() else L16(c4);
  L101():
    p8 = prom<V +>{
      spans3 = ld spans;
      spans4 = force? spans3;
      checkMissing(spans4);
      return spans4;
    };
    r22 = dyn is_tskernel(p8);
    check L102() else D14();
  L109():
    kernel2 = ld kernel;
    check L111() else D18();
  L110():
    r26 = dyn base2(<sym kernel>);
    goto L15(r26);
  D14():
    deopt 39 [r22];
  D18():
    deopt 51 [kernel2];
  L16(c6):
    c10 = `as.logical`(c6);
    if c10 then L116() else L17();
  L102():
    c2 = `as.logical`(r22);
    if c2 then L103() else L12();
  L111():
    kernel3 = force? kernel2;
    checkMissing(kernel3);
    c3 = `==`(kernel3, NULL);
    goto L15(c3);
  L112():
    is_tskernel1 = ldf `is.tskernel`;
    check L113() else D19();
  D19():
    deopt 56 [c4];
  L12():
    kernel1 = ldf kernel;
    check L106() else D16();
  L13(spans7):
    st kernel = spans7;
    goto L14();
  L17():
    goto L18();
  L18():
    detrend1 = ld detrend;
    check L120() else D23();
  L103():
    spans5 = ld spans;
    check L104() else D15();
  L113():
    p10 = prom<V +>{
      kernel4 = ld kernel;
      kernel5 = force? kernel4;
      checkMissing(kernel5);
      return kernel5;
    };
    r30 = dyn is_tskernel1(p10);
    check L114() else D20();
  L116():
    stop = ldf stop;
    check L117() else D21();
  D15():
    deopt 40 [spans5];
  D16():
    deopt 43 [];
  D20():
    deopt 58 [c4, r30];
  D21():
    deopt 62 [];
  D23():
    deopt 67 [detrend1];
  L104():
    spans6 = force? spans5;
    checkMissing(spans6);
    goto L13(spans6);
  L106():
    p9 = prom<V +>{
      spans8 = ld spans;
      spans9 = force? spans8;
      checkMissing(spans9);
      ___ = ldf `%/%` in base;
      r23 = dyn ___(spans9, 2.0);
      return r23;
    };
    r25 = dyn kernel1("modified.daniell", p9);
    check L107() else D17();
  L114():
    r31 = `!`(r30);
    c7 = `as.logical`(r31);
    c8 = `&&`(c4, c7);
    goto L16(c8);
  L117():
    r32 = dyn stop("must specify 'spans' or a valid kernel");
    check L118() else D22();
  L120():
    detrend2 = force? detrend1;
    checkMissing(detrend2);
    c11 = `as.logical`(detrend2);
    if c11 then L121() else L19();
  D17():
    deopt 46 [r25];
  D22():
    deopt 64 [r32];
  L19():
    demean1 = ld demean;
    check L152() else D41();
  L26():
    spec_taper = ldf `spec.taper`;
    check L157() else D44();
  L107():
    goto L13(r25);
  L118():
    goto L18();
  L121():
    N = ld N;
    check L122() else D24();
  D24():
    deopt 70 [1, N];
  D41():
    deopt 135 [demean1];
  D44():
    deopt 149 [];
  L122():
    N1 = force? N;
    checkMissing(N1);
    r34 = `:`(1, N1);
    N2 = ld N;
    check L123() else D25();
  L152():
    demean2 = force? demean1;
    checkMissing(demean2);
    c17 = `as.logical`(demean2);
    if c17 then L153() else L27();
  L157():
    p16 = prom<V +>{
      x30 = ld x;
      x31 = force? x30;
      checkMissing(x31);
      return x31;
    };
    p17 = prom<V +>{
      taper1 = ld taper;
      taper2 = force? taper1;
      checkMissing(taper2);
      return taper2;
    };
    r77 = dyn spec_taper(p16, p17);
    check L158() else D45();
  D25():
    deopt 72 [r34, N2];
  D45():
    deopt 152 [r77];
  L27():
    goto L26();
  L123():
    N3 = force? N2;
    checkMissing(N3);
    r35 = `+`(N3, 1.0);
    r36 = `/`(r35, 2.0);
    r37 = `-`(r34, r36);
    st t = r37;
    N4 = ld N;
    check L124() else D26();
  L153():
    sweep = ldf sweep;
    check L154() else D42();
  L158():
    st x = r77;
    taper3 = ld taper;
    check L159() else D46();
  D26():
    deopt 80 [N4];
  D42():
    deopt 138 [];
  D46():
    deopt 156 [1.0, 0.625, taper3];
  L124():
    N5 = force? N4;
    checkMissing(N5);
    N6 = ld N;
    check L125() else D27();
  L154():
    p13 = prom<V +>{
      x26 = ld x;
      x27 = force? x26;
      checkMissing(x27);
      return x27;
    };
    p15 = prom<V +>{
      colMeans = ldf colMeans;
      p14 = prom<V +>{
        x28 = ld x;
        x29 = force? x28;
        checkMissing(x29);
        return x29;
      };
      r72 = dyn colMeans(p14);
      return r72;
    };
    r74 = dyn sweep[, , , `check.margin`](p13, 2.0, p15, FALSE);
    check L155() else D43();
  L159():
    taper4 = force? taper3;
    checkMissing(taper4);
    r78 = `*`(0.625, taper4);
    r79 = `*`(r78, 2.0);
    r80 = `-`(1.0, r79);
    st u2 = r80;
    taper5 = ld taper;
    check L160() else D47();
  D27():
    deopt 81 [N5, N6];
  D43():
    deopt 144 [r74];
  D47():
    deopt 165 [1.0, 0.7265625, taper5];
  L125():
    N7 = force? N6;
    checkMissing(N7);
    r38 = `^`(N7, 2.0);
    r39 = `-`(r38, 1.0);
    r40 = `*`(N5, r39);
    r41 = `/`(r40, 12.0);
    st sumt2 = r41;
    ncol1 = ldf ncol;
    check L126() else D28();
  L155():
    st x = r74;
    goto L26();
  L160():
    taper6 = force? taper5;
    checkMissing(taper6);
    r81 = `*`(0.7265625, taper6);
    r82 = `*`(r81, 2.0);
    r83 = `-`(1.0, r82);
    st u4 = r83;
    pad1 = ld pad;
    check L161() else D48();
  D28():
    deopt 93 [1];
  D48():
    deopt 172 [pad1];
  L126():
    p11 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r43 = dyn ncol1(p11);
    check L127() else D29();
  L161():
    pad2 = force? pad1;
    checkMissing(pad2);
    r84 = `>`(pad2, 0.0);
    c18 = `as.logical`(r84);
    if c18 then L162() else L28();
  D29():
    deopt 95 [1, r43];
  L28():
    goto L29();
  L29():
    fast1 = ld fast;
    check L168() else D53();
  L127():
    r44 = `:`(1, r43);
    s = toForSeq(r44);
    l = length(s);
    i = 0;
    goto L20(i);
  L162():
    rbind = ldf rbind;
    check L163() else D49();
  D49():
    deopt 177 [];
  D53():
    deopt 189 [fast1];
  L20(i1):
    i2 = `+`.1(i1, 1);
    c12 = `<`.1(l, i2);
    if c12 then L128() else L25();
  L163():
    p18 = prom<V +>{
      x32 = ld x;
      x33 = force? x32;
      checkMissing(x33);
      return x33;
    };
    p22 = prom<V +>{
      matrix = ldf matrix;
      p19 = prom<V +>{
        N8 = ld N;
        N9 = force? N8;
        checkMissing(N9);
        pad3 = ld pad;
        pad4 = force? pad3;
        checkMissing(pad4);
        r86 = `*`(N9, pad4);
        return r86;
      };
      p21 = prom<V +>{
        ncol2 = ldf ncol;
        p20 = prom<V +>{
          x34 = ld x;
          x35 = force? x34;
          checkMissing(x35);
          return x35;
        };
        r89 = dyn ncol2(p20);
        return r89;
      };
      r91 = dyn matrix[, nrow, ncol](0.0, p19, p21);
      return r91;
    };
    r93 = dyn rbind(p18, p22);
    check L164() else D50();
  L168():
    fast2 = force? fast1;
    checkMissing(fast2);
    c19 = `as.logical`(fast2);
    if c19 then L169() else L30();
  D50():
    deopt 180 [r93];
  L25():
    x13 = `[[`(s, i2, NULL, TRUE);
    st i = x13;
    x14 = ld x;
    check L129() else D30();
  L30():
    N12 = ld N;
    check L173() else D56();
  L31(r99):
    st NewN = r99;
    rbind1 = ldf rbind;
    check L174() else D57();
  L128():
    goto L26();
  L164():
    st x = r93;
    nrow1 = ldf nrow;
    check L165() else D51();
  L169():
    nextn = ldf nextn;
    check L170() else D54();
  D30():
    deopt 97 [i2, x14];
  D51():
    deopt 183 [];
  D54():
    deopt 192 [];
  D56():
    deopt 195 [N12];
  D57():
    deopt 199 [];
  L129():
    x15 = force? x14;
    checkMissing(x15);
    c13 = `is.object`(x15);
    if c13 then L130() else L131(i2, x15);
  L165():
    p23 = prom<V +>{
      x36 = ld x;
      x37 = force? x36;
      checkMissing(x37);
      return x37;
    };
    r95 = dyn nrow1(p23);
    check L166() else D52();
  L170():
    p24 = prom<V +>{
      N10 = ld N;
      N11 = force? N10;
      checkMissing(N11);
      return N11;
    };
    r98 = dyn nextn(p24);
    check L171() else D55();
  L173():
    N13 = force? N12;
    checkMissing(N13);
    goto L31(N13);
  L174():
    p25 = prom<V +>{
      x38 = ld x;
      x39 = force? x38;
      checkMissing(x39);
      return x39;
    };
    p29 = prom<V +>{
      matrix1 = ldf matrix;
      p26 = prom<V +>{
        NewN = ld NewN;
        NewN1 = force? NewN;
        checkMissing(NewN1);
        N14 = ld N;
        N15 = force? N14;
        checkMissing(N15);
        r101 = `-`(NewN1, N15);
        visible.0();
        return r101;
      };
      p28 = prom<V +>{
        ncol3 = ldf ncol;
        p27 = prom<V +>{
          x40 = ld x;
          x41 = force? x40;
          checkMissing(x41);
          return x41;
        };
        r104 = dyn ncol3(p27);
        return r104;
      };
      r106 = dyn matrix1[, nrow, ncol](0.0, p26, p28);
      return r106;
    };
    r108 = dyn rbind1(p25, p29);
    check L175() else D58();
  D52():
    deopt 185 [r95];
  D55():
    deopt 194 [r98];
  D58():
    deopt 202 [r108];
  L21(i8, dx1):
    mean = ldf mean;
    check L134() else D32();
  L130():
    dr = tryDispatchBuiltin.1("[", x15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L132() else L131(i2, dr);
  L131(i6, x17):
    i9 = ld i;
    check L133() else D31();
  L166():
    st N = r95;
    goto L29();
  L171():
    goto L31(r98);
  L175():
    st x = r108;
    nrow2 = ldf nrow;
    check L176() else D59();
  D31():
    deopt 100 [i6, x17, i9];
  D32():
    deopt 104 [i8, dx1];
  D59():
    deopt 205 [];
  L132():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(i2, dx);
  L133():
    i10 = force? i9;
    __ = ldf `[` in base;
    r45 = dyn __(x15, <missing>, i10);
    goto L21(i6, r45);
  L134():
    p12 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      c14 = `is.object`(x19);
      if c14 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x19);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      i11 = ld i;
      i12 = force? i11;
      __1 = ldf `[` in base;
      r46 = dyn __1(x19, <missing>, i12);
      goto L0(r46);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r48 = dyn mean(p12);
    check L135() else D33();
  L176():
    p30 = prom<V +>{
      x42 = ld x;
      x43 = force? x42;
      checkMissing(x43);
      return x43;
    };
    r110 = dyn nrow2(p30);
    check L177() else D60();
  D33():
    deopt 106 [i8, dx1, r48];
  D60():
    deopt 207 [r110];
  L135():
    r49 = `-`(dx1, r48);
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L136() else L137();
  L177():
    st N = r110;
    sym4 = ldf floor;
    base4 = ldf floor in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L178() else L179();
  L22(i15, r53, r54):
    t2 = ld t;
    check L145() else D38();
  L32(r112):
    st Nspec = r112;
    sym5 = ldf `seq.int`;
    base5 = ldf `seq.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L181() else L182();
  L136():
    x22 = ld x;
    check L138() else D34();
  L137():
    r52 = dyn base3(<lang `*`(`[`(x, , i), t)>);
    goto L22(i8, r49, r52);
  L178():
    N16 = ld N;
    check L180() else D61();
  L179():
    r111 = dyn base4(<lang `/`(N, 2.0)>);
    goto L32(r111);
  D34():
    deopt 109 [i8, r49, x22];
  D38():
    deopt 119 [i15, r53, r54, t2];
  D61():
    deopt 210 [N16];
  L33(r116):
    st freq = r116;
    mvfft = ldf mvfft;
    check L189() else D68();
  L138():
    x23 = force? x22;
    checkMissing(x23);
    c15 = `is.object`(x23);
    if c15 then L139() else L140(i8, r49, x23);
  L145():
    t3 = force? t2;
    checkMissing(t3);
    r62 = `*`(r54, t3);
    sumt2 = ld sumt2;
    check L146() else D39();
  L180():
    N17 = force? N16;
    checkMissing(N17);
    r113 = `/`(N17, 2.0);
    r114 = floor(r113);
    goto L32(r114);
  L181():
    xfreq = ld xfreq;
    check L183() else D62();
  L182():
    r115 = dyn base5[from, by, `length.out`](<lang `/`(xfreq, N)>, <lang `/`(xfreq, N)>, <sym Nspec>);
    goto L33(r115);
  D39():
    deopt 121 [i15, r53, r62, sumt2];
  D62():
    deopt 218 [xfreq];
  D68():
    deopt 235 [];
  L23(i19, r58, dx5):
    t = ld t;
    check L143() else D36();
  L139():
    dr4 = tryDispatchBuiltin.1("[", x23);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L141() else L140(i8, r49, dr4);
  L140(i17, r56, x25):
    i20 = ld i;
    check L142() else D35();
  L146():
    sumt3 = force? sumt2;
    checkMissing(sumt3);
    r63 = `/`(r62, sumt3);
    r64 = `-`(r53, r63);
    l1 = ld x;
    c16 = `is.object`(l1);
    if c16 then L147() else L148(i15, r64, l1);
  L183():
    xfreq1 = force? xfreq;
    checkMissing(xfreq1);
    N18 = ld N;
    check L184() else D63();
  L189():
    p31 = prom<V +>{
      x44 = ld x;
      x45 = force? x44;
      checkMissing(x45);
      return x45;
    };
    r121 = dyn mvfft(p31);
    check L190() else D69();
  D35():
    deopt 112 [i17, r56, x25, i20];
  D36():
    deopt 115 [i19, r58, dx5, t];
  D63():
    deopt 219 [xfreq1, N18];
  D69():
    deopt 237 [r121];
  L24(i25, dx7):
    st x = dx7;
    goto L20(i25);
  L141():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L23(i8, r49, dx4);
  L142():
    i21 = force? i20;
    __2 = ldf `[` in base;
    r59 = dyn __2(x23, <missing>, i21);
    goto L23(i17, r56, r59);
  L143():
    t1 = force? t;
    checkMissing(t1);
    r60 = `*`(dx5, t1);
    sum = ldf sum in base;
    r61 = dyn sum(r60);
    check L144() else D37();
  L147():
    dr6 = tryDispatchBuiltin.0("[<-", l1, r64);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L149() else L148(i15, r64, dr6);
  L148(i23, r66, l3):
    i26 = ld i;
    check L150() else D40();
  L184():
    N19 = force? N18;
    checkMissing(N19);
    r117 = `/`(xfreq1, N19);
    xfreq2 = ld xfreq;
    check L185() else D64();
  L190():
    st xfft = r121;
    array = ldf array;
    check L191() else D70();
  D37():
    deopt 119 [i19, r58, r61];
  D40():
    deopt 127 [i23, r66, l3, r64, i26];
  D64():
    deopt 223 [xfreq2];
  D70():
    deopt 240 [];
  L144():
    goto L22(i19, r58, r61);
  L149():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L24(i15, dx6);
  L150():
    i27 = force? i26;
    ___1 = ldf `[<-` in base;
    r69 = dyn ___1(l1, <missing>, i27, r64);
    goto L24(i23, r69);
  L185():
    xfreq3 = force? xfreq2;
    checkMissing(xfreq3);
    N20 = ld N;
    check L186() else D65();
  L191():
    p34 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r123):
      return r123;
    L1():
      N22 = ld N;
      N23 = force? N22;
      checkMissing(N23);
      ncol4 = ldf ncol;
      p32 = prom<V +>{
        x46 = ld x;
        x47 = force? x46;
        checkMissing(x47);
        return x47;
      };
      r125 = dyn ncol4(p32);
      ncol5 = ldf ncol;
      p33 = prom<V +>{
        x48 = ld x;
        x49 = force? x48;
        checkMissing(x49);
        return x49;
      };
      r127 = dyn ncol5(p33);
      c20 = ldf c in base;
      r128 = dyn c20(N23, r125, r127);
      goto L0(r128);
    L2():
      r122 = dyn base6(<sym N>, <lang ncol(x)>, <lang ncol(x)>);
      goto L0(r122);
    };
    r130 = dyn array[, dim](NA_LGL, p34);
    check L192() else D71();
  D65():
    deopt 224 [xfreq3, N20];
  D71():
    deopt 244 [r130];
  L186():
    N21 = force? N20;
    checkMissing(N21);
    r118 = `/`(xfreq3, N21);
    Nspec = ld Nspec;
    check L187() else D66();
  L192():
    st pgram = r130;
    ncol6 = ldf ncol;
    check L193() else D72();
  D66():
    deopt 228 [Nspec];
  D72():
    deopt 248 [1];
  L187():
    Nspec1 = force? Nspec;
    checkMissing(Nspec1);
    seq_int = ldf `seq.int` in base;
    r119 = dyn seq_int(r117, r118, Nspec1);
    check L188() else D67();
  L193():
    p35 = prom<V +>{
      x50 = ld x;
      x51 = force? x50;
      checkMissing(x51);
      return x51;
    };
    r132 = dyn ncol6(p35);
    check L194() else D73();
  D67():
    deopt 232 [r119];
  D73():
    deopt 250 [1, r132];
  L188():
    goto L33(r119);
  L194():
    r133 = `:`(1, r132);
    s1 = toForSeq(r133);
    l4 = length(s1);
    i29 = 0;
    goto L34(i29);
  L34(i30):
    i31 = `+`.1(i30, 1);
    c21 = `<`.1(l4, i31);
    if c21 then L195() else L44();
  L44():
    x52 = `[[`(s1, i31, NULL, TRUE);
    st i = x52;
    ncol7 = ldf ncol;
    check L196() else D74();
  L195():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L237() else L238();
  D74():
    deopt 254 [i31, 1];
  L45(r168):
    r169 = `!`(r168);
    c30 = `as.logical`(r169);
    if c30 then L240() else L46();
  L196():
    p36 = prom<V +>{
      x53 = ld x;
      x54 = force? x53;
      checkMissing(x54);
      return x54;
    };
    r135 = dyn ncol7(p36);
    check L197() else D75();
  L237():
    kernel6 = ld kernel;
    check L239() else D94();
  L238():
    r167 = dyn base8(<sym kernel>);
    goto L45(r167);
  D75():
    deopt 256 [i31, 1, r135];
  D94():
    deopt 319 [kernel6];
  L46():
    st df = 2.0;
    sym9 = ldf sqrt;
    base9 = ldf sqrt in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L259() else L260();
  L52():
    df = ld df;
    check L261() else D107();
  L197():
    r136 = `:`(1, r135);
    s2 = toForSeq(r136);
    l5 = length(s2);
    i34 = 0;
    goto L35(i31, i34);
  L239():
    kernel7 = force? kernel6;
    checkMissing(kernel7);
    c29 = `==`(kernel7, NULL);
    goto L45(c29);
  L240():
    ncol8 = ldf ncol;
    check L241() else D95();
  D95():
    deopt 325 [1];
  D107():
    deopt 375 [df];
  L35(i35, i36):
    i37 = `+`.1(i36, 1);
    c22 = `<`.1(l5, i37);
    if c22 then L198() else L43();
  L53(r191):
    st bandwidth = r191;
    goto L52();
  L241():
    p37 = prom<V +>{
      x56 = ld x;
      x57 = force? x56;
      checkMissing(x57);
      return x57;
    };
    r171 = dyn ncol8(p37);
    check L242() else D96();
  L259():
    r192 = sqrt(0.08333333333333333);
    goto L53(r192);
  L260():
    r190 = dyn base9(<lang `/`(1.0, 12.0)>);
    goto L53(r190);
  L261():
    df1 = force? df;
    checkMissing(df1);
    u4 = ld u4;
    check L262() else D108();
  D96():
    deopt 327 [1, r171];
  D108():
    deopt 376 [df1, u4];
  L43():
    x55 = `[[`(s2, i37, NULL, TRUE);
    st j = x55;
    xfft = ld xfft;
    check L199() else D76();
  L198():
    goto L34(i35);
  L242():
    r172 = `:`(1, r171);
    s3 = toForSeq(r172);
    l12 = length(s3);
    i106 = 0;
    goto L47(i106);
  L262():
    u5 = force? u4;
    checkMissing(u5);
    u6 = ld u2;
    check L263() else D109();
  D76():
    deopt 258 [i35, i37, xfft];
  D109():
    deopt 377 [df1, u5, u6];
  L47(i107):
    i108 = `+`.1(i107, 1);
    c31 = `<`.1(l12, i108);
    if c31 then L243() else L51();
  L199():
    xfft1 = force? xfft;
    checkMissing(xfft1);
    c23 = `is.object`(xfft1);
    if c23 then L200() else L201(i35, i37, xfft1);
  L263():
    u7 = force? u6;
    checkMissing(u7);
    r193 = `^`(u7, 2.0);
    r194 = `/`(u5, r193);
    r195 = `/`(df1, r194);
    st df = r195;
    df2 = ld df;
    check L264() else D110();
  D110():
    deopt 384 [df2];
  L36(i48, i49, dx9):
    sym7 = ldf Conj;
    base7 = ldf Conj in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L204() else L205();
  L51():
    x58 = `[[`(s3, i108, NULL, TRUE);
    st i = x58;
    ncol9 = ldf ncol;
    check L244() else D97();
  L200():
    dr8 = tryDispatchBuiltin.1("[", xfft1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L202() else L201(i35, i37, dr8);
  L201(i44, i45, xfft3):
    i50 = ld i;
    check L203() else D77();
  L243():
    df_kernel = ldf `df.kernel`;
    check L254() else D103();
  L264():
    df3 = force? df2;
    checkMissing(df3);
    N28 = ld N0;
    check L265() else D111();
  D77():
    deopt 261 [i44, i45, xfft3, i50];
  D97():
    deopt 331 [i108, 1];
  D103():
    deopt 358 [];
  D111():
    deopt 385 [df3, N28];
  L37(i56, i57, dx12, r139):
    r142 = `*`(dx12, r139);
    N24 = ld N0;
    check L212() else D81();
  L202():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L36(i35, i37, dx8);
  L203():
    i51 = force? i50;
    __3 = ldf `[` in base;
    r137 = dyn __3(xfft1, <missing>, i51);
    goto L36(i44, i45, r137);
  L204():
    xfft4 = ld xfft;
    check L206() else D78();
  L205():
    r138 = dyn base7(<lang `[`(xfft, , j)>);
    goto L37(i48, i49, dx9, r138);
  L244():
    p38 = prom<V +>{
      x59 = ld x;
      x60 = force? x59;
      checkMissing(x60);
      return x60;
    };
    r174 = dyn ncol9(p38);
    check L245() else D98();
  L254():
    p41 = prom<V +>{
      kernel10 = ld kernel;
      kernel11 = force? kernel10;
      checkMissing(kernel11);
      return kernel11;
    };
    r186 = dyn df_kernel(p41);
    check L255() else D104();
  L265():
    N29 = force? N28;
    checkMissing(N29);
    N30 = ld N;
    check L266() else D112();
  D78():
    deopt 266 [i48, i49, dx9, xfft4];
  D81():
    deopt 275 [i56, i57, r142, N24];
  D98():
    deopt 333 [i108, 1, r174];
  D104():
    deopt 360 [r186];
  D112():
    deopt 386 [df3, N29, N30];
  L206():
    xfft5 = force? xfft4;
    checkMissing(xfft5);
    c24 = `is.object`(xfft5);
    if c24 then L207() else L208(i48, i49, dx9, xfft5);
  L212():
    N25 = force? N24;
    checkMissing(N25);
    xfreq4 = ld xfreq;
    check L213() else D82();
  L245():
    r175 = `:`(1, r174);
    s4 = toForSeq(r175);
    l13 = length(s4);
    i111 = 0;
    goto L48(i108, i111);
  L255():
    st df = r186;
    bandwidth_kernel = ldf `bandwidth.kernel`;
    check L256() else D105();
  L266():
    N31 = force? N30;
    checkMissing(N31);
    r196 = `/`(N29, N31);
    r197 = `*`(df3, r196);
    st df = r197;
    bandwidth = ld bandwidth;
    check L267() else D113();
  D82():
    deopt 276 [i56, i57, r142, N25, xfreq4];
  D105():
    deopt 363 [];
  D113():
    deopt 391 [bandwidth];
  L38(i64, i65, dx17, dx18):
    Conj = ldf Conj in base;
    r141 = dyn Conj(dx18);
    check L211() else D80();
  L48(i112, i113):
    i114 = `+`.1(i113, 1);
    c32 = `<`.1(l13, i114);
    if c32 then L246() else L50();
  L207():
    dr10 = tryDispatchBuiltin.1("[", xfft5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L209() else L208(i48, i49, dx9, dr10);
  L208(i60, i61, dx14, xfft7):
    j = ld j;
    check L210() else D79();
  L213():
    xfreq5 = force? xfreq4;
    checkMissing(xfreq5);
    r143 = `*`(N25, xfreq5);
    r144 = `/`(r142, r143);
    l6 = ld pgram;
    c25 = `is.object`(l6);
    if c25 then L214() else L215(i56, i57, r144, l6);
  L256():
    p42 = prom<V +>{
      kernel12 = ld kernel;
      kernel13 = force? kernel12;
      checkMissing(kernel13);
      return kernel13;
    };
    r188 = dyn bandwidth_kernel(p42);
    check L257() else D106();
  L267():
    bandwidth1 = force? bandwidth;
    checkMissing(bandwidth1);
    xfreq6 = ld xfreq;
    check L268() else D114();
  D79():
    deopt 269 [i60, i61, dx14, xfft7, j];
  D80():
    deopt 274 [i64, i65, dx17, r141];
  D106():
    deopt 365 [r188];
  D114():
    deopt 392 [bandwidth1, xfreq6];
  L39(i72, i73, dx20):
    st pgram = dx20;
    pgram = ld pgram;
    check L219() else D85();
  L50():
    x61 = `[[`(s4, i114, NULL, TRUE);
    st j = x61;
    kernapply = ldf kernapply;
    check L247() else D99();
  L209():
    dx16 = getTryDispatchBuiltinValue(dr10);
    goto L38(i48, i49, dx9, dx16);
  L210():
    j1 = force? j;
    __4 = ldf `[` in base;
    r140 = dyn __4(xfft5, <missing>, j1);
    goto L38(i60, i61, dx14, r140);
  L211():
    goto L37(i64, i65, dx17, r141);
  L214():
    dr12 = tryDispatchBuiltin.0("[<-", l6, r144);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L216() else L215(i56, i57, r144, dr12);
  L215(i68, i69, r146, l8):
    i74 = ld i;
    check L217() else D83();
  L246():
    goto L47(i112);
  L257():
    st bandwidth = r188;
    goto L52();
  L268():
    xfreq7 = force? xfreq6;
    checkMissing(xfreq7);
    r198 = `*`(bandwidth1, xfreq7);
    N32 = ld N;
    check L269() else D115();
  D83():
    deopt 282 [i68, i69, r146, l8, r144, i74];
  D85():
    deopt 290 [i72, i73, 0.5, pgram];
  D99():
    deopt 336 [i112, i114];
  D115():
    deopt 394 [r198, N32];
  L216():
    dx19 = getTryDispatchBuiltinValue(dr12);
    goto L39(i56, i57, dx19);
  L217():
    i75 = force? i74;
    j2 = ld j;
    check L218() else D84();
  L219():
    pgram1 = force? pgram;
    checkMissing(pgram1);
    c26 = `is.object`(pgram1);
    if c26 then L220() else L221(i72, i73, 0.5, pgram1);
  L247():
    p39 = prom<V +>{
      pgram8 = ld pgram;
      pgram9 = force? pgram8;
      checkMissing(pgram9);
      c33 = `is.object`(pgram9);
      if c33 then L1() else L2();
    L0(dx32):
      return dx32;
    L1():
      dr20 = tryDispatchBuiltin.1("[", pgram9);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2();
    L2():
      i119 = ld i;
      i120 = force? i119;
      j10 = ld j;
      j11 = force? j10;
      __7 = ldf `[` in base;
      r176 = dyn __7(pgram9, <missing>, i120, j11);
      goto L0(r176);
    L3():
      dx31 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx31);
    };
    p40 = prom<V +>{
      kernel8 = ld kernel;
      kernel9 = force? kernel8;
      checkMissing(kernel9);
      return kernel9;
    };
    r179 = dyn kernapply[, , circular](p39, p40, TRUE);
    check L248() else D100();
  L269():
    N33 = force? N32;
    checkMissing(N33);
    r199 = `/`(r198, N33);
    st bandwidth = r199;
    pgram12 = ld pgram;
    check L270() else D116();
  D84():
    deopt 284 [i68, i69, r146, l8, r144, j2];
  D100():
    deopt 341 [i112, i114, r179];
  D116():
    deopt 398 [pgram12];
  L40(i82, i83, r153, dx22):
    pgram4 = ld pgram;
    check L225() else D88();
  L218():
    j3 = force? j2;
    ___2 = ldf `[<-` in base;
    r149 = dyn ___2(l6, <missing>, i75, j3, r144);
    goto L39(i68, i69, r149);
  L220():
    dr14 = tryDispatchBuiltin.1("[", pgram1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L222() else L221(i72, i73, 0.5, dr14);
  L221(i78, i79, r151, pgram3):
    i84 = ld i;
    check L223() else D86();
  L248():
    l14 = ld pgram;
    c34 = `is.object`(l14);
    if c34 then L249() else L250(i112, i114, r179, l14);
  L270():
    pgram13 = force? pgram12;
    checkMissing(pgram13);
    c35 = `is.object`(pgram13);
    if c35 then L271() else L272(pgram13);
  D86():
    deopt 293 [i78, i79, r151, pgram3, 2.0, i84];
  D88():
    deopt 296 [i82, i83, r153, dx22, pgram4];
  L49(i127, i128, dx34):
    st pgram = dx34;
    goto L48(i127, i128);
  L54(dx36):
    st pgram = dx36;
    matrix2 = ldf matrix;
    check L275() else D118();
  L222():
    dx21 = getTryDispatchBuiltinValue(dr14);
    goto L40(i72, i73, 0.5, dx21);
  L223():
    i85 = force? i84;
    j4 = ld j;
    check L224() else D87();
  L225():
    pgram5 = force? pgram4;
    checkMissing(pgram5);
    c27 = `is.object`(pgram5);
    if c27 then L226() else L227(i82, i83, r153, dx22, pgram5);
  L249():
    dr22 = tryDispatchBuiltin.0("[<-", l14, r179);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L251() else L250(i112, i114, r179, dr22);
  L250(i123, i124, r181, l16):
    i129 = ld i;
    check L252() else D101();
  L271():
    dr24 = tryDispatchBuiltin.1("[", pgram13);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L273() else L272(dr24);
  L272(pgram15):
    Nspec2 = ld Nspec;
    check L274() else D117();
  D87():
    deopt 294 [i78, i79, r151, pgram3, 2.0, i85, j4];
  D101():
    deopt 344 [i123, i124, r181, l16, r179, i129];
  D117():
    deopt 401 [pgram15, 2.0, Nspec2];
  D118():
    deopt 414 [];
  L41(i92, i93, r158, dx27, dx28):
    r160 = `+`(dx27, dx28);
    r161 = `*`(r158, r160);
    l9 = ld pgram;
    c28 = `is.object`(l9);
    if c28 then L232() else L233(i92, i93, r161, l9);
  L224():
    j5 = force? j4;
    __5 = ldf `[` in base;
    r154 = dyn __5(pgram3, 2.0, i85, j5);
    goto L40(i78, i79, r151, r154);
  L226():
    dr16 = tryDispatchBuiltin.1("[", pgram5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L228() else L227(i82, i83, r153, dx22, dr16);
  L227(i88, i89, r156, dx24, pgram7):
    N26 = ld N;
    check L229() else D89();
  L251():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L49(i112, i114, dx33);
  L252():
    i130 = force? i129;
    j12 = ld j;
    check L253() else D102();
  L273():
    dx35 = getTryDispatchBuiltinValue(dr24);
    goto L54(dx35);
  L274():
    Nspec3 = force? Nspec2;
    checkMissing(Nspec3);
    r200 = `+`(Nspec3, 1.0);
    r201 = `:`(2.0, r200);
    __8 = ldf `[` in base;
    r202 = dyn __8(pgram13, r201, <missing>, <missing>, FALSE);
    goto L54(r202);
  L275():
    p43 = prom<V +>{
      Nspec4 = ld Nspec;
      Nspec5 = force? Nspec4;
      checkMissing(Nspec5);
      return Nspec5;
    };
    p44 = prom<V +>{
      nser = ld nser;
      nser1 = force? nser;
      checkMissing(nser1);
      return nser1;
    };
    r205 = dyn matrix2[, nrow, ncol](NA_LGL, p43, p44);
    check L276() else D119();
  D89():
    deopt 298 [i88, i89, r156, dx24, pgram7, N26];
  D102():
    deopt 346 [i123, i124, r181, l16, r179, j12];
  D119():
    deopt 420 [r205];
  L42(i102, i103, dx30):
    st pgram = dx30;
    goto L35(i102, i103);
  L228():
    dx26 = getTryDispatchBuiltinValue(dr16);
    goto L41(i82, i83, r153, dx22, dx26);
  L229():
    N27 = force? N26;
    i94 = ld i;
    check L230() else D90();
  L232():
    dr18 = tryDispatchBuiltin.0("[<-", l9, r161);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L234() else L233(i92, i93, r161, dr18);
  L233(i98, i99, r163, l11):
    i104 = ld i;
    check L235() else D92();
  L253():
    j13 = force? j12;
    ___4 = ldf `[<-` in base;
    r184 = dyn ___4(l14, <missing>, i130, j13, r179);
    goto L49(i123, i124, r184);
  L276():
    st spec = r205;
    nser2 = ld nser;
    check L277() else D120();
  D90():
    deopt 299 [i88, i89, r156, dx24, pgram7, N27, i94];
  D92():
    deopt 307 [i98, i99, r163, l11, r161, 1.0, i104];
  D120():
    deopt 423 [1, nser2];
  L230():
    i95 = force? i94;
    j6 = ld j;
    check L231() else D91();
  L234():
    dx29 = getTryDispatchBuiltinValue(dr18);
    goto L42(i92, i93, dx29);
  L235():
    i105 = force? i104;
    j8 = ld j;
    check L236() else D93();
  L277():
    nser3 = force? nser2;
    checkMissing(nser3);
    r206 = `:`(1, nser3);
    s5 = toForSeq(r206);
    l17 = length(s5);
    i131 = 0;
    goto L55(i131);
  D91():
    deopt 300 [i88, i89, r156, dx24, pgram7, N27, i95, j6];
  D93():
    deopt 308 [i98, i99, r163, l11, r161, 1.0, i105, j8];
  L55(i132):
    i133 = `+`.1(i132, 1);
    c36 = `<`.1(l17, i133);
    if c36 then L278() else L59();
  L231():
    j7 = force? j6;
    __6 = ldf `[` in base;
    r159 = dyn __6(pgram7, N27, i95, j7);
    goto L41(i88, i89, r156, dx24, r159);
  L236():
    j9 = force? j8;
    ___3 = ldf `[<-` in base;
    r166 = dyn ___3(l11, r161, 1.0, i105, j9);
    goto L42(i98, i99, r166);
  L59():
    x62 = `[[`(s5, i133, NULL, TRUE);
    st i = x62;
    sym10 = ldf Re;
    base10 = ldf Re in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L279() else L280();
  L278():
    nser4 = ld nser;
    check L293() else D127();
  D127():
    deopt 449 [nser4];
  L56(i138, r208):
    l18 = ld spec;
    c38 = `is.object`(l18);
    if c38 then L289() else L290(i138, r208, l18);
  L279():
    pgram16 = ld pgram;
    check L281() else D121();
  L280():
    r207 = dyn base10(<lang `[`(pgram, `:`(1, Nspec), i, i)>);
    goto L56(i133, r207);
  L293():
    nser5 = force? nser4;
    checkMissing(nser5);
    r217 = `==`(nser5, 1.0);
    c39 = `as.logical`(r217);
    if c39 then L294() else L60();
  D121():
    deopt 428 [i133, pgram16];
  L58(i150, dx40):
    st spec = dx40;
    goto L55(i150);
  L60():
    matrix3 = ldf matrix;
    check L296() else D128();
  L61():
    nser14 = ld nser;
    check L343() else D151();
  L281():
    pgram17 = force? pgram16;
    checkMissing(pgram17);
    c37 = `is.object`(pgram17);
    if c37 then L282() else L283(i133, pgram17);
  L289():
    dr28 = tryDispatchBuiltin.0("[<-", l18, r208);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L291() else L290(i138, r208, dr28);
  L290(i148, r213, l20):
    i151 = ld i;
    check L292() else D126();
  L294():
    st phase = NULL;
    st coh = NULL;
    goto L61();
  D126():
    deopt 441 [i148, r213, l20, r208, i151];
  D128():
    deopt 458 [];
  D151():
    deopt 562 [1, nser14];
  L57(i142, dx38):
    Re = ldf Re in base;
    r211 = dyn Re(dx38);
    check L288() else D125();
  L282():
    dr26 = tryDispatchBuiltin.1("[", pgram17);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L284() else L283(i133, dr26);
  L283(i140, pgram19):
    Nspec6 = ld Nspec;
    check L285() else D122();
  L291():
    dx39 = getTryDispatchBuiltinValue(dr28);
    goto L58(i138, dx39);
  L292():
    i152 = force? i151;
    ___5 = ldf `[<-` in base;
    r216 = dyn ___5(l18, <missing>, i152, r208);
    goto L58(i148, r216);
  L296():
    p45 = prom<V +>{
      Nspec8 = ld Nspec;
      Nspec9 = force? Nspec8;
      checkMissing(Nspec9);
      return Nspec9;
    };
    p46 = prom<V +>{
      nser6 = ld nser;
      nser7 = force? nser6;
      checkMissing(nser7);
      nser8 = ld nser;
      nser9 = force? nser8;
      checkMissing(nser9);
      r220 = `-`(nser9, 1.0);
      r221 = `*`(nser7, r220);
      r222 = `/`(r221, 2.0);
      return r222;
    };
    r224 = dyn matrix3[, nrow, ncol](NA_LGL, p45, p46);
    check L297() else D129();
  L343():
    nser15 = force? nser14;
    checkMissing(nser15);
    r270 = `:`(1, nser15);
    s8 = toForSeq(r270);
    l29 = length(s8);
    i238 = 0;
    goto L74(i238);
  D122():
    deopt 431 [i140, pgram19, 1, Nspec6];
  D125():
    deopt 438 [i142, r211];
  D129():
    deopt 464 [r224];
  L74(i239):
    i240 = `+`.1(i239, 1);
    c48 = `<`.1(l29, i240);
    if c48 then L344() else L77();
  L284():
    dx37 = getTryDispatchBuiltinValue(dr26);
    goto L57(i133, dx37);
  L285():
    Nspec7 = force? Nspec6;
    checkMissing(Nspec7);
    r209 = `:`(1, Nspec7);
    i143 = ld i;
    check L286() else D123();
  L288():
    goto L56(i142, r211);
  L297():
    st phase = r224;
    st coh = r224;
    nser10 = ld nser;
    check L298() else D130();
  D123():
    deopt 433 [i140, pgram19, r209, i143];
  D130():
    deopt 468 [1, nser10];
  L77():
    x65 = `[[`(s8, i240, NULL, TRUE);
    st i = x65;
    spec8 = ld spec;
    check L345() else D152();
  L286():
    i144 = force? i143;
    i145 = ld i;
    check L287() else D124();
  L298():
    nser11 = force? nser10;
    checkMissing(nser11);
    r225 = `-`(nser11, 1.0);
    r226 = `:`(1, r225);
    s6 = toForSeq(r226);
    l21 = length(s6);
    i153 = 0;
    goto L62(i153);
  L344():
    sym13 = ldf drop;
    base13 = ldf drop in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L355() else L356();
  D124():
    deopt 434 [i140, pgram19, r209, i144, i145];
  D152():
    deopt 565 [i240, spec8];
  L62(i154):
    i155 = `+`.1(i154, 1);
    c40 = `<`.1(l21, i155);
    if c40 then L299() else L73();
  L78(r279):
    st spec = r279;
    sym14 = ldf list;
    base14 = ldf list in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L359() else L360();
  L287():
    i146 = force? i145;
    __9 = ldf `[` in base;
    r210 = dyn __9(pgram19, r209, i144, i146);
    goto L57(i140, r210);
  L345():
    spec9 = force? spec8;
    checkMissing(spec9);
    c49 = `is.object`(spec9);
    if c49 then L346() else L347(i240, spec9);
  L355():
    spec12 = ld spec;
    check L357() else D156();
  L356():
    r278 = dyn base13(<sym spec>);
    goto L78(r278);
  D156():
    deopt 586 [spec12];
  L73():
    x63 = `[[`(s6, i155, NULL, TRUE);
    st i = x63;
    i158 = ld i;
    check L300() else D131();
  L75(i246, dx58):
    u8 = ld u2;
    check L350() else D154();
  L79(r282):
    st `spg.out` = r282;
    l33 = ld `spg.out`;
    class__ = ldf `class<-`;
    check L383() else D176();
  L299():
    goto L61();
  L346():
    dr42 = tryDispatchBuiltin.1("[", spec9);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L348() else L347(i240, dr42);
  L347(i244, spec11):
    i247 = ld i;
    check L349() else D153();
  L357():
    spec13 = force? spec12;
    checkMissing(spec13);
    drop = ldf drop in base;
    r280 = dyn drop(spec13);
    check L358() else D157();
  L359():
    freq = ld freq;
    check L361() else D158();
  L360():
    r281 = dyn base14[freq, spec, coh, phase, kernel, df, bandwidth, `n.used`, `orig.n`, series, snames, method, taper, pad, detrend, demean](<sym freq>, <sym spec>, <sym coh>, <sym phase>, <sym kernel>, <sym df>, <sym bandwidth>, <sym N>, <sym N0>, <sym series>, <lang colnames(x)>, <lang if(is.null(kernel), "Raw Periodogram", "Smoothed Periodogram")>, <sym taper>, <sym pad>, <sym detrend>, <sym demean>);
    goto L79(r281);
  D131():
    deopt 473 [i155, i158];
  D153():
    deopt 568 [i244, spec11, i247];
  D154():
    deopt 571 [i246, dx58, u8];
  D157():
    deopt 589 [r280];
  D158():
    deopt 593 [freq];
  D176():
    deopt 655 ["spec", l33, "spec"];
  L300():
    i159 = force? i158;
    checkMissing(i159);
    r227 = `+`(i159, 1.0);
    nser12 = ld nser;
    check L301() else D132();
  L348():
    dx57 = getTryDispatchBuiltinValue(dr42);
    goto L75(i240, dx57);
  L349():
    i248 = force? i247;
    __14 = ldf `[` in base;
    r271 = dyn __14(spec9, <missing>, i248);
    goto L75(i244, r271);
  L350():
    u9 = force? u8;
    checkMissing(u9);
    r272 = `/`(dx58, u9);
    l30 = ld spec;
    c50 = `is.object`(l30);
    if c50 then L351() else L352(i246, r272, l30);
  L358():
    goto L78(r280);
  L361():
    freq1 = force? freq;
    checkMissing(freq1);
    spec14 = ld spec;
    check L362() else D159();
  L383():
    r289 = dyn class__(l33, NULL, "spec");
    check L384() else D177();
  D132():
    deopt 476 [i155, r227, nser12];
  D159():
    deopt 596 [spec14];
  D177():
    deopt 657 ["spec", r289];
  L76(i252, dx60):
    st spec = dx60;
    goto L74(i252);
  L301():
    nser13 = force? nser12;
    checkMissing(nser13);
    r228 = `:`(r227, nser13);
    s7 = toForSeq(r228);
    l22 = length(s7);
    i160 = 0;
    goto L63(i155, i160);
  L351():
    dr44 = tryDispatchBuiltin.0("[<-", l30, r272);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L353() else L352(i246, r272, dr44);
  L352(i250, r274, l32):
    i253 = ld i;
    check L354() else D155();
  L362():
    spec15 = force? spec14;
    checkMissing(spec15);
    coh = ld coh;
    check L363() else D160();
  L384():
    st `spg.out` = r289;
    plot1 = ld plot;
    check L385() else D178();
  D155():
    deopt 576 [i250, r274, l32, r272, i253];
  D160():
    deopt 599 [coh];
  D178():
    deopt 659 [plot1];
  L63(i161, i162):
    i163 = `+`.1(i162, 1);
    c41 = `<`.1(l22, i163);
    if c41 then L302() else L72();
  L353():
    dx59 = getTryDispatchBuiltinValue(dr44);
    goto L76(i246, dx59);
  L354():
    i254 = force? i253;
    ___8 = ldf `[<-` in base;
    r277 = dyn ___8(l30, <missing>, i254, r272);
    goto L76(i250, r277);
  L363():
    coh1 = force? coh;
    checkMissing(coh1);
    phase = ld phase;
    check L364() else D161();
  L385():
    plot2 = force? plot1;
    checkMissing(plot2);
    c53 = `as.logical`(plot2);
    if c53 then L386() else L83();
  D161():
    deopt 602 [phase];
  L72():
    x64 = `[[`(s7, i163, NULL, TRUE);
    st j = x64;
    sym11 = ldf Mod;
    base11 = ldf Mod in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L303() else L304();
  L83():
    spg_out4 = ld `spg.out`;
    check L394() else D183();
  L302():
    goto L62(i161);
  L364():
    phase1 = force? phase;
    checkMissing(phase1);
    kernel14 = ld kernel;
    check L365() else D162();
  L386():
    plot3 = ldf plot;
    check L387() else D179();
  D162():
    deopt 605 [kernel14];
  D179():
    deopt 662 [];
  D183():
    deopt 672 [spg_out4];
  L64(i172, i173, r230):
    r233 = `^`(r230, 2.0);
    spec = ld spec;
    check L312() else D137();
  L303():
    pgram20 = ld pgram;
    check L305() else D133();
  L304():
    r229 = dyn base11(<lang `[`(pgram, , i, j)>);
    goto L64(i161, i163, r229);
  L365():
    kernel15 = force? kernel14;
    checkMissing(kernel15);
    df4 = ld df;
    check L366() else D163();
  L387():
    p48 = prom<V +>{
      spg_out = ld `spg.out`;
      spg_out1 = force? spg_out;
      checkMissing(spg_out1);
      return spg_out1;
    };
    ddd1 = ld `...`;
    r291 = dyn plot3[, `...`](p48, ddd1);
    check L388() else D180();
  L394():
    spg_out5 = force? spg_out4;
    checkMissing(spg_out5);
    popenv;
    return spg_out5;
  D133():
    deopt 481 [i161, i163, pgram20];
  D137():
    deopt 493 [i172, i173, r233, spec];
  D163():
    deopt 608 [df4];
  D180():
    deopt 665 [r291];
  L305():
    pgram21 = force? pgram20;
    checkMissing(pgram21);
    c42 = `is.object`(pgram21);
    if c42 then L306() else L307(i161, i163, pgram21);
  L312():
    spec1 = force? spec;
    checkMissing(spec1);
    c43 = `is.object`(spec1);
    if c43 then L313() else L314(i172, i173, r233, spec1);
  L366():
    df5 = force? df4;
    checkMissing(df5);
    bandwidth2 = ld bandwidth;
    check L367() else D164();
  L388():
    sym16 = ldf invisible;
    base16 = ldf invisible in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L389() else L390();
  D164():
    deopt 611 [bandwidth2];
  L65(i180, i181, dx42):
    Mod = ldf Mod in base;
    r232 = dyn Mod(dx42);
    check L311() else D136();
  L66(i190, i191, r237, dx44):
    spec4 = ld spec;
    check L317() else D139();
  L84(r293):
    popenv;
    return r293;
  L306():
    dr30 = tryDispatchBuiltin.1("[", pgram21);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L308() else L307(i161, i163, dr30);
  L307(i176, i177, pgram23):
    i182 = ld i;
    check L309() else D134();
  L313():
    dr32 = tryDispatchBuiltin.1("[", spec1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L315() else L314(i172, i173, r233, dr32);
  L314(i186, i187, r235, spec3):
    i192 = ld i;
    check L316() else D138();
  L367():
    bandwidth3 = force? bandwidth2;
    checkMissing(bandwidth3);
    N34 = ld N;
    check L368() else D165();
  L389():
    spg_out2 = ld `spg.out`;
    check L391() else D181();
  L390():
    r292 = dyn base16(<sym spg.out>);
    goto L84(r292);
  D134():
    deopt 484 [i176, i177, pgram23, i182];
  D136():
    deopt 491 [i180, i181, r232];
  D138():
    deopt 496 [i186, i187, r235, spec3, i192];
  D139():
    deopt 499 [i190, i191, r237, dx44, spec4];
  D165():
    deopt 614 [N34];
  D181():
    deopt 668 [spg_out2];
  L308():
    dx41 = getTryDispatchBuiltinValue(dr30);
    goto L65(i161, i163, dx41);
  L309():
    i183 = force? i182;
    j14 = ld j;
    check L310() else D135();
  L311():
    goto L64(i180, i181, r232);
  L315():
    dx43 = getTryDispatchBuiltinValue(dr32);
    goto L66(i172, i173, r233, dx43);
  L316():
    i193 = force? i192;
    __11 = ldf `[` in base;
    r238 = dyn __11(spec1, <missing>, i193);
    goto L66(i186, i187, r235, r238);
  L317():
    spec5 = force? spec4;
    checkMissing(spec5);
    c44 = `is.object`(spec5);
    if c44 then L318() else L319(i190, i191, r237, dx44, spec5);
  L368():
    N35 = force? N34;
    checkMissing(N35);
    N36 = ld N0;
    check L369() else D166();
  L391():
    spg_out3 = force? spg_out2;
    checkMissing(spg_out3);
    invisible = ldf invisible in base;
    r294 = dyn invisible(spg_out3);
    check L392() else D182();
  D135():
    deopt 486 [i176, i177, pgram23, j14];
  D166():
    deopt 617 [N36];
  D182():
    deopt 671 [r294];
  L67(i200, i201, r242, dx49, dx50):
    r244 = `*`(dx49, dx50);
    r245 = `/`(r242, r244);
    l23 = ld coh;
    c45 = `is.object`(l23);
    if c45 then L322() else L323(i200, i201, r245, l23);
  L310():
    j15 = force? j14;
    __10 = ldf `[` in base;
    r231 = dyn __10(pgram21, <missing>, i183, j15);
    goto L65(i176, i177, r231);
  L318():
    dr34 = tryDispatchBuiltin.1("[", spec5);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L320() else L319(i190, i191, r237, dx44, dr34);
  L319(i196, i197, r240, dx46, spec7):
    j16 = ld j;
    check L321() else D140();
  L369():
    N37 = force? N36;
    checkMissing(N37);
    series = ld series;
    check L370() else D167();
  L392():
    goto L84(r294);
  D140():
    deopt 502 [i196, i197, r240, dx46, spec7, j16];
  D167():
    deopt 620 [series];
  L68(i208, i209, dx52):
    st coh = dx52;
    sym12 = ldf Arg;
    base12 = ldf Arg in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L328() else L329();
  L320():
    dx48 = getTryDispatchBuiltinValue(dr34);
    goto L67(i190, i191, r237, dx44, dx48);
  L321():
    j17 = force? j16;
    __12 = ldf `[` in base;
    r243 = dyn __12(spec5, <missing>, j17);
    goto L67(i196, i197, r240, dx46, r243);
  L322():
    dr36 = tryDispatchBuiltin.0("[<-", l23, r245);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L324() else L323(i200, i201, r245, dr36);
  L323(i204, i205, r247, l25):
    i210 = ld i;
    check L325() else D141();
  L370():
    series1 = force? series;
    checkMissing(series1);
    colnames = ldf colnames;
    check L371() else D168();
  D141():
    deopt 510 [i204, i205, r247, l25, r245, i210];
  D168():
    deopt 624 [];
  L69(i216, i217, r257):
    l26 = ld phase;
    c47 = `is.object`(l26);
    if c47 then L337() else L338(i216, i217, r257, l26);
  L324():
    dx51 = getTryDispatchBuiltinValue(dr36);
    goto L68(i200, i201, dx51);
  L325():
    i211 = force? i210;
    checkMissing(i211);
    j18 = ld j;
    check L326() else D142();
  L328():
    pgram24 = ld pgram;
    check L330() else D144();
  L329():
    r256 = dyn base12(<lang `[`(pgram, , i, j)>);
    goto L69(i208, i209, r256);
  L371():
    p47 = prom<V +>{
      x66 = ld x;
      x67 = force? x66;
      checkMissing(x67);
      return x67;
    };
    r284 = dyn colnames(p47);
    check L372() else D169();
  D142():
    deopt 511 [i204, i205, r247, l25, r245, i211, j18];
  D144():
    deopt 527 [i208, i209, pgram24];
  D169():
    deopt 626 [r284];
  L71(i234, i235, dx56):
    st phase = dx56;
    goto L63(i234, i235);
  L326():
    j19 = force? j18;
    checkMissing(j19);
    r250 = `-`(j19, 1.0);
    j20 = ld j;
    check L327() else D143();
  L330():
    pgram25 = force? pgram24;
    checkMissing(pgram25);
    c46 = `is.object`(pgram25);
    if c46 then L331() else L332(i208, i209, pgram25);
  L337():
    dr40 = tryDispatchBuiltin.0("[<-", l26, r257);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L339() else L338(i216, i217, r257, dr40);
  L338(i230, i231, r261, l28):
    i236 = ld i;
    check L340() else D148();
  L372():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L373() else L374();
  D143():
    deopt 514 [i204, i205, r247, l25, r245, i211, r250, j20];
  D148():
    deopt 540 [i230, i231, r261, l28, r257, i236];
  L70(i224, i225, dx54):
    Arg = ldf Arg in base;
    r259 = dyn Arg(dx54);
    check L336() else D147();
  L80(r286):
    c52 = `as.logical`(r286);
    if c52 then L376() else L81();
  L327():
    j21 = force? j20;
    checkMissing(j21);
    r251 = `-`(j21, 2.0);
    r252 = `*`(r250, r251);
    r253 = `/`(r252, 2.0);
    r254 = `+`(i211, r253);
    ___6 = ldf `[<-` in base;
    r255 = dyn ___6(l23, <missing>, r254, r245);
    goto L68(i204, i205, r255);
  L331():
    dr38 = tryDispatchBuiltin.1("[", pgram25);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L333() else L332(i208, i209, dr38);
  L332(i220, i221, pgram27):
    i226 = ld i;
    check L334() else D145();
  L339():
    dx55 = getTryDispatchBuiltinValue(dr40);
    goto L71(i216, i217, dx55);
  L340():
    i237 = force? i236;
    checkMissing(i237);
    j24 = ld j;
    check L341() else D149();
  L373():
    kernel16 = ld kernel;
    check L375() else D170();
  L374():
    r285 = dyn base15(<sym kernel>);
    goto L80(r285);
  D145():
    deopt 530 [i220, i221, pgram27, i226];
  D147():
    deopt 537 [i224, i225, r259];
  D149():
    deopt 541 [i230, i231, r261, l28, r257, i237, j24];
  D170():
    deopt 629 [kernel16];
  L81():
    goto L82("Smoothed Periodogram");
  L82(r287):
    taper7 = ld taper;
    check L378() else D171();
  L333():
    dx53 = getTryDispatchBuiltinValue(dr38);
    goto L70(i208, i209, dx53);
  L334():
    i227 = force? i226;
    j22 = ld j;
    check L335() else D146();
  L336():
    goto L69(i224, i225, r259);
  L341():
    j25 = force? j24;
    checkMissing(j25);
    r264 = `-`(j25, 1.0);
    j26 = ld j;
    check L342() else D150();
  L375():
    kernel17 = force? kernel16;
    checkMissing(kernel17);
    c51 = `==`(kernel17, NULL);
    goto L80(c51);
  L376():
    goto L82("Raw Periodogram");
  D146():
    deopt 532 [i220, i221, pgram27, j22];
  D150():
    deopt 544 [i230, i231, r261, l28, r257, i237, r264, j26];
  D171():
    deopt 637 [taper7];
  L335():
    j23 = force? j22;
    __13 = ldf `[` in base;
    r258 = dyn __13(pgram25, <missing>, i227, j23);
    goto L70(i220, i221, r258);
  L342():
    j27 = force? j26;
    checkMissing(j27);
    r265 = `-`(j27, 2.0);
    r266 = `*`(r264, r265);
    r267 = `/`(r266, 2.0);
    r268 = `+`(i237, r267);
    ___7 = ldf `[<-` in base;
    r269 = dyn ___7(l26, <missing>, r268, r257);
    goto L71(i230, i231, r269);
  L378():
    taper8 = force? taper7;
    checkMissing(taper8);
    pad5 = ld pad;
    check L379() else D172();
  D172():
    deopt 640 [pad5];
  L379():
    pad6 = force? pad5;
    checkMissing(pad6);
    detrend3 = ld detrend;
    check L380() else D173();
  D173():
    deopt 643 [detrend3];
  L380():
    detrend4 = force? detrend3;
    checkMissing(detrend4);
    demean3 = ld demean;
    check L381() else D174();
  D174():
    deopt 646 [demean3];
  L381():
    demean4 = force? demean3;
    checkMissing(demean4);
    list = ldf list in base;
    r288 = dyn list(freq1, spec15, coh1, phase1, kernel15, df5, bandwidth3, N35, N37, series1, r284, r287, taper8, pad6, detrend4, demean4);
    check L382() else D175();
  D175():
    deopt 650 [r288];
  L382():
    goto L79(r288);
  }
}