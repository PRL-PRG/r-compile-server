fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg plot:cls, reg stl:cls, reg nottem:*, reg nottem1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg plot1:cls, reg stl1:cls, reg nottem2:*, reg nottem3:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg plot2:cls, reg stl2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg co2:*, reg co3:V, reg r15:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg summary:cls, reg stllc:*, reg stllc1:V, reg p7:p(V +), reg r21:V, reg plot3:cls, reg stl3:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg co4:*, reg co5:V, reg r24:V, reg p8:p(V +), reg r26:V, reg p9:p(V +), reg r28:V, reg stl4:cls, reg mdeaths:*, reg mdeaths1:V, reg p10:p(V +), reg r30:V, reg summary1:cls, reg stl5:cls, reg mdeaths2:*, reg mdeaths3:V, reg p11:p(V +), reg r32:V, reg p12:p(V +), reg r34:V, reg par:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg c:cls, reg r37:V, reg p13:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg c1:cls, reg r41:V, reg p14:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg c2:cls, reg r45:V, reg p15:p(V +), reg r47:V, reg plot4:cls, reg stmd:*, reg stmd1:V, reg p16:p(V +), reg r49:V, reg plot5:cls, reg stmR:*, reg stmR1:V, reg p17:p(V +), reg r51:V, reg which:cls, reg stmR2:*, reg stmR3:V, reg c3:L, reg stmR5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r52:V, reg r53:V, reg p18:p(V +), reg r55:V, reg stmR6:*, reg stmR7:V, reg c4:L, reg stmR9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r56:V, reg points:cls, reg time:cls, reg sts:*, reg sts1:V, reg p19:p(V +), reg r58:V, reg c5:L, reg r60:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg iO:*, reg iO1:V, reg __:cls, reg r61:V, reg p20:p(V +), reg sts2:*, reg sts3:V, reg c6:L, reg r64:R, reg dr6:V, reg dc3:L, reg dx6:V, reg r66:R, reg dx7:V, reg __1:cls, reg r67:V, reg c7:L, reg r69:R, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg r71:R, reg dx11:V, reg iO2:*, reg iO3:V, reg __2:cls, reg r72:V, reg r73:V, reg p21:p(V +), reg r75:V, reg par1:cls, reg op:*, reg op1:V, reg p22:p(V +), reg r77:V |
    mkenv;
    r = clos inner3095641543;
    st stl = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    plot = ldf plot;
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
    p2 = prom<V +>{
      stl = ldf stl;
      p1 = prom<V +>{
        nottem = ld nottem;
        nottem1 = force? nottem;
        checkMissing(nottem1);
        return nottem1;
      };
      r6 = dyn stl(p1, "per");
      return r6;
    };
    r8 = dyn plot(p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r8];
  L4():
    goto L0();
  L6():
    plot1 = ldf plot;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p4 = prom<V +>{
      stl1 = ldf stl;
      p3 = prom<V +>{
        nottem2 = ld nottem;
        nottem3 = force? nottem2;
        checkMissing(nottem3);
        return nottem3;
      };
      r10 = dyn stl1[, `s.window`, `t.window`, `t.jump`](p3, 7.0, 50.0, 1.0);
      return r10;
    };
    r12 = dyn plot1(p4);
    check L8() else D5();
  D5():
    deopt 15 [r12];
  L8():
    plot2 = ldf plot;
    check L9() else D6();
  D6():
    deopt 17 [];
  L9():
    p6 = prom<V +>{
      stl2 = ldf stl;
      p5 = prom<V +>{
        sym1 = ldf log;
        base1 = ldf log in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r14):
        return r14;
      L1():
        co2 = ld co2;
        co3 = force? co2;
        checkMissing(co3);
        r15 = log(co3, 2.718281828459045);
        goto L0(r15);
      L2():
        r13 = dyn base1(<sym co2>);
        goto L0(r13);
      };
      r17 = dyn stl2[, `s.window`](p5, 21.0);
      st stllc = r17;
      invisible.0();
      return r17;
    };
    r19 = dyn plot2(p6);
    check L10() else D7();
  D7():
    deopt 19 [r19];
  L10():
    summary = ldf summary;
    check L11() else D8();
  D8():
    deopt 21 [];
  L11():
    p7 = prom<V +>{
      stllc = ld stllc;
      stllc1 = force? stllc;
      checkMissing(stllc1);
      return stllc1;
    };
    r21 = dyn summary(p7);
    check L12() else D9();
  D9():
    deopt 23 [r21];
  L12():
    plot3 = ldf plot;
    check L13() else D10();
  D10():
    deopt 25 [];
  L13():
    p9 = prom<V +>{
      stl3 = ldf stl;
      p8 = prom<V +>{
        sym2 = ldf log;
        base2 = ldf log in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r23):
        return r23;
      L1():
        co4 = ld co2;
        co5 = force? co4;
        checkMissing(co5);
        r24 = log(co5, 2.718281828459045);
        goto L0(r24);
      L2():
        r22 = dyn base2(<sym co2>);
        goto L0(r22);
      };
      r26 = dyn stl3[, `s.window`, `t.window`](p8, "per", 1000.0);
      return r26;
    };
    r28 = dyn plot3(p9);
    check L14() else D11();
  D11():
    deopt 27 [r28];
  L14():
    stl4 = ldf stl;
    check L15() else D12();
  D12():
    deopt 29 [];
  L15():
    p10 = prom<V +>{
      mdeaths = ld mdeaths;
      mdeaths1 = force? mdeaths;
      checkMissing(mdeaths1);
      return mdeaths1;
    };
    r30 = dyn stl4[, `s.window`](p10, "per");
    check L16() else D13();
  D13():
    deopt 33 [r30];
  L16():
    st stmd = r30;
    summary1 = ldf summary;
    check L17() else D14();
  D14():
    deopt 36 [];
  L17():
    p12 = prom<V +>{
      stl5 = ldf stl;
      p11 = prom<V +>{
        mdeaths2 = ld mdeaths;
        mdeaths3 = force? mdeaths2;
        checkMissing(mdeaths3);
        return mdeaths3;
      };
      r32 = dyn stl5[, `s.window`, robust](p11, "per", TRUE);
      st stmR = r32;
      invisible.0();
      return r32;
    };
    r34 = dyn summary1(p12);
    check L18() else D15();
  D15():
    deopt 38 [r34];
  L18():
    par = ldf par;
    check L19() else D16();
  D16():
    deopt 40 [];
  L19():
    p13 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      c = ldf c in base;
      r37 = dyn c(0.0, 4.0, 0.0, 3.0);
      goto L0(r37);
    L2():
      r35 = dyn base3(0.0, 4.0, 0.0, 3.0);
      goto L0(r35);
    };
    p14 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      c1 = ldf c in base;
      r41 = dyn c1(5.0, 0.0, 4.0, 0.0);
      goto L0(r41);
    L2():
      r39 = dyn base4(5.0, 0.0, 4.0, 0.0);
      goto L0(r39);
    };
    p15 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      c2 = ldf c in base;
      r45 = dyn c2(4.0, 2.0);
      goto L0(r45);
    L2():
      r43 = dyn base5(4.0, 2.0);
      goto L0(r43);
    };
    r47 = dyn par[mar, oma, mfcol](p13, p14, p15);
    check L20() else D17();
  D17():
    deopt 47 [r47];
  L20():
    st op = r47;
    plot4 = ldf plot;
    check L21() else D18();
  D18():
    deopt 50 [];
  L21():
    p16 = prom<V +>{
      stmd = ld stmd;
      stmd1 = force? stmd;
      checkMissing(stmd1);
      return stmd1;
    };
    r49 = dyn plot4[, `set.pars`, labels, main](p16, NULL, NULL, "stl(mdeaths, s.w = \"per\",  robust = FALSE / TRUE )");
    check L22() else D19();
  D19():
    deopt 58 [r49];
  L22():
    plot5 = ldf plot;
    check L23() else D20();
  D20():
    deopt 60 [];
  L23():
    p17 = prom<V +>{
      stmR = ld stmR;
      stmR1 = force? stmR;
      checkMissing(stmR1);
      return stmR1;
    };
    r51 = dyn plot5[, `set.pars`](p17, NULL);
    check L24() else D21();
  D21():
    deopt 64 [r51];
  L24():
    which = ldf which;
    check L25() else D22();
  D22():
    deopt 66 [];
  L25():
    p18 = prom<V +>{
      stmR2 = ld stmR;
      stmR3 = force? stmR2;
      checkMissing(stmR3);
      c3 = `is.object`(stmR3);
      if c3 then L1() else L2(stmR3);
    L0(dx1):
      r53 = `<`(dx1, 1.0E-8);
      return r53;
    L1():
      dr = tryDispatchBuiltin.1("$", stmR3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(stmR5):
      r52 = `$`(stmR5, <sym weights>);
      goto L0(r52);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r55 = dyn which(p18);
    check L26() else D23();
  D23():
    deopt 68 [r55];
  L26():
    st iO = r55;
    stmR6 = ld stmR;
    check L27() else D24();
  D24():
    deopt 70 [stmR6];
  L27():
    stmR7 = force? stmR6;
    checkMissing(stmR7);
    c4 = `is.object`(stmR7);
    if c4 then L29() else L30(stmR7);
  L28(dx3):
    st sts = dx3;
    points = ldf points;
    check L32() else D25();
  L29():
    dr2 = tryDispatchBuiltin.1("$", stmR7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dr2);
  L30(stmR9):
    r56 = `$`(stmR9, <sym time.series>);
    goto L28(r56);
  D25():
    deopt 75 [];
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx2);
  L32():
    p20 = prom<V +>{
      time = ldf time;
      p19 = prom<V +>{
        sts = ld sts;
        sts1 = force? sts;
        checkMissing(sts1);
        return sts1;
      };
      r58 = dyn time(p19);
      c5 = `is.object`(r58);
      if c5 then L1() else L2(r58);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", r58);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(r60):
      iO = ld iO;
      iO1 = force? iO;
      __ = ldf `[` in base;
      r61 = dyn __(r60, iO1);
      goto L0(r61);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p21 = prom<V +>{
      sts2 = ld sts;
      sts3 = force? sts2;
      checkMissing(sts3);
      c6 = `is.object`(sts3);
      if c6 then L2() else L3(0.8);
    L0(r66, dx7):
      c7 = `is.object`(dx7);
      if c7 then L5() else L6(r66, dx7);
    L2():
      dr6 = tryDispatchBuiltin.1("[", sts3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(0.8);
    L3(r64):
      __1 = ldf `[` in base;
      r67 = dyn __1(sts3, <missing>, "remainder");
      goto L0(r64, r67);
    L1(r71, dx11):
      r73 = `*`(r71, dx11);
      return r73;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(0.8, dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(r66, dr8);
    L6(r69, dx9):
      iO2 = ld iO;
      iO3 = force? iO2;
      __2 = ldf `[` in base;
      r72 = dyn __2(dx9, iO3);
      goto L1(r69, r72);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L1(r66, dx10);
    };
    r75 = dyn points[, , pch, col](p20, p21, 4.0, "red");
    check L33() else D26();
  D26():
    deopt 82 [r75];
  L33():
    par1 = ldf par;
    check L34() else D27();
  D27():
    deopt 84 [];
  L34():
    p22 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r77 = dyn par1(p22);
    check L35() else D28();
  D28():
    deopt 86 [r77];
  L35():
    popenv;
    return r77;
  }
}
fun inner3095641543(x, `s.window`, `s.degree`, `t.window`, `t.degree`, `l.window`, `l.degree`, `s.jump`, `t.jump`, `l.jump`, robust, inner, outer, `na.action`) {
  (reg x:*, reg s_window:*, reg s_degree:*, reg t_window:*, reg t_degree:*, reg l_window:*, reg l_degree:*, reg s_jump:*, reg t_jump:*, reg l_jump:*, reg robust:*, reg inner:*, reg outer:*, reg na_action:*) -+> V { var x:*, var `s.window`:*, var `s.degree`:*, reg s_degree_isMissing:L, reg s_degree_orDefault:*, var `t.window`:*, reg t_window_isMissing:L, reg t_window_orDefault:*, var `t.degree`:*, reg t_degree_isMissing:L, reg t_degree_orDefault:*, var `l.window`:*, reg l_window_isMissing:L, reg l_window_orDefault:*, reg nextodd:cls, reg period:*, reg period1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `l.degree`:*, reg l_degree_isMissing:L, reg l_degree_orDefault:*, reg t_degree1:*, reg t_degree2:V, reg p2:p(V +), var `s.jump`:*, reg s_jump_isMissing:L, reg s_jump_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg s_window1:*, reg s_window2:V, reg r6:V, reg r7:V, reg p3:p(V +), var `t.jump`:*, reg t_jump_isMissing:L, reg t_jump_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg t_window1:*, reg t_window2:V, reg r11:V, reg r12:V, reg p4:p(V +), var `l.jump`:*, reg l_jump_isMissing:L, reg l_jump_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg l_window1:*, reg l_window2:V, reg r16:V, reg r17:V, reg p5:p(V +), var robust:*, reg robust_isMissing:L, reg robust_orDefault:*, var inner:*, reg inner_isMissing:L, reg inner_orDefault:*, reg robust1:*, reg robust2:V, reg c:L, reg p6:p(V +), var outer:*, reg outer_isMissing:L, reg outer_orDefault:*, reg robust3:*, reg robust4:V, reg c1:L, reg p7:p(V +), var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_fail:*, reg na_fail1:V, reg p8:p(V +), reg r22:cls, reg r23:cls, reg na_action1:cls, reg as_ts:cls, reg x1:*, reg x2:V, reg p9:p(V +), reg r25:V, reg p10:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg x3:*, reg x4:V, reg is_matrix:cls, reg r30:V, reg c2:L, reg stop:cls, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg x5:*, reg x6:V, reg length:cls, reg r37:V, reg as_integer:cls, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg n:*, reg n1:V, reg is_na:cls, reg r41:V, reg c3:L, reg stop1:cls, reg r42:V, reg frequency:cls, reg x7:*, reg x8:V, reg p11:p(V +), reg r45:V, reg period2:*, reg period3:V, reg r46:V, reg c4:L, reg c5:V, reg n2:*, reg n3:V, reg period4:*, reg period5:V, reg r47:V, reg r48:V, reg c7:L, reg c8:V, reg c10:L, reg stop2:cls, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg s_window3:*, reg s_window4:V, reg c11:L, reg c12:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg pmatch:cls, reg s_window5:*, reg s_window6:V, reg p12:p(V +), reg r56:V, reg is_na1:cls, reg r57:V, reg c13:L, reg stop3:cls, reg r58:V, reg r59:V, reg n4:*, reg n5:V, reg r60:V, reg r61:V, reg deg_check:cls, reg s_degree1:*, reg s_degree2:V, reg p13:p(V +), reg r64:V, reg deg_check1:cls, reg t_degree3:*, reg t_degree4:V, reg p14:p(V +), reg r66:V, reg deg_check2:cls, reg l_degree1:*, reg l_degree2:V, reg p15:p(V +), reg r68:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r69:V, reg r70:V, reg t_window3:*, reg t_window4:V, reg c14:V, reg c15:L, reg nextodd1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:V, reg period6:*, reg period7:V, reg r73:V, reg s_window7:*, reg s_window8:V, reg r74:V, reg r75:V, reg r76:V, reg r77:V, reg p16:p(V +), reg r79:V, reg l:*, reg storage_mode__:cls, reg r81:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r82:V, reg r83:V, reg C_stl:*, reg C_stl1:V, reg x9:*, reg x10:V, reg n6:*, reg n7:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r84:V, reg r85:V, reg period8:*, reg period9:V, reg as_integer1:cls, reg r86:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r87:V, reg r88:V, reg s_window9:*, reg s_window10:V, reg as_integer2:cls, reg r89:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg r91:V, reg t_window5:*, reg t_window6:V, reg as_integer3:cls, reg r92:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r93:V, reg r94:V, reg l_window3:*, reg l_window4:V, reg as_integer4:cls, reg r95:V, reg s_degree3:*, reg s_degree4:V, reg t_degree5:*, reg t_degree6:V, reg l_degree3:*, reg l_degree4:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r96:V, reg r97:V, reg s_jump1:*, reg s_jump2:V, reg as_integer5:cls, reg r98:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r99:V, reg r100:V, reg t_jump1:*, reg t_jump2:V, reg as_integer6:cls, reg r101:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r102:V, reg r103:V, reg l_jump1:*, reg l_jump2:V, reg as_integer7:cls, reg r104:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r105:V, reg r106:V, reg inner1:*, reg inner2:V, reg as_integer8:cls, reg r107:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r108:V, reg r109:V, reg outer1:*, reg outer2:V, reg as_integer9:cls, reg r110:V, reg double:cls, reg n8:*, reg n9:V, reg p17:p(V +), reg r112:V, reg double1:cls, reg n10:*, reg n11:V, reg p18:p(V +), reg r114:V, reg double2:cls, reg n12:*, reg n13:V, reg p19:p(V +), reg r116:V, reg double3:cls, reg n14:*, reg n15:V, reg period10:*, reg period11:V, reg r117:V, reg r118:V, reg r119:V, reg p20:p(V +), reg r121:V, reg _Fortran:cls, reg r122:V, reg periodic:*, reg periodic1:V, reg c16:L, reg cycle:cls, reg x11:*, reg x12:V, reg p21:p(V +), reg r124:V, reg tapply:cls, reg z:*, reg z1:V, reg c17:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r125:V, reg p22:p(V +), reg which_cycle:*, reg which_cycle1:V, reg p23:p(V +), reg mean:*, reg mean1:V, reg p24:p(V +), reg r129:V, reg c18:L, reg r131:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg which_cycle2:*, reg which_cycle3:V, reg __:cls, reg r132:V, reg l1:*, reg c19:L, reg dx5:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg r133:V, reg as_vector:cls, reg x13:*, reg x14:V, reg p25:p(V +), reg r135:V, reg z4:*, reg z5:V, reg c20:L, reg r137:V, reg z7:V, reg dr6:V, reg dc3:L, reg dx11:V, reg r139:V, reg dx12:V, reg r140:V, reg r141:V, reg z8:*, reg z9:V, reg c21:L, reg r143:V, reg z11:V, reg dr8:V, reg dc4:L, reg dx13:V, reg r145:V, reg dx14:V, reg r146:V, reg r147:V, reg cbind:cls, reg z12:*, reg z13:V, reg c22:L, reg z15:V, reg dr10:V, reg dc5:L, reg dx15:V, reg dx16:V, reg r148:V, reg p26:p(V +), reg z16:*, reg z17:V, reg c23:L, reg z19:V, reg dr12:V, reg dc6:L, reg dx17:V, reg dx18:V, reg r150:V, reg p27:p(V +), reg remainder:*, reg remainder1:V, reg p28:p(V +), reg r153:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r154:V, reg r155:V, reg ts:cls, reg y:*, reg y1:V, reg p29:p(V +), reg start:cls, reg x15:*, reg x16:V, reg p30:p(V +), reg r158:V, reg p31:p(V +), reg period12:*, reg period13:V, reg p32:p(V +), reg r161:V, reg z20:*, reg z21:V, reg c24:L, reg z23:V, reg dr14:V, reg dc7:L, reg dx19:V, reg dx20:V, reg r162:V, reg match_call:cls, reg r163:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r164:V, reg r165:V, reg s_window11:*, reg s_window12:V, reg t_window7:*, reg t_window8:V, reg l_window5:*, reg l_window6:V, reg c25:cls, reg r166:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r167:V, reg r168:V, reg s_degree5:*, reg s_degree6:V, reg t_degree7:*, reg t_degree8:V, reg l_degree5:*, reg l_degree6:V, reg c26:cls, reg r169:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r170:V, reg r171:V, reg s_jump3:*, reg s_jump4:V, reg t_jump3:*, reg t_jump4:V, reg l_jump3:*, reg l_jump4:V, reg c27:cls, reg r172:V, reg z24:*, reg z25:V, reg c28:L, reg z27:V, reg dr16:V, reg dc8:L, reg dx21:V, reg dx22:V, reg r173:V, reg z28:*, reg z29:V, reg c29:L, reg z31:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg r174:V, reg list:cls, reg r175:V, reg l4:*, reg class__:cls, reg r176:V, reg res:*, reg res1:V |
    mkenv;
    st x = x;
    st `s.window` = s_window;
    s_degree_isMissing = missing.0(s_degree);
    if s_degree_isMissing then L0(0.0) else L0(s_degree);
  L0(s_degree_orDefault):
    st `s.degree` = s_degree_orDefault;
    t_window_isMissing = missing.0(t_window);
    if t_window_isMissing then L1(NULL) else L1(t_window);
  L1(t_window_orDefault):
    st `t.window` = t_window_orDefault;
    t_degree_isMissing = missing.0(t_degree);
    if t_degree_isMissing then L2(1.0) else L2(t_degree);
  L2(t_degree_orDefault):
    st `t.degree` = t_degree_orDefault;
    l_window_isMissing = missing.0(l_window);
    if l_window_isMissing then L3() else L4(l_window);
  L3():
    p1 = prom<V +>{
      nextodd = ldf nextodd;
      p = prom<V +>{
        period = ld period;
        period1 = force? period;
        checkMissing(period1);
        return period1;
      };
      r1 = dyn nextodd(p);
      return r1;
    };
    goto L4(p1);
  L4(l_window_orDefault):
    st `l.window` = l_window_orDefault;
    l_degree_isMissing = missing.0(l_degree);
    if l_degree_isMissing then L5() else L6(l_degree);
  L5():
    p2 = prom<V +>{
      t_degree1 = ld `t.degree`;
      t_degree2 = force? t_degree1;
      checkMissing(t_degree2);
      return t_degree2;
    };
    goto L6(p2);
  L6(l_degree_orDefault):
    st `l.degree` = l_degree_orDefault;
    s_jump_isMissing = missing.0(s_jump);
    if s_jump_isMissing then L7() else L8(s_jump);
  L7():
    p3 = prom<V +>{
      sym = ldf ceiling;
      base = ldf ceiling in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      s_window1 = ld `s.window`;
      s_window2 = force? s_window1;
      checkMissing(s_window2);
      r6 = `/`(s_window2, 10.0);
      r7 = ceiling(r6);
      goto L0(r7);
    L2():
      r4 = dyn base(<lang `/`(s.window, 10.0)>);
      goto L0(r4);
    };
    goto L8(p3);
  L8(s_jump_orDefault):
    st `s.jump` = s_jump_orDefault;
    t_jump_isMissing = missing.0(t_jump);
    if t_jump_isMissing then L9() else L10(t_jump);
  L9():
    p4 = prom<V +>{
      sym1 = ldf ceiling;
      base1 = ldf ceiling in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      t_window1 = ld `t.window`;
      t_window2 = force? t_window1;
      checkMissing(t_window2);
      r11 = `/`(t_window2, 10.0);
      r12 = ceiling(r11);
      goto L0(r12);
    L2():
      r9 = dyn base1(<lang `/`(t.window, 10.0)>);
      goto L0(r9);
    };
    goto L10(p4);
  L10(t_jump_orDefault):
    st `t.jump` = t_jump_orDefault;
    l_jump_isMissing = missing.0(l_jump);
    if l_jump_isMissing then L11() else L12(l_jump);
  L11():
    p5 = prom<V +>{
      sym2 = ldf ceiling;
      base2 = ldf ceiling in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      l_window1 = ld `l.window`;
      l_window2 = force? l_window1;
      checkMissing(l_window2);
      r16 = `/`(l_window2, 10.0);
      r17 = ceiling(r16);
      goto L0(r17);
    L2():
      r14 = dyn base2(<lang `/`(l.window, 10.0)>);
      goto L0(r14);
    };
    goto L12(p5);
  L12(l_jump_orDefault):
    st `l.jump` = l_jump_orDefault;
    robust_isMissing = missing.0(robust);
    if robust_isMissing then L13(FALSE) else L13(robust);
  L13(robust_orDefault):
    st robust = robust_orDefault;
    inner_isMissing = missing.0(inner);
    if inner_isMissing then L14() else L15(inner);
  L14():
    p6 = prom<V +>{
      robust1 = ld robust;
      robust2 = force? robust1;
      checkMissing(robust2);
      c = `as.logical`(robust2);
      if c then L1() else L0();
    L0():
      return 2.0;
    L1():
      return 1.0;
    };
    goto L15(p6);
  L15(inner_orDefault):
    st inner = inner_orDefault;
    outer_isMissing = missing.0(outer);
    if outer_isMissing then L16() else L17(outer);
  L16():
    p7 = prom<V +>{
      robust3 = ld robust;
      robust4 = force? robust3;
      checkMissing(robust4);
      c1 = `as.logical`(robust4);
      if c1 then L1() else L0();
    L0():
      return 0.0;
    L1():
      return 15.0;
    };
    goto L17(p7);
  L17(outer_orDefault):
    st outer = outer_orDefault;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L18() else L19(na_action);
  L18():
    p8 = prom<V +>{
      na_fail = ld `na.fail`;
      na_fail1 = force? na_fail;
      checkMissing(na_fail1);
      return na_fail1;
    };
    goto L19(p8);
  L19(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    r22 = clos inner2501545716;
    st nextodd = r22;
    r23 = clos inner3288862338;
    st `deg.check` = r23;
    na_action1 = ldf `na.action`;
    check L57() else D0();
  D0():
    deopt 7 [];
  L57():
    p10 = prom<V +>{
      as_ts = ldf `as.ts`;
      p9 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r25 = dyn as_ts(p9);
      return r25;
    };
    r27 = dyn na_action1(p10);
    check L58() else D1();
  D1():
    deopt 9 [r27];
  L58():
    st x = r27;
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L20(r29):
    c2 = `as.logical`(r29);
    if c2 then L63() else L21();
  L59():
    x3 = ld x;
    check L61() else D2();
  L60():
    r28 = dyn base3(<sym x>);
    goto L20(r28);
  D2():
    deopt 13 [x3];
  L21():
    goto L22();
  L22():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L61():
    x4 = force? x3;
    checkMissing(x4);
    is_matrix = ldf `is.matrix` in base;
    r30 = dyn is_matrix(x4);
    check L62() else D3();
  L63():
    stop = ldf stop;
    check L64() else D4();
  D3():
    deopt 16 [r30];
  D4():
    deopt 18 [];
  L23(r34):
    st n = r34;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  L62():
    goto L20(r30);
  L64():
    r31 = dyn stop("only univariate series are allowed");
    check L65() else D5();
  L67():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L68():
    r33 = dyn base4(<lang length(x)>);
    goto L23(r33);
  D5():
    deopt 20 [r31];
  L24(r36):
    as_integer = ldf `as.integer` in base;
    r38 = dyn as_integer(r36);
    check L73() else D8();
  L25(r40):
    c3 = `as.logical`(r40);
    if c3 then L78() else L26();
  L65():
    goto L22();
  L69():
    x5 = ld x;
    check L71() else D6();
  L70():
    r35 = dyn base5(<sym x>);
    goto L24(r35);
  L74():
    n = ld n;
    check L76() else D9();
  L75():
    r39 = dyn base6(<sym n>);
    goto L25(r39);
  D6():
    deopt 27 [x5];
  D8():
    deopt 32 [r38];
  D9():
    deopt 36 [n];
  L26():
    goto L27();
  L27():
    frequency = ldf frequency;
    check L82() else D13();
  L71():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r37 = dyn length(x6);
    check L72() else D7();
  L73():
    goto L23(r38);
  L76():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r41 = dyn is_na(n1);
    check L77() else D10();
  L78():
    stop1 = ldf stop;
    check L79() else D11();
  D7():
    deopt 30 [r37];
  D10():
    deopt 39 [r41];
  D11():
    deopt 41 [];
  D13():
    deopt 47 [];
  L72():
    goto L24(r37);
  L77():
    goto L25(r41);
  L79():
    r42 = dyn stop1("invalid length(x)");
    check L80() else D12();
  L82():
    p11 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r45 = dyn frequency(p11);
    check L83() else D14();
  D12():
    deopt 43 [r42];
  D14():
    deopt 49 [r45];
  L80():
    goto L27();
  L83():
    st period = r45;
    period2 = ld period;
    check L84() else D15();
  D15():
    deopt 51 [period2];
  L84():
    period3 = force? period2;
    checkMissing(period3);
    r46 = `<`(period3, 2.0);
    c4 = `as.logical`(r46);
    if c4 then L28(c4) else L85();
  L28(c5):
    c10 = `as.logical`(c5);
    if c10 then L89() else L29();
  L85():
    n2 = ld n;
    check L86() else D16();
  D16():
    deopt 55 [c4, n2];
  L29():
    goto L30();
  L30():
    st periodic = FALSE;
    sym7 = ldf `is.character`;
    base7 = ldf `is.character` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L93() else L94();
  L86():
    n3 = force? n2;
    checkMissing(n3);
    period4 = ld period;
    check L87() else D17();
  L89():
    stop2 = ldf stop;
    check L90() else D18();
  D17():
    deopt 57 [c4, n3, 2.0, period4];
  D18():
    deopt 63 [];
  L31(r52):
    c12 = `as.logical`(r52);
    if c12 then L96() else L32();
  L87():
    period5 = force? period4;
    checkMissing(period5);
    r47 = `*`(2.0, period5);
    r48 = `<=`(n3, r47);
    c7 = `as.logical`(r48);
    c8 = `||`(c4, c7);
    goto L28(c8);
  L90():
    r49 = dyn stop2("series is not periodic or has less than two periods");
    check L91() else D19();
  L93():
    s_window3 = ld `s.window`;
    check L95() else D20();
  L94():
    r51 = dyn base7(<sym s.window>);
    goto L31(r51);
  D19():
    deopt 65 [r49];
  D20():
    deopt 72 [s_window3];
  L32():
    goto L36();
  L36():
    deg_check = ldf `deg.check`;
    check L108() else D27();
  L91():
    goto L30();
  L95():
    s_window4 = force? s_window3;
    checkMissing(s_window4);
    c11 = `is.character`(s_window4);
    goto L31(c11);
  L96():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  D27():
    deopt 104 [];
  L33(r54):
    c13 = `as.logical`(r54);
    if c13 then L102() else L34();
  L97():
    pmatch = ldf pmatch;
    check L99() else D21();
  L98():
    r53 = dyn base8(<lang pmatch(s.window, "periodic")>);
    goto L33(r53);
  L108():
    p13 = prom<V +>{
      s_degree1 = ld `s.degree`;
      s_degree2 = force? s_degree1;
      checkMissing(s_degree2);
      return s_degree2;
    };
    r64 = dyn deg_check(p13);
    check L109() else D28();
  D21():
    deopt 78 [];
  D28():
    deopt 106 [r64];
  L34():
    st periodic = TRUE;
    n4 = ld n;
    check L106() else D26();
  L35(r59):
    goto L36();
  L99():
    p12 = prom<V +>{
      s_window5 = ld `s.window`;
      s_window6 = force? s_window5;
      checkMissing(s_window6);
      return s_window6;
    };
    r56 = dyn pmatch(p12, "periodic");
    check L100() else D22();
  L102():
    stop3 = ldf stop;
    check L103() else D24();
  L109():
    st `s.degree` = r64;
    deg_check1 = ldf `deg.check`;
    check L110() else D29();
  D22():
    deopt 81 [r56];
  D24():
    deopt 85 [];
  D26():
    deopt 92 [10.0, n4];
  D29():
    deopt 109 [];
  L100():
    is_na1 = ldf `is.na` in base;
    r57 = dyn is_na1(r56);
    check L101() else D23();
  L103():
    r58 = dyn stop3("unknown string value for s.window");
    check L104() else D25();
  L106():
    n5 = force? n4;
    checkMissing(n5);
    r60 = `*`(10.0, n5);
    r61 = `+`(r60, 1.0);
    st `s.window` = r61;
    st `s.degree` = 0.0;
    goto L35(0.0);
  L110():
    p14 = prom<V +>{
      t_degree3 = ld `t.degree`;
      t_degree4 = force? t_degree3;
      checkMissing(t_degree4);
      return t_degree4;
    };
    r66 = dyn deg_check1(p14);
    check L111() else D30();
  D23():
    deopt 83 [r57];
  D25():
    deopt 87 [r58];
  D30():
    deopt 111 [r66];
  L101():
    goto L33(r57);
  L104():
    goto L35(r58);
  L111():
    st `t.degree` = r66;
    deg_check2 = ldf `deg.check`;
    check L112() else D31();
  D31():
    deopt 114 [];
  L112():
    p15 = prom<V +>{
      l_degree1 = ld `l.degree`;
      l_degree2 = force? l_degree1;
      checkMissing(l_degree2);
      return l_degree2;
    };
    r68 = dyn deg_check2(p15);
    check L113() else D32();
  D32():
    deopt 116 [r68];
  L113():
    st `l.degree` = r68;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L114() else L115();
  L37(r70):
    c15 = `as.logical`(r70);
    if c15 then L117() else L38();
  L114():
    t_window3 = ld `t.window`;
    check L116() else D33();
  L115():
    r69 = dyn base9(<sym t.window>);
    goto L37(r69);
  D33():
    deopt 119 [t_window3];
  L38():
    goto L39();
  L39():
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L121() else D36();
  L116():
    t_window4 = force? t_window3;
    checkMissing(t_window4);
    c14 = `==`(t_window4, NULL);
    goto L37(c14);
  L117():
    nextodd1 = ldf nextodd;
    check L118() else D34();
  D34():
    deopt 123 [];
  D36():
    deopt 132 ["double", l, "double"];
  L118():
    p16 = prom<V +>{
      sym10 = ldf ceiling;
      base10 = ldf ceiling in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r72):
      return r72;
    L1():
      period6 = ld period;
      period7 = force? period6;
      checkMissing(period7);
      r73 = `*`(1.5, period7);
      s_window7 = ld `s.window`;
      s_window8 = force? s_window7;
      checkMissing(s_window8);
      r74 = `/`(1.5, s_window8);
      r75 = `-`(1.0, r74);
      r76 = `/`(r73, r75);
      r77 = ceiling(r76);
      goto L0(r77);
    L2():
      r71 = dyn base10(<lang `/`(`*`(1.5, period), `(`(`-`(1.0, `/`(1.5, s.window))))>);
      goto L0(r71);
    };
    r79 = dyn nextodd1(p16);
    check L119() else D35();
  L121():
    r81 = dyn storage_mode__(l, NULL, "double");
    check L122() else D37();
  D35():
    deopt 125 [r79];
  D37():
    deopt 134 ["double", r81];
  L119():
    st `t.window` = r79;
    goto L39();
  L122():
    st x = r81;
    sym11 = ldf `.Fortran`;
    base11 = ldf `.Fortran` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L123() else L124();
  L40(r83):
    st z = r83;
    periodic = ld periodic;
    check L176() else D71();
  L123():
    C_stl = ld C_stl;
    check L125() else D38();
  L124():
    r82 = dyn base11[, , , , , , , , , , nsjump, ntjump, nljump, ni, no, weights, seasonal, trend, ](<sym C_stl>, <sym x>, <sym n>, <lang as.integer(period)>, <lang as.integer(s.window)>, <lang as.integer(t.window)>, <lang as.integer(l.window)>, <sym s.degree>, <sym t.degree>, <sym l.degree>, <lang as.integer(s.jump)>, <lang as.integer(t.jump)>, <lang as.integer(l.jump)>, <lang as.integer(inner)>, <lang as.integer(outer)>, <lang double(n)>, <lang double(n)>, <lang double(n)>, <lang double(`*`(`(`(`+`(n, `*`(2.0, period))), 5.0))>);
    goto L40(r82);
  D38():
    deopt 138 [C_stl];
  D71():
    deopt 231 [periodic];
  L125():
    C_stl1 = force? C_stl;
    checkMissing(C_stl1);
    x9 = ld x;
    check L126() else D39();
  L176():
    periodic1 = force? periodic;
    checkMissing(periodic1);
    c16 = `as.logical`(periodic1);
    if c16 then L177() else L50();
  D39():
    deopt 140 [x9];
  L50():
    goto L52();
  L52():
    as_vector = ldf `as.vector`;
    check L191() else D77();
  L126():
    x10 = force? x9;
    checkMissing(x10);
    n6 = ld n;
    check L127() else D40();
  L177():
    cycle = ldf cycle;
    check L178() else D72();
  D40():
    deopt 142 [n6];
  D72():
    deopt 234 [];
  D77():
    deopt 253 [];
  L127():
    n7 = force? n6;
    checkMissing(n7);
    sym12 = ldf `as.integer`;
    base12 = ldf `as.integer` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L128() else L129();
  L178():
    p21 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r124 = dyn cycle(p21);
    check L179() else D73();
  L191():
    p25 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r135 = dyn as_vector(p25);
    check L192() else D78();
  D73():
    deopt 236 [r124];
  D78():
    deopt 255 [r135];
  L41(r85):
    sym13 = ldf `as.integer`;
    base13 = ldf `as.integer` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L132() else L133();
  L128():
    period8 = ld period;
    check L130() else D41();
  L129():
    r84 = dyn base12(<sym period>);
    goto L41(r84);
  L179():
    st `which.cycle` = r124;
    tapply = ldf tapply;
    check L180() else D74();
  L192():
    z4 = ld z;
    check L193() else D79();
  D41():
    deopt 146 [period8];
  D74():
    deopt 239 [];
  D79():
    deopt 255 [r135, z4];
  L42(r88):
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L136() else L137();
  L130():
    period9 = force? period8;
    checkMissing(period9);
    as_integer1 = ldf `as.integer` in base;
    r86 = dyn as_integer1(period9);
    check L131() else D42();
  L132():
    s_window9 = ld `s.window`;
    check L134() else D43();
  L133():
    r87 = dyn base13(<sym s.window>);
    goto L42(r87);
  L180():
    p22 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c17 = `is.object`(z1);
      if c17 then L1() else L2(z1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", z1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(z3):
      r125 = `$`(z3, <sym seasonal>);
      goto L0(r125);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p23 = prom<V +>{
      which_cycle = ld `which.cycle`;
      which_cycle1 = force? which_cycle;
      checkMissing(which_cycle1);
      return which_cycle1;
    };
    p24 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r129 = dyn tapply(p22, p23, p24);
    check L181() else D75();
  L193():
    z5 = force? z4;
    checkMissing(z5);
    c20 = `is.object`(z5);
    if c20 then L195() else L196(r135, z5);
  D42():
    deopt 149 [r86];
  D43():
    deopt 152 [s_window9];
  D75():
    deopt 243 [r129];
  L43(r91):
    sym15 = ldf `as.integer`;
    base15 = ldf `as.integer` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L140() else L141();
  L131():
    goto L41(r86);
  L134():
    s_window10 = force? s_window9;
    checkMissing(s_window10);
    as_integer2 = ldf `as.integer` in base;
    r89 = dyn as_integer2(s_window10);
    check L135() else D44();
  L136():
    t_window5 = ld `t.window`;
    check L138() else D45();
  L137():
    r90 = dyn base14(<sym t.window>);
    goto L43(r90);
  L181():
    c18 = `is.object`(r129);
    if c18 then L182() else L183(r129);
  L194(r139, dx12):
    r141 = `-`(r139, dx12);
    z8 = ld z;
    check L198() else D80();
  L195():
    dr6 = tryDispatchBuiltin.1("$", z5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L197() else L196(r135, dr6);
  L196(r137, z7):
    r140 = `$`(z7, <sym seasonal>);
    goto L194(r137, r140);
  D44():
    deopt 155 [r89];
  D45():
    deopt 158 [t_window5];
  D80():
    deopt 258 [r141, z8];
  L44(r94):
    s_degree3 = ld `s.degree`;
    check L144() else D49();
  L51(dx3):
    l1 = ld z;
    c19 = `is.object`(l1);
    if c19 then L187() else L188(dx3, l1);
  L135():
    goto L42(r89);
  L138():
    t_window6 = force? t_window5;
    checkMissing(t_window6);
    as_integer3 = ldf `as.integer` in base;
    r92 = dyn as_integer3(t_window6);
    check L139() else D46();
  L140():
    l_window3 = ld `l.window`;
    check L142() else D47();
  L141():
    r93 = dyn base15(<sym l.window>);
    goto L44(r93);
  L182():
    dr2 = tryDispatchBuiltin.1("[", r129);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L184() else L183(dr2);
  L183(r131):
    which_cycle2 = ld `which.cycle`;
    check L185() else D76();
  L197():
    dx11 = getTryDispatchBuiltinValue(dr6);
    goto L194(r135, dx11);
  L198():
    z9 = force? z8;
    checkMissing(z9);
    c21 = `is.object`(z9);
    if c21 then L200() else L201(r141, z9);
  D46():
    deopt 161 [r92];
  D47():
    deopt 164 [l_window3];
  D49():
    deopt 168 [s_degree3];
  D76():
    deopt 244 [r131, which_cycle2];
  L139():
    goto L43(r92);
  L142():
    l_window4 = force? l_window3;
    checkMissing(l_window4);
    as_integer4 = ldf `as.integer` in base;
    r95 = dyn as_integer4(l_window4);
    check L143() else D48();
  L144():
    s_degree4 = force? s_degree3;
    checkMissing(s_degree4);
    t_degree5 = ld `t.degree`;
    check L145() else D50();
  L184():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L51(dx2);
  L185():
    which_cycle3 = force? which_cycle2;
    __ = ldf `[` in base;
    r132 = dyn __(r131, which_cycle3);
    goto L51(r132);
  L186(dx8, dx9):
    st z = dx9;
    goto L52();
  L187():
    dr4 = tryDispatchBuiltin.0("$<-", l1, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L189() else L188(dx3, dr4);
  L188(dx5, l3):
    r133 = `$<-`(l3, <sym seasonal>, dx3);
    goto L186(dx5, r133);
  L199(r145, dx14):
    r147 = `-`(r145, dx14);
    st remainder = r147;
    cbind = ldf cbind;
    check L203() else D81();
  L200():
    dr8 = tryDispatchBuiltin.1("$", z9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L202() else L201(r141, dr8);
  L201(r143, z11):
    r146 = `$`(z11, <sym trend>);
    goto L199(r143, r146);
  D48():
    deopt 167 [r95];
  D50():
    deopt 170 [t_degree5];
  D81():
    deopt 264 [];
  L143():
    goto L44(r95);
  L145():
    t_degree6 = force? t_degree5;
    checkMissing(t_degree6);
    l_degree3 = ld `l.degree`;
    check L146() else D51();
  L189():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L186(dx3, dx7);
  L202():
    dx13 = getTryDispatchBuiltinValue(dr8);
    goto L199(r141, dx13);
  L203():
    p26 = prom<V +>{
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      c22 = `is.object`(z13);
      if c22 then L1() else L2(z13);
    L0(dx16):
      return dx16;
    L1():
      dr10 = tryDispatchBuiltin.1("$", z13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(z15):
      r148 = `$`(z15, <sym seasonal>);
      goto L0(r148);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx15);
    };
    p27 = prom<V +>{
      z16 = ld z;
      z17 = force? z16;
      checkMissing(z17);
      c23 = `is.object`(z17);
      if c23 then L1() else L2(z17);
    L0(dx18):
      return dx18;
    L1():
      dr12 = tryDispatchBuiltin.1("$", z17);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(z19):
      r150 = `$`(z19, <sym trend>);
      goto L0(r150);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx17);
    };
    p28 = prom<V +>{
      remainder = ld remainder;
      remainder1 = force? remainder;
      checkMissing(remainder1);
      return remainder1;
    };
    r153 = dyn cbind[seasonal, trend, remainder](p26, p27, p28);
    check L204() else D82();
  D51():
    deopt 172 [l_degree3];
  D82():
    deopt 271 [r153];
  L146():
    l_degree4 = force? l_degree3;
    checkMissing(l_degree4);
    sym16 = ldf `as.integer`;
    base16 = ldf `as.integer` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L147() else L148();
  L204():
    st y = r153;
    sym21 = ldf list;
    base21 = ldf list in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L205() else L206();
  L45(r97):
    sym17 = ldf `as.integer`;
    base17 = ldf `as.integer` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L151() else L152();
  L53(r155):
    st res = r155;
    l4 = ld res;
    class__ = ldf `class<-`;
    check L245() else D103();
  L147():
    s_jump1 = ld `s.jump`;
    check L149() else D52();
  L148():
    r96 = dyn base16(<sym s.jump>);
    goto L45(r96);
  L205():
    ts = ldf ts;
    check L207() else D83();
  L206():
    r154 = dyn base21[`time.series`, weights, call, win, deg, jump, inner, outer](<lang ts(y, start=start(x), frequency=period)>, <lang `$`(z, weights)>, <lang match.call()>, <lang c(s=s.window, t=t.window, l=l.window)>, <lang c(s=s.degree, t=t.degree, l=l.degree)>, <lang c(s=s.jump, t=t.jump, l=l.jump)>, <lang `$`(z, ni)>, <lang `$`(z, no)>);
    goto L53(r154);
  D52():
    deopt 176 [s_jump1];
  D83():
    deopt 276 [];
  D103():
    deopt 348 ["stl", l4, "stl"];
  L46(r100):
    sym18 = ldf `as.integer`;
    base18 = ldf `as.integer` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L155() else L156();
  L149():
    s_jump2 = force? s_jump1;
    checkMissing(s_jump2);
    as_integer5 = ldf `as.integer` in base;
    r98 = dyn as_integer5(s_jump2);
    check L150() else D53();
  L151():
    t_jump1 = ld `t.jump`;
    check L153() else D54();
  L152():
    r99 = dyn base17(<sym t.jump>);
    goto L46(r99);
  L207():
    p29 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p31 = prom<V +>{
      start = ldf start;
      p30 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r158 = dyn start(p30);
      return r158;
    };
    p32 = prom<V +>{
      period12 = ld period;
      period13 = force? period12;
      checkMissing(period13);
      return period13;
    };
    r161 = dyn ts[, start, frequency](p29, p31, p32);
    check L208() else D84();
  L245():
    r176 = dyn class__(l4, NULL, "stl");
    check L246() else D104();
  D53():
    deopt 179 [r98];
  D54():
    deopt 183 [t_jump1];
  D84():
    deopt 282 [r161];
  D104():
    deopt 350 ["stl", r176];
  L47(r103):
    sym19 = ldf `as.integer`;
    base19 = ldf `as.integer` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L159() else L160();
  L150():
    goto L45(r98);
  L153():
    t_jump2 = force? t_jump1;
    checkMissing(t_jump2);
    as_integer6 = ldf `as.integer` in base;
    r101 = dyn as_integer6(t_jump2);
    check L154() else D55();
  L155():
    l_jump1 = ld `l.jump`;
    check L157() else D56();
  L156():
    r102 = dyn base18(<sym l.jump>);
    goto L47(r102);
  L208():
    z20 = ld z;
    check L209() else D85();
  L246():
    st res = r176;
    res = ld res;
    check L247() else D105();
  D55():
    deopt 186 [r101];
  D56():
    deopt 190 [l_jump1];
  D85():
    deopt 284 [z20];
  D105():
    deopt 352 [res];
  L48(r106):
    sym20 = ldf `as.integer`;
    base20 = ldf `as.integer` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L163() else L164();
  L154():
    goto L46(r101);
  L157():
    l_jump2 = force? l_jump1;
    checkMissing(l_jump2);
    as_integer7 = ldf `as.integer` in base;
    r104 = dyn as_integer7(l_jump2);
    check L158() else D57();
  L159():
    inner1 = ld inner;
    check L161() else D58();
  L160():
    r105 = dyn base19(<sym inner>);
    goto L48(r105);
  L209():
    z21 = force? z20;
    checkMissing(z21);
    c24 = `is.object`(z21);
    if c24 then L211() else L212(z21);
  L247():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D57():
    deopt 193 [r104];
  D58():
    deopt 197 [inner1];
  L49(r109):
    double = ldf double;
    check L167() else D62();
  L158():
    goto L47(r104);
  L161():
    inner2 = force? inner1;
    checkMissing(inner2);
    as_integer8 = ldf `as.integer` in base;
    r107 = dyn as_integer8(inner2);
    check L162() else D59();
  L163():
    outer1 = ld outer;
    check L165() else D60();
  L164():
    r108 = dyn base20(<sym outer>);
    goto L49(r108);
  L210(dx20):
    match_call = ldf `match.call`;
    check L214() else D86();
  L211():
    dr14 = tryDispatchBuiltin.1("$", z21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L213() else L212(dr14);
  L212(z23):
    r162 = `$`(z23, <sym weights>);
    goto L210(r162);
  D59():
    deopt 200 [r107];
  D60():
    deopt 204 [outer1];
  D62():
    deopt 210 [];
  D86():
    deopt 289 [];
  L162():
    goto L48(r107);
  L165():
    outer2 = force? outer1;
    checkMissing(outer2);
    as_integer9 = ldf `as.integer` in base;
    r110 = dyn as_integer9(outer2);
    check L166() else D61();
  L167():
    p17 = prom<V +>{
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      return n9;
    };
    r112 = dyn double(p17);
    check L168() else D63();
  L213():
    dx19 = getTryDispatchBuiltinValue(dr14);
    goto L210(dx19);
  L214():
    r163 = dyn match_call();
    check L215() else D87();
  D61():
    deopt 207 [r110];
  D63():
    deopt 212 [r112];
  D87():
    deopt 290 [r163];
  L166():
    goto L49(r110);
  L168():
    double1 = ldf double;
    check L169() else D64();
  L215():
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L216() else L217();
  D64():
    deopt 215 [];
  L54(r165):
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L222() else L223();
  L169():
    p18 = prom<V +>{
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      return n11;
    };
    r114 = dyn double1(p18);
    check L170() else D65();
  L216():
    s_window11 = ld `s.window`;
    check L218() else D88();
  L217():
    r164 = dyn base22[s, t, l](<sym s.window>, <sym t.window>, <sym l.window>);
    goto L54(r164);
  D65():
    deopt 217 [r114];
  D88():
    deopt 294 [s_window11];
  L55(r168):
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L228() else L229();
  L170():
    double2 = ldf double;
    check L171() else D66();
  L218():
    s_window12 = force? s_window11;
    checkMissing(s_window12);
    t_window7 = ld `t.window`;
    check L219() else D89();
  L222():
    s_degree5 = ld `s.degree`;
    check L224() else D92();
  L223():
    r167 = dyn base23[s, t, l](<sym s.degree>, <sym t.degree>, <sym l.degree>);
    goto L55(r167);
  D66():
    deopt 220 [];
  D89():
    deopt 297 [t_window7];
  D92():
    deopt 308 [s_degree5];
  L56(r171):
    z24 = ld z;
    check L234() else D100();
  L171():
    p19 = prom<V +>{
      n12 = ld n;
      n13 = force? n12;
      checkMissing(n13);
      return n13;
    };
    r116 = dyn double2(p19);
    check L172() else D67();
  L219():
    t_window8 = force? t_window7;
    checkMissing(t_window8);
    l_window5 = ld `l.window`;
    check L220() else D90();
  L224():
    s_degree6 = force? s_degree5;
    checkMissing(s_degree6);
    t_degree7 = ld `t.degree`;
    check L225() else D93();
  L228():
    s_jump3 = ld `s.jump`;
    check L230() else D96();
  L229():
    r170 = dyn base24[s, t, l](<sym s.jump>, <sym t.jump>, <sym l.jump>);
    goto L56(r170);
  D67():
    deopt 222 [r116];
  D90():
    deopt 300 [l_window5];
  D93():
    deopt 311 [t_degree7];
  D96():
    deopt 322 [s_jump3];
  D100():
    deopt 334 [z24];
  L172():
    double3 = ldf double;
    check L173() else D68();
  L220():
    l_window6 = force? l_window5;
    checkMissing(l_window6);
    c25 = ldf c in base;
    r166 = dyn c25(s_window12, t_window8, l_window6);
    check L221() else D91();
  L225():
    t_degree8 = force? t_degree7;
    checkMissing(t_degree8);
    l_degree5 = ld `l.degree`;
    check L226() else D94();
  L230():
    s_jump4 = force? s_jump3;
    checkMissing(s_jump4);
    t_jump3 = ld `t.jump`;
    check L231() else D97();
  L234():
    z25 = force? z24;
    checkMissing(z25);
    c28 = `is.object`(z25);
    if c28 then L236() else L237(z25);
  D68():
    deopt 225 [];
  D91():
    deopt 304 [r166];
  D94():
    deopt 314 [l_degree5];
  D97():
    deopt 325 [t_jump3];
  L173():
    p20 = prom<V +>{
      n14 = ld n;
      n15 = force? n14;
      checkMissing(n15);
      period10 = ld period;
      period11 = force? period10;
      checkMissing(period11);
      r117 = `*`(2.0, period11);
      r118 = `+`(n15, r117);
      r119 = `*`(r118, 5.0);
      return r119;
    };
    r121 = dyn double3(p20);
    check L174() else D69();
  L221():
    goto L54(r166);
  L226():
    l_degree6 = force? l_degree5;
    checkMissing(l_degree6);
    c26 = ldf c in base;
    r169 = dyn c26(s_degree6, t_degree8, l_degree6);
    check L227() else D95();
  L231():
    t_jump4 = force? t_jump3;
    checkMissing(t_jump4);
    l_jump3 = ld `l.jump`;
    check L232() else D98();
  L235(dx22):
    z28 = ld z;
    check L239() else D101();
  L236():
    dr16 = tryDispatchBuiltin.1("$", z25);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L238() else L237(dr16);
  L237(z27):
    r173 = `$`(z27, <sym ni>);
    goto L235(r173);
  D69():
    deopt 227 [r121];
  D95():
    deopt 318 [r169];
  D98():
    deopt 328 [l_jump3];
  D101():
    deopt 338 [z28];
  L174():
    _Fortran = ldf `.Fortran` in base;
    r122 = dyn _Fortran(C_stl1, x10, n7, r85, r88, r91, r94, s_degree4, t_degree6, l_degree4, r97, r100, r103, r106, r109, r112, r114, r116, r121);
    check L175() else D70();
  L227():
    goto L55(r169);
  L232():
    l_jump4 = force? l_jump3;
    checkMissing(l_jump4);
    c27 = ldf c in base;
    r172 = dyn c27(s_jump4, t_jump4, l_jump4);
    check L233() else D99();
  L238():
    dx21 = getTryDispatchBuiltinValue(dr16);
    goto L235(dx21);
  L239():
    z29 = force? z28;
    checkMissing(z29);
    c29 = `is.object`(z29);
    if c29 then L241() else L242(z29);
  D70():
    deopt 229 [r122];
  D99():
    deopt 332 [r172];
  L175():
    goto L40(r122);
  L233():
    goto L56(r172);
  L240(dx24):
    list = ldf list in base;
    r175 = dyn list(r161, dx20, r163, r165, r168, r171, dx22, dx24);
    check L244() else D102();
  L241():
    dr18 = tryDispatchBuiltin.1("$", z29);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L243() else L242(dr18);
  L242(z31):
    r174 = `$`(z31, <sym no>);
    goto L240(r174);
  D102():
    deopt 343 [r175];
  L243():
    dx23 = getTryDispatchBuiltinValue(dr18);
    goto L240(dx23);
  L244():
    goto L53(r175);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg round:cls, reg r2:V, reg x1:*, reg x2:V, reg __:cls, reg r3:V, reg r4:V, reg c:L, reg x3:*, reg x4:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg as_integer:cls, reg r9:V |
    mkenv;
    st x = x;
    sym = ldf round;
    base = ldf round in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st x = r1;
    x1 = ld x;
    check L6() else D0();
  L4():
    round = ldf round in base;
    r2 = dyn round(<sym x>);
    goto L0(r2);
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 5 [x1];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    __ = ldf `%%` in base;
    r3 = dyn __(x2, 2.0);
    check L7() else D1();
  D1():
    deopt 9 [r3];
  L7():
    r4 = `==`(r3, 0.0);
    c = `as.logical`(r4);
    if c then L8() else L1();
  L1():
    goto L2();
  L2():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8():
    x3 = ld x;
    check L9() else D2();
  D2():
    deopt 12 [x3];
  L3(r8):
    popenv;
    return r8;
  L9():
    x4 = force? x3;
    checkMissing(x4);
    r5 = `+`(x4, 1.0);
    st x = r5;
    goto L2();
  L11():
    x5 = ld x;
    check L13() else D3();
  L12():
    r7 = dyn base1(<sym x>);
    goto L3(r7);
  D3():
    deopt 21 [x5];
  L13():
    x6 = force? x5;
    checkMissing(x6);
    as_integer = ldf `as.integer` in base;
    r9 = dyn as_integer(x6);
    check L14() else D4();
  D4():
    deopt 24 [r9];
  L14():
    goto L3(r9);
  }
}
fun inner3288862338(deg) {
  (reg deg:*) -+> V { var deg:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg deg1:*, reg deg2:V, reg as_integer:cls, reg r7:V, reg deg3:*, reg deg4:V, reg r8:V, reg c:L, reg c1:V, reg deg5:*, reg deg6:V, reg r9:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg gettextf:cls, reg degname:*, reg degname1:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg r13:V, reg deg7:*, reg deg8:V |
    mkenv;
    st deg = deg;
    deparse1 = ldf deparse1;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<sym deg>);
      goto L0(r2);
    L2():
      r = dyn base(<sym deg>);
      goto L0(r);
    };
    r4 = dyn deparse1(p);
    check L5() else D1();
  D1():
    deopt 3 [r4];
  L5():
    st degname = r4;
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L0(r6):
    st deg = r6;
    deg3 = ld deg;
    check L10() else D4();
  L6():
    deg1 = ld deg;
    check L8() else D2();
  L7():
    r5 = dyn base1(<sym deg>);
    goto L0(r5);
  D2():
    deopt 7 [deg1];
  D4():
    deopt 12 [deg3];
  L8():
    deg2 = force? deg1;
    checkMissing(deg2);
    as_integer = ldf `as.integer` in base;
    r7 = dyn as_integer(deg2);
    check L9() else D3();
  L10():
    deg4 = force? deg3;
    checkMissing(deg4);
    r8 = `<`(deg4, 0.0);
    c = `as.logical`(r8);
    if c then L1(c) else L11();
  D3():
    deopt 10 [r7];
  L1(c1):
    c6 = `as.logical`(c1);
    if c6 then L14() else L2();
  L9():
    goto L0(r7);
  L11():
    deg5 = ld deg;
    check L12() else D5();
  D5():
    deopt 16 [c, deg5];
  L2():
    goto L3();
  L3():
    deg7 = ld deg;
    check L18() else D8();
  L12():
    deg6 = force? deg5;
    checkMissing(deg6);
    r9 = `>`(deg6, 1.0);
    c3 = `as.logical`(r9);
    c4 = `||`(c, c3);
    goto L1(c4);
  L14():
    stop = ldf stop;
    check L15() else D6();
  D6():
    deopt 22 [];
  D8():
    deopt 29 [deg7];
  L15():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        degname = ld degname;
        degname1 = force? degname;
        checkMissing(degname1);
        return degname1;
      };
      r11 = dyn gettextf("%s must be 0 or 1", p1);
      return r11;
    };
    r13 = dyn stop[, domain](p2, NA_LGL);
    check L16() else D7();
  L18():
    deg8 = force? deg7;
    checkMissing(deg8);
    popenv;
    return deg8;
  D7():
    deopt 26 [r13];
  L16():
    goto L3();
  }
}