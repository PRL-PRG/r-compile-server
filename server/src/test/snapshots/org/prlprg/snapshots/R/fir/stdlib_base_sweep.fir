fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg apply:cls, reg attitude:*, reg attitude1:V, reg p1:p(V +), reg median:*, reg median1:V, reg p2:p(V +), reg r7:V, reg sweep:cls, reg data_matrix:cls, reg attitude2:*, reg attitude3:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg med_att:*, reg med_att1:V, reg p5:p(V +), reg r12:V, reg array:cls, reg r13:V, reg p6:p(V +), reg p7:p(V +), reg r16:V, reg sweep1:cls, reg A:*, reg A1:V, reg p8:p(V +), reg r18:V, reg apply1:cls, reg A2:*, reg A3:V, reg p9:p(V +), reg min:*, reg min1:V, reg p10:p(V +), reg r21:V, reg sweep2:cls, reg A4:*, reg A5:V, reg p11:p(V +), reg A_min:*, reg A_min1:V, reg p12:p(V +), reg r24:V, reg sweep3:cls, reg A6:*, reg A7:V, reg p13:p(V +), reg p14:p(V +), reg apply2:cls, reg A8:*, reg A9:V, reg p15:p(V +), reg p16:p(V +), reg median2:*, reg median3:V, reg p17:p(V +), reg r30:V, reg p18:p(V +), reg r32:V, reg sweep4:cls, reg A10:*, reg A11:V, reg p19:p(V +), reg p20:p(V +), reg r35:V, reg sweep5:cls, reg A12:*, reg A13:V, reg p21:p(V +), reg p22:p(V +), reg r38:V, reg sweep6:cls, reg A14:*, reg A15:V, reg p23:p(V +), reg p24:p(V +), reg r41:V, reg sweep7:cls, reg A16:*, reg A17:V, reg p25:p(V +), reg as_array:cls, reg p26:p(V +), reg r44:V, reg p27:p(V +), reg r46:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r47:V, reg r48:V, reg list:cls, reg r49:V, reg l:*, reg dimnames__:cls, reg r50:V, reg apply3:cls, reg A18:*, reg A19:V, reg p28:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r52:V, reg r53:V, reg c:cls, reg r54:V, reg p29:p(V +), reg mean:*, reg mean1:V, reg p30:p(V +), reg r57:V, reg mn_fum_fie:*, reg mn_fum_fie1:V, reg sweep8:cls, reg A20:*, reg A21:V, reg p31:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r59:V, reg r60:V, reg c1:cls, reg r61:V, reg p32:p(V +), reg mn_fum_fie2:*, reg mn_fum_fie3:V, reg p33:p(V +), reg r64:V |
    mkenv;
    r = clos inner2339650375;
    st sweep = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    apply = ldf apply;
    check L6() else D2();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L4():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    p1 = prom<V +>{
      attitude = ld attitude;
      attitude1 = force? attitude;
      checkMissing(attitude1);
      return attitude1;
    };
    p2 = prom<V +>{
      median = ld median;
      median1 = force? median;
      checkMissing(median1);
      return median1;
    };
    r7 = dyn apply(p1, 2.0, p2);
    check L7() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r7];
  L5():
    goto L0();
  L7():
    st `med.att` = r7;
    sweep = ldf sweep;
    check L8() else D4();
  D4():
    deopt 16 [];
  L8():
    p4 = prom<V +>{
      data_matrix = ldf `data.matrix`;
      p3 = prom<V +>{
        attitude2 = ld attitude;
        attitude3 = force? attitude2;
        checkMissing(attitude3);
        return attitude3;
      };
      r9 = dyn data_matrix(p3);
      return r9;
    };
    p5 = prom<V +>{
      med_att = ld `med.att`;
      med_att1 = force? med_att;
      checkMissing(med_att1);
      return med_att1;
    };
    r12 = dyn sweep(p4, 2.0, p5);
    check L9() else D5();
  D5():
    deopt 20 [r12];
  L9():
    array = ldf array;
    check L10() else D6();
  D6():
    deopt 22 [];
  L10():
    p6 = prom<V +>{
      r13 = `:`(1.0, 24.0);
      return r13;
    };
    p7 = prom<V +>{
      return <int 4, 3, 2>;
    };
    r16 = dyn array[, dim](p6, p7);
    check L11() else D7();
  D7():
    deopt 26 [r16];
  L11():
    st A = r16;
    sweep1 = ldf sweep;
    check L12() else D8();
  D8():
    deopt 29 [];
  L12():
    p8 = prom<V +>{
      A = ld A;
      A1 = force? A;
      checkMissing(A1);
      return A1;
    };
    r18 = dyn sweep1(p8, 1.0, 5.0);
    check L13() else D9();
  D9():
    deopt 33 [r18];
  L13():
    apply1 = ldf apply;
    check L14() else D10();
  D10():
    deopt 35 [];
  L14():
    p9 = prom<V +>{
      A2 = ld A;
      A3 = force? A2;
      checkMissing(A3);
      return A3;
    };
    p10 = prom<V +>{
      min = ld min;
      min1 = force? min;
      checkMissing(min1);
      return min1;
    };
    r21 = dyn apply1(p9, 1.0, p10);
    check L15() else D11();
  D11():
    deopt 39 [r21];
  L15():
    st `A.min` = r21;
    sweep2 = ldf sweep;
    check L16() else D12();
  D12():
    deopt 42 [];
  L16():
    p11 = prom<V +>{
      A4 = ld A;
      A5 = force? A4;
      checkMissing(A5);
      return A5;
    };
    p12 = prom<V +>{
      A_min = ld `A.min`;
      A_min1 = force? A_min;
      checkMissing(A_min1);
      return A_min1;
    };
    r24 = dyn sweep2(p11, 1.0, p12);
    check L17() else D13();
  D13():
    deopt 46 [r24];
  L17():
    sweep3 = ldf sweep;
    check L18() else D14();
  D14():
    deopt 48 [];
  L18():
    p13 = prom<V +>{
      A6 = ld A;
      A7 = force? A6;
      checkMissing(A7);
      return A7;
    };
    p14 = prom<V +>{
      return <int 1, 2>;
    };
    p18 = prom<V +>{
      apply2 = ldf apply;
      p15 = prom<V +>{
        A8 = ld A;
        A9 = force? A8;
        checkMissing(A9);
        return A9;
      };
      p16 = prom<V +>{
        return <int 1, 2>;
      };
      p17 = prom<V +>{
        median2 = ld median;
        median3 = force? median2;
        checkMissing(median3);
        return median3;
      };
      r30 = dyn apply2(p15, p16, p17);
      return r30;
    };
    r32 = dyn sweep3(p13, p14, p18);
    check L19() else D15();
  D15():
    deopt 52 [r32];
  L19():
    sweep4 = ldf sweep;
    check L20() else D16();
  D16():
    deopt 54 [];
  L20():
    p19 = prom<V +>{
      A10 = ld A;
      A11 = force? A10;
      checkMissing(A11);
      return A11;
    };
    p20 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r35 = dyn sweep4(p19, 1.0, p20);
    check L21() else D17();
  D17():
    deopt 58 [r35];
  L21():
    sweep5 = ldf sweep;
    check L22() else D18();
  D18():
    deopt 60 [];
  L22():
    p21 = prom<V +>{
      A12 = ld A;
      A13 = force? A12;
      checkMissing(A13);
      return A13;
    };
    p22 = prom<V +>{
      return <int 6, 5, 4, 3, 2, 1>;
    };
    r38 = dyn sweep5(p21, 1.0, p22);
    check L23() else D19();
  D19():
    deopt 64 [r38];
  L23():
    sweep6 = ldf sweep;
    check L24() else D20();
  D20():
    deopt 66 [];
  L24():
    p23 = prom<V +>{
      A14 = ld A;
      A15 = force? A14;
      checkMissing(A15);
      return A15;
    };
    p24 = prom<V +>{
      return <int 1, 2>;
    };
    r41 = dyn sweep6(p23, 1.0, p24);
    check L25() else D21();
  D21():
    deopt 70 [r41];
  L25():
    sweep7 = ldf sweep;
    check L26() else D22();
  D22():
    deopt 72 [];
  L26():
    p25 = prom<V +>{
      A16 = ld A;
      A17 = force? A16;
      checkMissing(A17);
      return A17;
    };
    p27 = prom<V +>{
      as_array = ldf `as.array`;
      p26 = prom<V +>{
        return <int 1, 2>;
      };
      r44 = dyn as_array(p26);
      return r44;
    };
    r46 = dyn sweep7(p25, 1.0, p27);
    check L27() else D23();
  D23():
    deopt 76 [r46];
  L27():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L1(r48):
    l = ld A;
    dimnames__ = ldf `dimnames<-`;
    check L31() else D25();
  L28():
    list = ldf list in base;
    r49 = dyn list(<int 1, 2, 3, 4>, <int 1, 2, 3>, <int 1, 2>);
    check L30() else D24();
  L29():
    r47 = dyn base1[fee, fie, fum](<lang `:`(1.0, 4.0)>, <lang `:`(1.0, 3.0)>, <lang `:`(1.0, 2.0)>);
    goto L1(r47);
  D24():
    deopt 89 [r49];
  D25():
    deopt 91 [r48, l, r48];
  L30():
    goto L1(r49);
  L31():
    r50 = dyn dimnames__(l, NULL, r48);
    check L32() else D26();
  D26():
    deopt 93 [r48, r50];
  L32():
    st A = r50;
    apply3 = ldf apply;
    check L33() else D27();
  D27():
    deopt 96 [];
  L33():
    p28 = prom<V +>{
      A18 = ld A;
      A19 = force? A18;
      checkMissing(A19);
      return A19;
    };
    p29 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      c = ldf c in base;
      r54 = dyn c("fum", "fie");
      goto L0(r54);
    L2():
      r52 = dyn base2("fum", "fie");
      goto L0(r52);
    };
    p30 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r57 = dyn apply3(p28, p29, p30);
    check L34() else D28();
  D28():
    deopt 100 [r57];
  L34():
    st mn_fum_fie = r57;
    mn_fum_fie = ld mn_fum_fie;
    check L35() else D29();
  D29():
    deopt 102 [mn_fum_fie];
  L35():
    mn_fum_fie1 = force? mn_fum_fie;
    checkMissing(mn_fum_fie1);
    sweep8 = ldf sweep;
    check L36() else D30();
  D30():
    deopt 105 [];
  L36():
    p31 = prom<V +>{
      A20 = ld A;
      A21 = force? A20;
      checkMissing(A21);
      return A21;
    };
    p32 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      c1 = ldf c in base;
      r61 = dyn c1("fum", "fie");
      goto L0(r61);
    L2():
      r59 = dyn base3("fum", "fie");
      goto L0(r59);
    };
    p33 = prom<V +>{
      mn_fum_fie2 = ld mn_fum_fie;
      mn_fum_fie3 = force? mn_fum_fie2;
      checkMissing(mn_fum_fie3);
      return mn_fum_fie3;
    };
    r64 = dyn sweep8(p31, p32, p33);
    check L37() else D31();
  D31():
    deopt 109 [r64];
  L37():
    popenv;
    return r64;
  }
}
fun inner2339650375(x, MARGIN, STATS, FUN, `check.margin`, `...`) {
  (reg x:*, reg MARGIN:*, reg STATS:*, reg FUN:*, reg check_margin:*, reg ddd:dots) -+> V { var x:*, var MARGIN:*, var STATS:*, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, var `check.margin`:*, reg check_margin_isMissing:L, reg check_margin_orDefault:*, var `...`:dots?, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg dim:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg MARGIN1:*, reg MARGIN2:V, reg c:L, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg dn:*, reg dn1:V, reg names:cls, reg r14:V, reg c2:V, reg c3:L, reg stop:cls, reg r15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg MARGIN3:*, reg MARGIN4:V, reg dnn:*, reg dnn1:V, reg match:cls, reg r19:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r20:V, reg r21:V, reg MARGIN5:*, reg MARGIN6:V, reg anyNA:cls, reg r22:V, reg c4:L, reg stop1:cls, reg r23:V, reg r24:V, reg check_margin1:*, reg check_margin2:V, reg c5:L, reg dims:*, reg dims1:V, reg c6:L, reg dims3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg MARGIN7:*, reg MARGIN8:V, reg __:cls, reg r26:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg STATS1:*, reg STATS2:V, reg dim1:cls, reg r29:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r30:V, reg r31:V, reg STATS3:*, reg STATS4:V, reg length:cls, reg r32:V, reg lstats:*, reg lstats1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r33:V, reg lstats4:V, reg r34:V, reg dimmargin:*, reg dimmargin1:V, reg prod:cls, reg r35:V, reg r36:V, reg c7:L, reg warning:cls, reg r37:V, reg r38:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r39:V, reg r40:V, reg dimstats:*, reg dimstats1:V, reg c8:V, reg c9:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r41:V, reg r42:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r43:V, reg r44:V, reg dimmargin2:*, reg dimmargin3:V, reg cumprod:cls, reg r45:V, reg c10:cls, reg r46:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r47:V, reg r48:V, reg cumDim:*, reg cumDim1:V, reg c11:L, reg cumDim3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg cumDim4:*, reg cumDim5:V, reg lstats5:*, reg lstats6:V, reg r49:V, reg __1:cls, reg r50:V, reg min:cls, reg r51:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r52:V, reg r53:V, reg cumDim6:*, reg cumDim7:V, reg c12:L, reg cumDim9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg cumDim10:*, reg cumDim11:V, reg lstats7:*, reg lstats8:V, reg r54:V, reg __2:cls, reg r55:V, reg max:cls, reg r56:V, reg lstats9:*, reg lstats10:V, reg c13:L, reg c15:V, reg upper:*, reg upper1:V, reg lstats11:*, reg lstats12:V, reg __3:cls, reg r57:V, reg r58:V, reg c16:L, reg c17:L, reg c18:V, reg lstats13:*, reg lstats14:V, reg lower:*, reg lower1:V, reg __4:cls, reg r59:V, reg r60:V, reg c21:L, reg c22:V, reg c25:L, reg c26:V, reg c28:L, reg warning1:cls, reg r61:V, reg r62:V, reg dimmargin4:*, reg dimmargin5:V, reg c29:L, reg dimmargin7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg dimmargin8:*, reg dimmargin9:V, reg r63:V, reg __5:cls, reg r64:V, reg dimstats2:*, reg dimstats3:V, reg c30:L, reg dimstats5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg dimstats6:*, reg dimstats7:V, reg r65:V, reg __6:cls, reg r66:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r67:V, reg r68:V, reg dimstats8:*, reg dimstats9:V, reg length1:cls, reg r69:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r72:V, reg r73:V, reg r74:V, reg dimmargin10:*, reg dimmargin11:V, reg length2:cls, reg r75:V, reg r76:V, reg c31:L, reg c32:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r77:V, reg c36:L, reg r78:V, reg dimstats10:*, reg dimstats11:V, reg dimmargin12:*, reg dimmargin13:V, reg r79:V, reg any:cls, reg r80:V, reg c37:L, reg c38:V, reg c40:L, reg warning2:cls, reg r81:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r83:V, reg r84:V, reg MARGIN9:*, reg MARGIN10:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r85:V, reg r86:V, reg dims4:*, reg dims5:V, reg r87:I, reg c41:L, reg r89:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg MARGIN11:*, reg MARGIN12:V, reg r90:V, reg __7:cls, reg r91:V, reg c42:cls, reg r92:V, reg FUN3:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg aperm:cls, reg array:cls, reg STATS5:*, reg STATS6:V, reg p2:p(V +), reg dims6:*, reg dims7:V, reg c43:L, reg dims9:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg perm:*, reg perm1:V, reg __8:cls, reg r95:V, reg p3:p(V +), reg r97:V, reg p4:p(V +), reg order:cls, reg perm2:*, reg perm3:V, reg p5:p(V +), reg r100:V, reg p6:p(V +), reg r102:V, reg p7:p(V +), reg ddd1:dots?, reg r104:V |
    mkenv;
    st x = x;
    st MARGIN = MARGIN;
    st STATS = STATS;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L0("-") else L0(FUN);
  L0(FUN_orDefault):
    st FUN = FUN_orDefault;
    check_margin_isMissing = missing.0(check_margin);
    if check_margin_isMissing then L1(TRUE) else L1(check_margin);
  L1(check_margin_orDefault):
    st `check.margin` = check_margin_orDefault;
    st `...` = ddd;
    match_fun = ldf `match.fun`;
    check L45() else D0();
  D0():
    deopt 1 [];
  L45():
    p = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r1 = dyn match_fun(p);
    check L46() else D1();
  D1():
    deopt 3 [r1];
  L46():
    st FUN = r1;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L47() else L48();
  L2(r3):
    st dims = r3;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L47():
    x1 = ld x;
    check L49() else D2();
  L48():
    r2 = dyn base(<sym x>);
    goto L2(r2);
  D2():
    deopt 7 [x1];
  L3(r6):
    c1 = `as.logical`(r6);
    if c1 then L54() else L4();
  L49():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r4 = dyn dim(x2);
    check L50() else D3();
  L51():
    MARGIN1 = ld MARGIN;
    check L53() else D4();
  L52():
    r5 = dyn base1(<sym MARGIN>);
    goto L3(r5);
  D3():
    deopt 10 [r4];
  D4():
    deopt 13 [MARGIN1];
  L4():
    goto L14();
  L14():
    check_margin1 = ld `check.margin`;
    check L83() else D18();
  L50():
    goto L2(r4);
  L53():
    MARGIN2 = force? MARGIN1;
    checkMissing(MARGIN2);
    c = `is.character`(MARGIN2);
    goto L3(c);
  L54():
    sym2 = ldf dimnames;
    base2 = ldf dimnames in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  D18():
    deopt 63 [check_margin1];
  L5(r8):
    st dn = r8;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L55():
    x3 = ld x;
    check L57() else D5();
  L56():
    r7 = dyn base2(<sym x>);
    goto L5(r7);
  L83():
    check_margin2 = force? check_margin1;
    checkMissing(check_margin2);
    c5 = `as.logical`(check_margin2);
    if c5 then L84() else L15();
  D5():
    deopt 18 [x3];
  L6(r11):
    c3 = `as.logical`(r11);
    if c3 then L65() else L8();
  L15():
    goto L41();
  L41():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L182() else L183();
  L57():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r9 = dyn dimnames(x4);
    check L58() else D6();
  L59():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L60():
    r10 = dyn base3(<lang `<-`(dnn, names(dn))>);
    goto L6(r10);
  L84():
    dims = ld dims;
    check L85() else D19();
  D6():
    deopt 21 [r9];
  D19():
    deopt 65 [dims];
  L7(r13):
    st dnn = r13;
    c2 = `==`(r13, NULL);
    goto L6(c2);
  L8():
    goto L9();
  L9():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L42(r84):
    st perm = r84;
    FUN3 = ldf FUN;
    check L193() else D68();
  L58():
    goto L5(r9);
  L61():
    dn = ld dn;
    check L63() else D7();
  L62():
    r12 = dyn base4(<sym dn>);
    goto L7(r12);
  L65():
    stop = ldf stop;
    check L66() else D9();
  L85():
    dims1 = force? dims;
    checkMissing(dims1);
    c6 = `is.object`(dims1);
    if c6 then L86() else L87(dims1);
  L182():
    MARGIN9 = ld MARGIN;
    check L184() else D64();
  L183():
    r83 = dyn base18(<sym MARGIN>, <lang `[`(seq_along(dims), `-`(MARGIN))>);
    goto L42(r83);
  D7():
    deopt 26 [dn];
  D9():
    deopt 33 [];
  D64():
    deopt 212 [MARGIN9];
  D68():
    deopt 226 [];
  L10(r18):
    st MARGIN = r18;
    sym6 = ldf anyNA;
    base6 = ldf anyNA in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  L16(dx1):
    st dimmargin = dx1;
    sym7 = ldf dim;
    base7 = ldf dim in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  L63():
    dn1 = force? dn;
    checkMissing(dn1);
    names = ldf names in base;
    r14 = dyn names(dn1);
    check L64() else D8();
  L66():
    r15 = dyn stop("'x' must have named dimnames");
    check L67() else D10();
  L69():
    MARGIN3 = ld MARGIN;
    check L71() else D11();
  L70():
    r17 = dyn base5(<sym MARGIN>, <sym dnn>);
    goto L10(r17);
  L86():
    dr = tryDispatchBuiltin.1("[", dims1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L88() else L87(dr);
  L87(dims3):
    MARGIN7 = ld MARGIN;
    check L89() else D20();
  L184():
    MARGIN10 = force? MARGIN9;
    checkMissing(MARGIN10);
    sym19 = ldf seq_along;
    base19 = ldf seq_along in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L185() else L186();
  L193():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p7 = prom<V +>{
      aperm = ldf aperm;
      p4 = prom<V +>{
        array = ldf array;
        p2 = prom<V +>{
          STATS5 = ld STATS;
          STATS6 = force? STATS5;
          checkMissing(STATS6);
          return STATS6;
        };
        p3 = prom<V +>{
          dims6 = ld dims;
          dims7 = force? dims6;
          checkMissing(dims7);
          c43 = `is.object`(dims7);
          if c43 then L1() else L2(dims7);
        L0(dx13):
          return dx13;
        L1():
          dr12 = tryDispatchBuiltin.1("[", dims7);
          dc6 = getTryDispatchBuiltinDispatched(dr12);
          if dc6 then L3() else L2(dr12);
        L2(dims9):
          perm = ld perm;
          perm1 = force? perm;
          __8 = ldf `[` in base;
          r95 = dyn __8(dims9, perm1);
          goto L0(r95);
        L3():
          dx12 = getTryDispatchBuiltinValue(dr12);
          goto L0(dx12);
        };
        r97 = dyn array(p2, p3);
        return r97;
      };
      p6 = prom<V +>{
        order = ldf order;
        p5 = prom<V +>{
          perm2 = ld perm;
          perm3 = force? perm2;
          checkMissing(perm3);
          return perm3;
        };
        r100 = dyn order(p5);
        return r100;
      };
      r102 = dyn aperm(p4, p6);
      return r102;
    };
    ddd1 = ld `...`;
    r104 = dyn FUN3[, , `...`](p1, p7, ddd1);
    check L194() else D69();
  D8():
    deopt 29 [r14];
  D10():
    deopt 35 [r15];
  D11():
    deopt 40 [MARGIN3];
  D20():
    deopt 67 [dims3, MARGIN7];
  D69():
    deopt 230 [r104];
  L11(r21):
    c4 = `as.logical`(r21);
    if c4 then L78() else L12();
  L17(r28):
    st dimstats = r28;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L94() else L95();
  L43(r86):
    c41 = `is.object`(r86);
    if c41 then L188() else L189(r86);
  L64():
    goto L7(r14);
  L67():
    goto L9();
  L71():
    MARGIN4 = force? MARGIN3;
    checkMissing(MARGIN4);
    dnn = ld dnn;
    check L72() else D12();
  L74():
    MARGIN5 = ld MARGIN;
    check L76() else D14();
  L75():
    r20 = dyn base6(<sym MARGIN>);
    goto L11(r20);
  L88():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L89():
    MARGIN8 = force? MARGIN7;
    __ = ldf `[` in base;
    r26 = dyn __(dims3, MARGIN8);
    goto L16(r26);
  L90():
    STATS1 = ld STATS;
    check L92() else D21();
  L91():
    r27 = dyn base7(<sym STATS>);
    goto L17(r27);
  L185():
    dims4 = ld dims;
    check L187() else D65();
  L186():
    r85 = dyn base19(<sym dims>);
    goto L43(r85);
  L194():
    popenv;
    return r104;
  D12():
    deopt 42 [dnn];
  D14():
    deopt 51 [MARGIN5];
  D21():
    deopt 73 [STATS1];
  D65():
    deopt 215 [dims4];
  L12():
    goto L13(NULL);
  L13(r24):
    goto L14();
  L18(r31):
    st lstats = r31;
    lstats = ld lstats;
    check L98() else D25();
  L44(dx11):
    c42 = ldf c in base;
    r92 = dyn c42(MARGIN10, dx11);
    check L192() else D67();
  L72():
    dnn1 = force? dnn;
    checkMissing(dnn1);
    match = ldf match in base;
    r19 = dyn match(MARGIN4, dnn1, NA_INT, NULL);
    check L73() else D13();
  L76():
    MARGIN6 = force? MARGIN5;
    checkMissing(MARGIN6);
    anyNA = ldf anyNA in base;
    r22 = dyn anyNA(MARGIN6);
    check L77() else D15();
  L78():
    stop1 = ldf stop;
    check L79() else D16();
  L92():
    STATS2 = force? STATS1;
    checkMissing(STATS2);
    dim1 = ldf dim in base;
    r29 = dyn dim1(STATS2);
    check L93() else D22();
  L94():
    STATS3 = ld STATS;
    check L96() else D23();
  L95():
    r30 = dyn base8(<sym STATS>);
    goto L18(r30);
  L187():
    dims5 = force? dims4;
    checkMissing(dims5);
    r87 = seq_along(dims5);
    goto L43(r87);
  L188():
    dr10 = tryDispatchBuiltin.1("[", r86);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L190() else L189(dr10);
  L189(r89):
    MARGIN11 = ld MARGIN;
    check L191() else D66();
  D13():
    deopt 47 [r19];
  D15():
    deopt 54 [r22];
  D16():
    deopt 56 [];
  D22():
    deopt 76 [r29];
  D23():
    deopt 80 [STATS3];
  D25():
    deopt 85 [lstats];
  D66():
    deopt 218 [r89, MARGIN11];
  D67():
    deopt 223 [r92];
  L73():
    goto L10(r19);
  L77():
    goto L11(r22);
  L79():
    r23 = dyn stop1("not all elements of 'MARGIN' are names of dimensions");
    check L80() else D17();
  L93():
    goto L17(r29);
  L96():
    STATS4 = force? STATS3;
    checkMissing(STATS4);
    length = ldf length in base;
    r32 = dyn length(STATS4);
    check L97() else D24();
  L98():
    lstats1 = force? lstats;
    checkMissing(lstats1);
    sym9 = ldf prod;
    base9 = ldf prod in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L99() else L100();
  L190():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L44(dx10);
  L191():
    MARGIN12 = force? MARGIN11;
    checkMissing(MARGIN12);
    r90 = `-`(<missing>, MARGIN12);
    __7 = ldf `[` in base;
    r91 = dyn __7(r89, r90);
    goto L44(r91);
  L192():
    goto L42(r92);
  D17():
    deopt 58 [r23];
  D24():
    deopt 83 [r32];
  L19(lstats4, r34):
    r36 = `>`(lstats4, r34);
    c7 = `as.logical`(r36);
    if c7 then L103() else L20();
  L80():
    goto L13(r23);
  L97():
    goto L18(r32);
  L99():
    dimmargin = ld dimmargin;
    check L101() else D26();
  L100():
    r33 = dyn base9(<sym dimmargin>);
    goto L19(lstats1, r33);
  D26():
    deopt 88 [lstats1, dimmargin];
  L20():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L107() else L108();
  L21(r38):
    goto L41();
  L101():
    dimmargin1 = force? dimmargin;
    checkMissing(dimmargin1);
    prod = ldf prod in base;
    r35 = dyn prod(dimmargin1);
    check L102() else D27();
  L103():
    warning = ldf warning;
    check L104() else D28();
  D27():
    deopt 91 [lstats1, r35];
  D28():
    deopt 94 [];
  L22(r40):
    c9 = `as.logical`(r40);
    if c9 then L110() else L23();
  L102():
    goto L19(lstats1, r35);
  L104():
    r37 = dyn warning("STATS is longer than the extent of 'dim(x)[MARGIN]'");
    check L105() else D29();
  L107():
    dimstats = ld dimstats;
    check L109() else D30();
  L108():
    r39 = dyn base10(<sym dimstats>);
    goto L22(r39);
  D29():
    deopt 96 [r37];
  D30():
    deopt 98 [dimstats];
  L23():
    dimmargin4 = ld dimmargin;
    check L152() else D51();
  L105():
    goto L21(r37);
  L109():
    dimstats1 = force? dimstats;
    checkMissing(dimstats1);
    c8 = `==`(dimstats1, NULL);
    goto L22(c8);
  L110():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L111() else L112();
  D51():
    deopt 165 [dimmargin4];
  L24(r42):
    st cumDim = r42;
    sym13 = ldf min;
    base13 = ldf min in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L118() else L119();
  L111():
    sym12 = ldf cumprod;
    base12 = ldf cumprod in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L113() else L114();
  L112():
    r41 = dyn base11(1, <lang cumprod(dimmargin)>);
    goto L24(r41);
  L152():
    dimmargin5 = force? dimmargin4;
    checkMissing(dimmargin5);
    c29 = `is.object`(dimmargin5);
    if c29 then L153() else L154(dimmargin5);
  L25(r44):
    c10 = ldf c in base;
    r46 = dyn c10(1, r44);
    check L117() else D33();
  L26(r48):
    st upper = r48;
    sym14 = ldf max;
    base14 = ldf max in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L127() else L128();
  L34(dx7):
    st dimmargin = dx7;
    dimstats2 = ld dimstats;
    check L157() else D53();
  L113():
    dimmargin2 = ld dimmargin;
    check L115() else D31();
  L114():
    r43 = dyn base12(<sym dimmargin>);
    goto L25(r43);
  L118():
    cumDim = ld cumDim;
    check L120() else D34();
  L119():
    r47 = dyn base13(<lang `[`(cumDim, `>=`(cumDim, lstats))>);
    goto L26(r47);
  L153():
    dr6 = tryDispatchBuiltin.1("[", dimmargin5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L155() else L154(dr6);
  L154(dimmargin7):
    dimmargin8 = ld dimmargin;
    check L156() else D52();
  D31():
    deopt 106 [dimmargin2];
  D33():
    deopt 111 [r46];
  D34():
    deopt 115 [cumDim];
  D52():
    deopt 167 [dimmargin7, dimmargin8];
  D53():
    deopt 173 [dimstats2];
  L28(r53):
    st lower = r53;
    lstats9 = ld lstats;
    check L136() else D42();
  L115():
    dimmargin3 = force? dimmargin2;
    checkMissing(dimmargin3);
    cumprod = ldf cumprod in base;
    r45 = dyn cumprod(dimmargin3);
    check L116() else D32();
  L117():
    goto L24(r46);
  L120():
    cumDim1 = force? cumDim;
    checkMissing(cumDim1);
    c11 = `is.object`(cumDim1);
    if c11 then L121() else L122(cumDim1);
  L127():
    cumDim6 = ld cumDim;
    check L129() else D38();
  L128():
    r52 = dyn base14(<lang `[`(cumDim, `<=`(cumDim, lstats))>);
    goto L28(r52);
  L155():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L34(dx6);
  L156():
    dimmargin9 = force? dimmargin8;
    checkMissing(dimmargin9);
    r63 = `>`(dimmargin9, 1);
    __5 = ldf `[` in base;
    r64 = dyn __5(dimmargin7, r63);
    goto L34(r64);
  L157():
    dimstats3 = force? dimstats2;
    checkMissing(dimstats3);
    c30 = `is.object`(dimstats3);
    if c30 then L158() else L159(dimstats3);
  D32():
    deopt 109 [r45];
  D38():
    deopt 127 [cumDim6];
  D42():
    deopt 137 [lstats9];
  L27(dx3):
    min = ldf min in base;
    r51 = dyn min(dx3);
    check L126() else D37();
  L35(dx9):
    st dimstats = dx9;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L162() else L163();
  L116():
    goto L25(r45);
  L121():
    dr2 = tryDispatchBuiltin.1("[", cumDim1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L123() else L122(dr2);
  L122(cumDim3):
    cumDim4 = ld cumDim;
    check L124() else D35();
  L129():
    cumDim7 = force? cumDim6;
    checkMissing(cumDim7);
    c12 = `is.object`(cumDim7);
    if c12 then L130() else L131(cumDim7);
  L136():
    lstats10 = force? lstats9;
    checkMissing(lstats10);
    c13 = `as.logical`(lstats10);
    if c13 then L137() else L30(c13);
  L158():
    dr8 = tryDispatchBuiltin.1("[", dimstats3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L160() else L159(dr8);
  L159(dimstats5):
    dimstats6 = ld dimstats;
    check L161() else D54();
  D35():
    deopt 117 [cumDim3, cumDim4];
  D37():
    deopt 123 [r51];
  D54():
    deopt 175 [dimstats5, dimstats6];
  L29(dx5):
    max = ldf max in base;
    r56 = dyn max(dx5);
    check L135() else D41();
  L30(c15):
    c28 = `as.logical`(c15);
    if c28 then L147() else L32();
  L36(r68):
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L166() else L167();
  L123():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L27(dx2);
  L124():
    cumDim5 = force? cumDim4;
    checkMissing(cumDim5);
    lstats5 = ld lstats;
    check L125() else D36();
  L126():
    goto L26(r51);
  L130():
    dr4 = tryDispatchBuiltin.1("[", cumDim7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L132() else L131(dr4);
  L131(cumDim9):
    cumDim10 = ld cumDim;
    check L133() else D39();
  L137():
    upper = ld upper;
    check L138() else D43();
  L160():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L35(dx8);
  L161():
    dimstats7 = force? dimstats6;
    checkMissing(dimstats7);
    r65 = `>`(dimstats7, 1);
    __6 = ldf `[` in base;
    r66 = dyn __6(dimstats5, r65);
    goto L35(r66);
  L162():
    dimstats8 = ld dimstats;
    check L164() else D55();
  L163():
    r67 = dyn base15(<sym dimstats>);
    goto L36(r67);
  D36():
    deopt 118 [cumDim3, cumDim5, lstats5];
  D39():
    deopt 129 [cumDim9, cumDim10];
  D41():
    deopt 135 [r56];
  D43():
    deopt 140 [c13, upper];
  D55():
    deopt 183 [dimstats8];
  L32():
    goto L33(NULL);
  L33(r62):
    goto L21(r62);
  L37(r73, r74):
    r76 = `!=`(r73, r74);
    c31 = `as.logical`(r76);
    if c31 then L38(c31) else L170();
  L125():
    lstats6 = force? lstats5;
    checkMissing(lstats6);
    r49 = `>=`(cumDim5, lstats6);
    __1 = ldf `[` in base;
    r50 = dyn __1(cumDim3, r49);
    goto L27(r50);
  L132():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L29(dx4);
  L133():
    cumDim11 = force? cumDim10;
    checkMissing(cumDim11);
    lstats7 = ld lstats;
    check L134() else D40();
  L135():
    goto L28(r56);
  L138():
    upper1 = force? upper;
    checkMissing(upper1);
    lstats11 = ld lstats;
    check L139() else D44();
  L147():
    warning1 = ldf warning;
    check L148() else D49();
  L164():
    dimstats9 = force? dimstats8;
    checkMissing(dimstats9);
    length1 = ldf length in base;
    r69 = dyn length1(dimstats9);
    check L165() else D56();
  L166():
    dimmargin10 = ld dimmargin;
    check L168() else D57();
  L167():
    r72 = dyn base16(<sym dimmargin>);
    goto L37(r68, r72);
  D40():
    deopt 130 [cumDim9, cumDim11, lstats7];
  D44():
    deopt 142 [c13, lstats11];
  D49():
    deopt 160 [];
  D56():
    deopt 186 [r69];
  D57():
    deopt 188 [r68, dimmargin10];
  L38(c32):
    c40 = `as.logical`(c32);
    if c40 then L177() else L40();
  L134():
    lstats8 = force? lstats7;
    checkMissing(lstats8);
    r54 = `<=`(cumDim11, lstats8);
    __2 = ldf `[` in base;
    r55 = dyn __2(cumDim9, r54);
    goto L29(r55);
  L139():
    lstats12 = force? lstats11;
    checkMissing(lstats12);
    __3 = ldf `%%` in base;
    r57 = dyn __3(upper1, lstats12);
    check L140() else D45();
  L148():
    r61 = dyn warning1("STATS does not recycle exactly across MARGIN");
    check L149() else D50();
  L165():
    goto L36(r69);
  L168():
    dimmargin11 = force? dimmargin10;
    checkMissing(dimmargin11);
    length2 = ldf length in base;
    r75 = dyn length2(dimmargin11);
    check L169() else D58();
  L170():
    sym17 = ldf any;
    base17 = ldf any in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L171() else L172();
  D45():
    deopt 145 [c13, r57];
  D50():
    deopt 162 [r61];
  D58():
    deopt 191 [r68, r75];
  L39(c36, r78):
    c37 = `as.logical`(r78);
    c38 = `||`(c36, c37);
    goto L38(c38);
  L40():
    goto L21(NULL);
  L140():
    r58 = `!=`(r57, 0);
    c16 = `as.logical`(r58);
    if c16 then L31(c13, c16) else L141();
  L149():
    goto L33(r61);
  L169():
    goto L37(r68, r75);
  L171():
    dimstats10 = ld dimstats;
    check L173() else D59();
  L172():
    r77 = dyn base17(<lang `!=`(dimstats, dimmargin)>);
    goto L39(c31, r77);
  L177():
    warning2 = ldf warning;
    check L178() else D62();
  D59():
    deopt 195 [c31, dimstats10];
  D62():
    deopt 203 [];
  L31(c17, c18):
    c25 = `as.logical`(c18);
    c26 = `&&`(c17, c25);
    goto L30(c26);
  L141():
    lstats13 = ld lstats;
    check L142() else D46();
  L173():
    dimstats11 = force? dimstats10;
    checkMissing(dimstats11);
    dimmargin12 = ld dimmargin;
    check L174() else D60();
  L178():
    r81 = dyn warning2("length(STATS) or dim(STATS) do not match dim(x)[MARGIN]");
    check L179() else D63();
  D46():
    deopt 149 [c13, c16, lstats13];
  D60():
    deopt 196 [c31, dimstats11, dimmargin12];
  D63():
    deopt 205 [r81];
  L142():
    lstats14 = force? lstats13;
    checkMissing(lstats14);
    lower = ld lower;
    check L143() else D47();
  L174():
    dimmargin13 = force? dimmargin12;
    checkMissing(dimmargin13);
    r79 = `!=`(dimstats11, dimmargin13);
    any = ldf any in base;
    r80 = dyn any(r79);
    check L175() else D61();
  L179():
    goto L21(r81);
  D47():
    deopt 151 [c13, c16, lower];
  D61():
    deopt 200 [c31, r80];
  L143():
    lower1 = force? lower;
    checkMissing(lower1);
    __4 = ldf `%%` in base;
    r59 = dyn __4(lstats14, lower1);
    check L144() else D48();
  L175():
    goto L39(c31, r80);
  D48():
    deopt 154 [c13, c16, r59];
  L144():
    r60 = `!=`(r59, 0);
    c21 = `as.logical`(r60);
    c22 = `||`(c16, c21);
    goto L31(c13, c22);
  }
}