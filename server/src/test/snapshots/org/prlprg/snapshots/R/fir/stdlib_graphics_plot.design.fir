fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg plot_design:cls, reg warpbreaks:*, reg warpbreaks1:V, reg p1:p(V +), reg r6:V, reg __:cls, reg r7:V, reg summary:cls, reg aov:cls, reg Form:*, reg Form1:V, reg p2:p(V +), reg warpbreaks2:*, reg warpbreaks3:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg plot_design1:cls, reg Form2:*, reg Form3:V, reg p5:p(V +), reg warpbreaks4:*, reg warpbreaks5:V, reg p6:p(V +), reg r15:V, reg __1:cls, reg r16:V, reg r17:cls, reg esoph:*, reg esoph1:V, reg p7:p(V +), reg r19:V, reg plot_design2:cls, reg esoph2:*, reg esoph3:V, reg p8:p(V +), reg r21:V, reg par:cls, reg p9:p(V +), reg r23:V, reg plot_design3:cls, reg __2:cls, reg r24:V, reg p10:p(V +), reg esoph4:*, reg esoph5:V, reg p11:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg c:cls, reg r29:V, reg p12:p(V +), reg r31:V, reg plot_design4:cls, reg __3:cls, reg r32:V, reg p13:p(V +), reg esoph6:*, reg esoph7:V, reg p14:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg c1:cls, reg r37:V, reg p15:p(V +), reg median:*, reg median1:V, reg p16:p(V +), reg r40:V, reg par1:cls, reg op:*, reg op1:V, reg p17:p(V +), reg r42:V |
    mkenv;
    r = clos inner734616939;
    st `plot.design` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    plot_design = ldf `plot.design`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      warpbreaks = ld warpbreaks;
      warpbreaks1 = force? warpbreaks;
      checkMissing(warpbreaks1);
      return warpbreaks1;
    };
    r6 = dyn plot_design(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L4():
    goto L0();
  L6():
    __ = ldf `~` in base;
    r7 = dyn __(<sym breaks>, <lang `+`(wool, tension)>);
    st Form = r7;
    summary = ldf summary;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p4 = prom<V +>{
      aov = ldf aov;
      p2 = prom<V +>{
        Form = ld Form;
        Form1 = force? Form;
        checkMissing(Form1);
        return Form1;
      };
      p3 = prom<V +>{
        warpbreaks2 = ld warpbreaks;
        warpbreaks3 = force? warpbreaks2;
        checkMissing(warpbreaks3);
        return warpbreaks3;
      };
      r10 = dyn aov[, data](p2, p3);
      st fm1 = r10;
      invisible.0();
      return r10;
    };
    r12 = dyn summary(p4);
    check L8() else D5();
  D5():
    deopt 18 [r12];
  L8():
    plot_design1 = ldf `plot.design`;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p5 = prom<V +>{
      Form2 = ld Form;
      Form3 = force? Form2;
      checkMissing(Form3);
      return Form3;
    };
    p6 = prom<V +>{
      warpbreaks4 = ld warpbreaks;
      warpbreaks5 = force? warpbreaks4;
      checkMissing(warpbreaks5);
      return warpbreaks5;
    };
    r15 = dyn plot_design1[, data, col](p5, p6, 2.0);
    check L10() else D7();
  D7():
    deopt 26 [r15];
  L10():
    __1 = ldf `::`;
    check L11() else D8();
  D8():
    deopt 28 [];
  L11():
    r16 = dyn __1("utils", "str");
    check L12() else D9();
  D9():
    deopt 31 [r16];
  L12():
    checkFun.0(r16);
    r17 = r16 as cls;
    p7 = prom<V +>{
      esoph = ld esoph;
      esoph1 = force? esoph;
      checkMissing(esoph1);
      return esoph1;
    };
    r19 = dyn r17(p7);
    check L13() else D10();
  D10():
    deopt 34 [r19];
  L13():
    plot_design2 = ldf `plot.design`;
    check L14() else D11();
  D11():
    deopt 36 [];
  L14():
    p8 = prom<V +>{
      esoph2 = ld esoph;
      esoph3 = force? esoph2;
      checkMissing(esoph3);
      return esoph3;
    };
    r21 = dyn plot_design2(p8);
    check L15() else D12();
  D12():
    deopt 38 [r21];
  L15():
    par = ldf par;
    check L16() else D13();
  D13():
    deopt 40 [];
  L16():
    p9 = prom<V +>{
      return <int 1, 2>;
    };
    r23 = dyn par[mfcol](p9);
    check L17() else D14();
  D14():
    deopt 43 [r23];
  L17():
    st op = r23;
    plot_design3 = ldf `plot.design`;
    check L18() else D15();
  D15():
    deopt 46 [];
  L18():
    p10 = prom<V +>{
      __2 = ldf `~` in base;
      r24 = dyn __2(<lang `/`(ncases, ncontrols)>, <sym .>);
      return r24;
    };
    p11 = prom<V +>{
      esoph4 = ld esoph;
      esoph5 = force? esoph4;
      checkMissing(esoph5);
      return esoph5;
    };
    p12 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c = ldf c in base;
      r29 = dyn c(0.0, 0.8);
      goto L0(r29);
    L2():
      r27 = dyn base1(0.0, 0.8);
      goto L0(r27);
    };
    r31 = dyn plot_design3[, data, ylim](p10, p11, p12);
    check L19() else D16();
  D16():
    deopt 52 [r31];
  L19():
    plot_design4 = ldf `plot.design`;
    check L20() else D17();
  D17():
    deopt 54 [];
  L20():
    p13 = prom<V +>{
      __3 = ldf `~` in base;
      r32 = dyn __3(<lang `/`(ncases, ncontrols)>, <sym .>);
      return r32;
    };
    p14 = prom<V +>{
      esoph6 = ld esoph;
      esoph7 = force? esoph6;
      checkMissing(esoph7);
      return esoph7;
    };
    p15 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      c1 = ldf c in base;
      r37 = dyn c1(0.0, 0.8);
      goto L0(r37);
    L2():
      r35 = dyn base2(0.0, 0.8);
      goto L0(r35);
    };
    p16 = prom<V +>{
      median = ld median;
      median1 = force? median;
      checkMissing(median1);
      return median1;
    };
    r40 = dyn plot_design4[, data, ylim, fun](p13, p14, p15, p16);
    check L21() else D18();
  D18():
    deopt 62 [r40];
  L21():
    par1 = ldf par;
    check L22() else D19();
  D19():
    deopt 64 [];
  L22():
    p17 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r42 = dyn par1(p17);
    check L23() else D20();
  D20():
    deopt 66 [r42];
  L23():
    popenv;
    return r42;
  }
}
fun inner734616939(x, y, fun, data, `...`, ylim, xlab, ylab, main, ask, xaxt, axes, xtick) {
  (reg x:*, reg y:*, reg fun:*, reg data:*, reg ddd:dots, reg ylim:*, reg xlab:*, reg ylab:*, reg main:*, reg ask:*, reg xaxt:*, reg axes:*, reg xtick:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var fun:*, reg fun_isMissing:L, reg fun_orDefault:*, reg mean:*, reg mean1:V, reg p:p(V +), var data:*, reg data_isMissing:L, reg data_orDefault:*, var `...`:dots?, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, var xaxt:*, reg xaxt_isMissing:L, reg xaxt_orDefault:*, reg par:cls, reg r1:V, reg p1:p(V +), var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var xtick:*, reg xtick_isMissing:L, reg xtick_orDefault:*, reg r3:cls, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg substitute:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg match_fun:cls, reg fun1:*, reg fun2:V, reg p3:p(V +), reg r10:V, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg r17:V, reg x3:*, reg x4:V, reg inherits:cls, reg r18:V, reg r19:V, reg r20:V, reg c:L, reg stop:cls, reg r21:V, reg is_data_frame1:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg r24:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg y1:*, reg y2:V, reg c2:V, reg c3:L, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg y3:*, reg y4:V, reg inherits1:cls, reg r30:V, reg c4:L, reg __:cls, reg r31:V, reg r32:cls, reg y5:*, reg y6:V, reg p6:p(V +), reg x7:*, reg x8:V, reg p7:p(V +), reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg y7:*, reg y8:V, reg is_numeric:cls, reg r38:V, reg c5:L, reg cbind:cls, reg y9:*, reg y10:V, reg p8:p(V +), reg x9:*, reg x10:V, reg c6:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sapply:cls, reg x13:*, reg x14:V, reg p9:p(V +), reg is_factor:*, reg is_factor1:V, reg p10:p(V +), reg r42:V, reg __1:cls, reg r43:V, reg p11:p(V +), reg r45:V, reg match_call:cls, reg r46:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg tmpname:*, reg tmpname1:V, reg c7:L, reg tmpname3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg x15:*, reg x16:V, reg c8:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __3:cls, reg r54:V, reg names:cls, reg r55:V, reg c9:cls, reg r56:V, reg as_character:cls, reg r57:V, reg l:*, reg names__:cls, reg r58:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg r60:V, reg y11:*, reg y12:V, reg c10:L, reg c11:L, reg y13:*, reg y14:V, reg data_frame:cls, reg x19:*, reg x20:V, reg c12:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg y15:*, reg y16:V, reg __4:cls, reg r61:V, reg p12:p(V +), reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg sapply1:cls, reg y17:*, reg y18:V, reg p13:p(V +), reg is_numeric1:*, reg is_numeric2:V, reg p14:p(V +), reg r68:V, reg sum:cls, reg r69:V, reg ncol:cls, reg y19:*, reg y20:V, reg p15:p(V +), reg r71:V, reg r72:V, reg c13:L, reg stop1:cls, reg r73:V, reg x23:*, reg x24:V, reg c14:L, reg x26:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sapply2:cls, reg x27:*, reg x28:V, reg p16:p(V +), reg is_factor2:*, reg is_factor3:V, reg p17:p(V +), reg r77:V, reg __5:cls, reg r78:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg r80:V, reg x29:*, reg x30:V, reg names1:cls, reg r81:V, reg cbind1:cls, reg x31:*, reg x32:V, reg p18:p(V +), reg y21:*, reg y22:V, reg p19:p(V +), reg r84:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r85:V, reg r86:V, reg xnames:*, reg xnames1:V, reg ynames:*, reg ynames1:V, reg c15:cls, reg r87:V, reg l1:*, reg names__1:cls, reg r88:V, reg is_data_frame2:cls, reg data1:*, reg data2:V, reg p20:p(V +), reg r91:V, reg c16:L, reg __6:cls, reg r92:V, reg r93:cls, reg x33:*, reg x34:V, reg p21:p(V +), reg data3:*, reg data4:V, reg p22:p(V +), reg r96:V, reg __7:cls, reg r97:V, reg r98:cls, reg x35:*, reg x36:V, reg p23:p(V +), reg r100:V, reg sapply3:cls, reg x37:*, reg x38:V, reg p24:p(V +), reg is_factor4:*, reg is_factor5:V, reg p25:p(V +), reg r103:V, reg sapply4:cls, reg x39:*, reg x40:V, reg p26:p(V +), reg is_numeric3:*, reg is_numeric4:V, reg p27:p(V +), reg r106:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r107:V, reg r108:V, reg i_num:*, reg i_num1:V, reg sum1:cls, reg r109:V, reg nResp:*, reg nResp1:V, reg r110:V, reg c17:L, reg stop2:cls, reg r111:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r113:V, reg r114:V, reg x41:*, reg x42:V, reg names2:cls, reg r115:V, reg c18:L, reg r117:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i_num2:*, reg i_num3:V, reg __8:cls, reg r118:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r119:V, reg r120:V, reg ylab1:*, reg ylab2:V, reg c19:V, reg c20:L, reg paste:cls, reg fname:*, reg fname1:V, reg p28:p(V +), reg yname:*, reg yname1:V, reg p29:p(V +), reg r123:V, reg as_matrix:cls, reg x43:*, reg x44:V, reg c21:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg i_num4:*, reg i_num5:V, reg __9:cls, reg r125:V, reg p30:p(V +), reg r127:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r128:V, reg r129:V, reg i_fac:*, reg i_fac1:V, reg any:cls, reg r130:V, reg r131:V, reg c22:L, reg data_frame1:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r132:V, reg r133:V, reg nrow:cls, reg x47:*, reg x48:V, reg p31:p(V +), reg r135:V, reg rep_int:cls, reg r136:V, reg p32:p(V +), reg r138:V, reg x49:*, reg x50:V, reg c23:L, reg x52:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i_fac2:*, reg i_fac3:V, reg __10:cls, reg r140:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r141:V, reg r142:V, reg ask1:*, reg ask2:V, reg c24:V, reg c25:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r143:V, reg r144:V, reg par1:cls, reg r145:V, reg prod:cls, reg r146:V, reg nResp2:*, reg nResp3:V, reg r147:V, reg c26:L, reg c28:V, reg dev_interactive:cls, reg r148:V, reg c29:L, reg c30:V, reg ask3:*, reg ask4:V, reg c33:L, reg devAskNewPage:cls, reg ask5:*, reg ask6:V, reg p33:p(V +), reg r150:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r151:V, reg r152:V, reg on_exit:cls, reg r153:V, reg nResp4:*, reg nResp5:V, reg r155:V, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c34:L, reg x53:V, reg _plot_des:cls, reg xf:*, reg xf1:V, reg p34:p(V +), reg ydata:*, reg ydata1:V, reg c35:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg j:*, reg j1:V, reg __11:cls, reg r157:V, reg p35:p(V +), reg fun3:*, reg fun4:V, reg p36:p(V +), reg ylab3:*, reg ylab4:V, reg c36:L, reg ylab6:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg j2:*, reg j3:V, reg __12:cls, reg r160:V, reg p37:p(V +), reg ylim1:*, reg ylim2:V, reg p38:p(V +), reg ddd1:dots?, reg r163:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r164:V, reg r165:V, reg invisible:cls, reg r166:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    fun_isMissing = missing.0(fun);
    if fun_isMissing then L1() else L2(fun);
  L1():
    p = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    goto L2(p);
  L2(fun_orDefault):
    st fun = fun_orDefault;
    data_isMissing = missing.0(data);
    if data_isMissing then L3(NULL) else L3(data);
  L3(data_orDefault):
    st data = data_orDefault;
    st `...` = ddd;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L4(NULL) else L4(ylim);
  L4(ylim_orDefault):
    st ylim = ylim_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L5("Factors") else L5(xlab);
  L5(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L6(NULL) else L6(ylab);
  L6(ylab_orDefault):
    st ylab = ylab_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L7(NULL) else L7(main);
  L7(main_orDefault):
    st main = main_orDefault;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L8(NULL) else L8(ask);
  L8(ask_orDefault):
    st ask = ask_orDefault;
    xaxt_isMissing = missing.0(xaxt);
    if xaxt_isMissing then L9() else L10(xaxt);
  L9():
    p1 = prom<V +>{
      par = ldf par;
      r1 = dyn par("xaxt");
      return r1;
    };
    goto L10(p1);
  L10(xaxt_orDefault):
    st xaxt = xaxt_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L11(TRUE) else L11(axes);
  L11(axes_orDefault):
    st axes = axes_orDefault;
    xtick_isMissing = missing.0(xtick);
    if xtick_isMissing then L12(FALSE) else L12(xtick);
  L12(xtick_orDefault):
    st xtick = xtick_orDefault;
    r3 = clos inner606620067;
    st `.plot.des` = r3;
    deparse1 = ldf deparse1;
    check L62() else D0();
  D0():
    deopt 4 [];
  L62():
    p2 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      substitute = ldf substitute in base;
      r6 = dyn substitute(<sym fun>);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym fun>);
      goto L0(r4);
    };
    r8 = dyn deparse1(p2);
    check L63() else D1();
  D1():
    deopt 6 [r8];
  L63():
    st fname = r8;
    match_fun = ldf `match.fun`;
    check L64() else D2();
  D2():
    deopt 9 [];
  L64():
    p3 = prom<V +>{
      fun1 = ld fun;
      fun2 = force? fun1;
      checkMissing(fun2);
      return fun2;
    };
    r10 = dyn match_fun(p3);
    check L65() else D3();
  D3():
    deopt 11 [r10];
  L65():
    st fun = r10;
    is_data_frame = ldf `is.data.frame`;
    check L66() else D4();
  D4():
    deopt 14 [];
  L66():
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r12 = dyn is_data_frame(p4);
    check L67() else D5();
  D5():
    deopt 16 [r12];
  L67():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L68() else L69();
  L13(r16, r17):
    r19 = `||`(r16, r17);
    r20 = `!`(r19);
    c = `as.logical`(r20);
    if c then L72() else L14();
  L68():
    x3 = ld x;
    check L70() else D6();
  L69():
    r15 = dyn base1(<sym x>, "formula");
    goto L13(r12, r15);
  D6():
    deopt 18 [r12, x3];
  L14():
    goto L15();
  L15():
    is_data_frame1 = ldf `is.data.frame`;
    check L76() else D10();
  L70():
    x4 = force? x3;
    checkMissing(x4);
    inherits = ldf inherits in base;
    r18 = dyn inherits(x4, "formula", FALSE);
    check L71() else D7();
  L72():
    stop = ldf stop;
    check L73() else D8();
  D7():
    deopt 23 [r12, r18];
  D8():
    deopt 27 [];
  D10():
    deopt 33 [];
  L71():
    goto L13(r12, r18);
  L73():
    r21 = dyn stop("'x' must be a dataframe or a formula");
    check L74() else D9();
  L76():
    p5 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r24 = dyn is_data_frame1(p5);
    check L77() else D11();
  D9():
    deopt 29 [r21];
  D11():
    deopt 35 [r24];
  L74():
    goto L15();
  L77():
    c1 = `as.logical`(r24);
    if c1 then L78() else L16();
  L16():
    is_data_frame2 = ldf `is.data.frame`;
    check L161() else D54();
  L37():
    sapply3 = ldf sapply;
    check L171() else D62();
  L78():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L79() else L80();
  D54():
    deopt 177 [];
  D62():
    deopt 201 [];
  L17(r26):
    c3 = `as.logical`(r26);
    if c3 then L82() else L18();
  L79():
    y1 = ld y;
    check L81() else D12();
  L80():
    r25 = dyn base2(<sym y>);
    goto L17(r25);
  L161():
    p20 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r91 = dyn is_data_frame2(p20);
    check L162() else D55();
  L171():
    p24 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      return x38;
    };
    p25 = prom<V +>{
      is_factor4 = ld `is.factor`;
      is_factor5 = force? is_factor4;
      checkMissing(is_factor5);
      return is_factor5;
    };
    r103 = dyn sapply3(p24, p25);
    check L172() else D63();
  D12():
    deopt 37 [y1];
  D55():
    deopt 179 [r91];
  D63():
    deopt 204 [r103];
  L18():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L84() else L85();
  L19(r27):
    goto L37();
  L81():
    y2 = force? y1;
    checkMissing(y2);
    c2 = `==`(y2, NULL);
    goto L17(c2);
  L82():
    goto L19(NULL);
  L162():
    c16 = `as.logical`(r91);
    if c16 then L163() else L38();
  L172():
    st `i.fac` = r103;
    sapply4 = ldf sapply;
    check L173() else D64();
  D64():
    deopt 207 [];
  L20(r29):
    c4 = `as.logical`(r29);
    if c4 then L88() else L21();
  L38():
    __7 = ldf `::`;
    check L168() else D59();
  L84():
    y3 = ld y;
    check L86() else D13();
  L85():
    r28 = dyn base3(<sym y>, "formula");
    goto L20(r28);
  L163():
    __6 = ldf `::`;
    check L164() else D56();
  L173():
    p26 = prom<V +>{
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      return x40;
    };
    p27 = prom<V +>{
      is_numeric3 = ld `is.numeric`;
      is_numeric4 = force? is_numeric3;
      checkMissing(is_numeric4);
      return is_numeric4;
    };
    r106 = dyn sapply4(p26, p27);
    check L174() else D65();
  D13():
    deopt 44 [y3];
  D56():
    deopt 181 [];
  D59():
    deopt 192 [];
  D65():
    deopt 210 [r106];
  L21():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L93() else L94();
  L86():
    y4 = force? y3;
    checkMissing(y4);
    inherits1 = ldf inherits in base;
    r30 = dyn inherits1(y4, "formula", FALSE);
    check L87() else D14();
  L88():
    __ = ldf `::`;
    check L89() else D15();
  L164():
    r92 = dyn __6("stats", "model.frame");
    check L165() else D57();
  L168():
    r97 = dyn __7("stats", "model.frame");
    check L169() else D60();
  L174():
    st `i.num` = r106;
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L175() else L176();
  D14():
    deopt 49 [r30];
  D15():
    deopt 51 [];
  D57():
    deopt 184 [r92];
  D60():
    deopt 195 [r97];
  L22(r37):
    c5 = `as.logical`(r37);
    if c5 then L97() else L23();
  L39(r108):
    st nResp = r108;
    nResp = ld nResp;
    check L179() else D68();
  L87():
    goto L20(r30);
  L89():
    r31 = dyn __("stats", "model.frame");
    check L90() else D16();
  L93():
    y7 = ld y;
    check L95() else D18();
  L94():
    r36 = dyn base4(<sym y>);
    goto L22(r36);
  L165():
    checkFun.0(r92);
    r93 = r92 as cls;
    p21 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    p22 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    r96 = dyn r93[, data](p21, p22);
    check L166() else D58();
  L169():
    checkFun.0(r97);
    r98 = r97 as cls;
    p23 = prom<V +>{
      x35 = ld x;
      x36 = force? x35;
      checkMissing(x36);
      return x36;
    };
    r100 = dyn r98(p23);
    check L170() else D61();
  L175():
    i_num = ld `i.num`;
    check L177() else D66();
  L176():
    r107 = dyn base12(<sym i.num>);
    goto L39(r107);
  D16():
    deopt 54 [r31];
  D18():
    deopt 63 [y7];
  D58():
    deopt 189 [r96];
  D61():
    deopt 198 [r100];
  D66():
    deopt 214 [i_num];
  D68():
    deopt 219 [nResp];
  L23():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L122() else L123();
  L90():
    checkFun.0(r31);
    r32 = r31 as cls;
    p6 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    p7 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r35 = dyn r32[, data](p6, p7);
    check L91() else D17();
  L95():
    y8 = force? y7;
    checkMissing(y8);
    is_numeric = ldf `is.numeric` in base;
    r38 = dyn is_numeric(y8);
    check L96() else D19();
  L97():
    cbind = ldf cbind;
    check L98() else D20();
  L166():
    st x = r96;
    goto L37();
  L170():
    st x = r100;
    goto L37();
  L177():
    i_num1 = force? i_num;
    checkMissing(i_num1);
    sum1 = ldf sum in base;
    r109 = dyn sum1(i_num1);
    check L178() else D67();
  L179():
    nResp1 = force? nResp;
    checkMissing(nResp1);
    r110 = `==`(nResp1, 0.0);
    c17 = `as.logical`(r110);
    if c17 then L180() else L40();
  D17():
    deopt 59 [r35];
  D19():
    deopt 66 [r38];
  D20():
    deopt 68 [];
  D67():
    deopt 217 [r109];
  L29(r60):
    c11 = `as.logical`(r60);
    if c11 then L125() else L30();
  L40():
    goto L41();
  L41():
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L184() else L185();
  L91():
    st x = r35;
    goto L19(r35);
  L96():
    goto L22(r38);
  L98():
    p8 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    p11 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c6 = `is.object`(x10);
      if c6 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      sapply = ldf sapply;
      p9 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      p10 = prom<V +>{
        is_factor = ld `is.factor`;
        is_factor1 = force? is_factor;
        checkMissing(is_factor1);
        return is_factor1;
      };
      r42 = dyn sapply(p9, p10);
      __1 = ldf `[` in base;
      r43 = dyn __1(x10, <missing>, r42);
      goto L0(r43);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r45 = dyn cbind(p8, p11);
    check L99() else D21();
  L122():
    y11 = ld y;
    check L124() else D31();
  L123():
    r59 = dyn base8(<sym y>);
    goto L29(r59);
  L178():
    goto L39(r109);
  L180():
    stop2 = ldf stop;
    check L181() else D69();
  D21():
    deopt 71 [r45];
  D31():
    deopt 107 [y11];
  D69():
    deopt 224 [];
  L30():
    goto L19(NULL);
  L42(r114):
    c18 = `is.object`(r114);
    if c18 then L188() else L189(r114);
  L99():
    st x = r45;
    match_call = ldf `match.call`;
    check L100() else D22();
  L124():
    y12 = force? y11;
    checkMissing(y12);
    c10 = `is.character`(y12);
    goto L29(c10);
  L125():
    y13 = ld y;
    check L126() else D32();
  L181():
    r111 = dyn stop2("there must be at least one numeric variable!");
    check L182() else D70();
  L184():
    x41 = ld x;
    check L186() else D71();
  L185():
    r113 = dyn base13(<sym x>);
    goto L42(r113);
  D22():
    deopt 74 [];
  D32():
    deopt 110 [y13];
  D70():
    deopt 226 [r111];
  D71():
    deopt 231 [x41];
  L43(dx11):
    st yname = dx11;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L192() else L193();
  L100():
    r46 = dyn match_call();
    check L101() else D23();
  L126():
    y14 = force? y13;
    checkMissing(y14);
    st ynames = y14;
    data_frame = ldf `data.frame`;
    check L127() else D33();
  L182():
    goto L41();
  L186():
    x42 = force? x41;
    checkMissing(x42);
    names2 = ldf names in base;
    r115 = dyn names2(x42);
    check L187() else D72();
  L188():
    dr10 = tryDispatchBuiltin.1("[", r114);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L190() else L189(dr10);
  L189(r117):
    i_num2 = ld `i.num`;
    check L191() else D73();
  D23():
    deopt 75 [r46];
  D33():
    deopt 114 [];
  D72():
    deopt 234 [r115];
  D73():
    deopt 235 [r117, i_num2];
  L44(r120):
    c20 = `as.logical`(r120);
    if c20 then L195() else L45();
  L101():
    st tmpname = r46;
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L102() else L103();
  L127():
    p12 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      c12 = `is.object`(x20);
      if c12 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", x20);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      y15 = ld y;
      y16 = force? y15;
      __4 = ldf `[` in base;
      r61 = dyn __4(x20, <missing>, y16);
      goto L0(r61);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r63 = dyn data_frame(p12);
    check L128() else D34();
  L187():
    goto L42(r115);
  L190():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L43(dx10);
  L191():
    i_num3 = force? i_num2;
    __8 = ldf `[` in base;
    r118 = dyn __8(r117, i_num3);
    goto L43(r118);
  L192():
    ylab1 = ld ylab;
    check L194() else D74();
  L193():
    r119 = dyn base14(<sym ylab>);
    goto L44(r119);
  D34():
    deopt 116 [r63];
  D74():
    deopt 240 [ylab1];
  L24(r48):
    l = ld x;
    names__ = ldf `names<-`;
    check L119() else D29();
  L45():
    goto L46();
  L46():
    as_matrix = ldf `as.matrix`;
    check L199() else D77();
  L102():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L104() else L105();
  L103():
    r47 = dyn base5(<lang c(`[[`(tmpname, 3), names(`[`(x, , `-`(1.0))))>);
    goto L24(r47);
  L128():
    st y = r63;
    sym9 = ldf sum;
    base9 = ldf sum in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L129() else L130();
  L194():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c19 = `==`(ylab2, NULL);
    goto L44(c19);
  L195():
    paste = ldf paste;
    check L196() else D75();
  D29():
    deopt 102 [r48, l, r48];
  D75():
    deopt 244 [];
  D77():
    deopt 253 [];
  L25(r50):
    as_character = ldf `as.character` in base;
    r57 = dyn as_character(r50);
    check L118() else D28();
  L31(r65):
    ncol = ldf ncol;
    check L134() else D38();
  L104():
    tmpname = ld tmpname;
    check L106() else D24();
  L105():
    r49 = dyn base6(<lang `[[`(tmpname, 3)>, <lang names(`[`(x, , `-`(1.0)))>);
    goto L25(r49);
  L119():
    r58 = dyn names__(l, NULL, r48);
    check L120() else D30();
  L129():
    sapply1 = ldf sapply;
    check L131() else D35();
  L130():
    r64 = dyn base9(<lang sapply(y, is.numeric)>);
    goto L31(r64);
  L196():
    p28 = prom<V +>{
      fname = ld fname;
      fname1 = force? fname;
      checkMissing(fname1);
      return fname1;
    };
    p29 = prom<V +>{
      yname = ld yname;
      yname1 = force? yname;
      checkMissing(yname1);
      return yname1;
    };
    r123 = dyn paste(p28, "of", p29);
    check L197() else D76();
  L199():
    p30 = prom<V +>{
      x43 = ld x;
      x44 = force? x43;
      checkMissing(x44);
      c21 = `is.object`(x44);
      if c21 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", x44);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      i_num4 = ld `i.num`;
      i_num5 = force? i_num4;
      __9 = ldf `[` in base;
      r125 = dyn __9(x44, <missing>, i_num5);
      goto L0(r125);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r127 = dyn as_matrix(p30);
    check L200() else D78();
  D24():
    deopt 81 [tmpname];
  D28():
    deopt 100 [r57];
  D30():
    deopt 104 [r48, r58];
  D35():
    deopt 121 [];
  D38():
    deopt 127 [r65];
  D76():
    deopt 248 [r123];
  D78():
    deopt 255 [r127];
  L106():
    tmpname1 = force? tmpname;
    checkMissing(tmpname1);
    c7 = `is.object`(tmpname1);
    if c7 then L107() else L108(tmpname1);
  L118():
    goto L24(r57);
  L120():
    st x = r58;
    goto L19(r48);
  L131():
    p13 = prom<V +>{
      y17 = ld y;
      y18 = force? y17;
      checkMissing(y18);
      return y18;
    };
    p14 = prom<V +>{
      is_numeric1 = ld `is.numeric`;
      is_numeric2 = force? is_numeric1;
      checkMissing(is_numeric2);
      return is_numeric2;
    };
    r68 = dyn sapply1(p13, p14);
    check L132() else D36();
  L134():
    p15 = prom<V +>{
      y19 = ld y;
      y20 = force? y19;
      checkMissing(y20);
      return y20;
    };
    r71 = dyn ncol(p15);
    check L135() else D39();
  L197():
    st ylab = r123;
    goto L46();
  L200():
    st ydata = r127;
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L201() else L202();
  D36():
    deopt 124 [r68];
  D39():
    deopt 129 [r65, r71];
  L26(dx3):
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L110() else L111();
  L47(r129):
    r131 = `!`(r129);
    c22 = `as.logical`(r131);
    if c22 then L205() else L48();
  L107():
    dr2 = tryDispatchBuiltin.1("[[", tmpname1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L109() else L108(dr2);
  L108(tmpname3):
    __2 = ldf `[[` in base;
    r51 = dyn __2(tmpname3, 3);
    goto L26(r51);
  L132():
    sum = ldf sum in base;
    r69 = dyn sum(r68);
    check L133() else D37();
  L135():
    r72 = `!=`(r65, r71);
    c13 = `as.logical`(r72);
    if c13 then L136() else L32();
  L201():
    i_fac = ld `i.fac`;
    check L203() else D79();
  L202():
    r128 = dyn base15(<sym i.fac>);
    goto L47(r128);
  D37():
    deopt 126 [r69];
  D79():
    deopt 259 [i_fac];
  L27(r53):
    c9 = ldf c in base;
    r56 = dyn c9(dx3, r53);
    check L117() else D27();
  L32():
    goto L33();
  L33():
    x23 = ld x;
    check L140() else D42();
  L48():
    goto L49();
  L49():
    x49 = ld x;
    check L209() else D83();
  L109():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(dx2);
  L110():
    x15 = ld x;
    check L112() else D25();
  L111():
    r52 = dyn base7(<lang `[`(x, , `-`(1.0))>);
    goto L27(r52);
  L133():
    goto L31(r69);
  L136():
    stop1 = ldf stop;
    check L137() else D40();
  L203():
    i_fac1 = force? i_fac;
    checkMissing(i_fac1);
    any = ldf any in base;
    r130 = dyn any(i_fac1);
    check L204() else D80();
  L205():
    data_frame1 = ldf `data.frame`;
    check L206() else D81();
  D25():
    deopt 88 [x15];
  D27():
    deopt 98 [r56];
  D40():
    deopt 132 [];
  D42():
    deopt 137 [x23];
  D80():
    deopt 262 [r130];
  D81():
    deopt 265 [];
  D83():
    deopt 275 [x49];
  L112():
    x16 = force? x15;
    checkMissing(x16);
    c8 = `is.object`(x16);
    if c8 then L113() else L114();
  L117():
    goto L25(r56);
  L137():
    r73 = dyn stop1("a variable in 'y' is not numeric");
    check L138() else D41();
  L140():
    x24 = force? x23;
    checkMissing(x24);
    c14 = `is.object`(x24);
    if c14 then L141() else L142(x24);
  L204():
    goto L47(r130);
  L206():
    p32 = prom<V +>{
      sym16 = ldf `rep.int`;
      base16 = ldf `rep.int` in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r133):
      return r133;
    L1():
      nrow = ldf nrow;
      p31 = prom<V +>{
        x47 = ld x;
        x48 = force? x47;
        checkMissing(x48);
        return x48;
      };
      r135 = dyn nrow(p31);
      rep_int = ldf `rep.int` in base;
      r136 = dyn rep_int(" ", r135);
      goto L0(r136);
    L2():
      r132 = dyn base16(" ", <lang nrow(x)>);
      goto L0(r132);
    };
    r138 = dyn data_frame1[Intercept](p32);
    check L207() else D82();
  L209():
    x50 = force? x49;
    checkMissing(x50);
    c23 = `is.object`(x50);
    if c23 then L210() else L211(x50);
  D41():
    deopt 134 [r73];
  D82():
    deopt 268 [r138];
  L28(dx5):
    names = ldf names in base;
    r55 = dyn names(dx5);
    check L116() else D26();
  L34(dx9):
    st x = dx9;
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L146() else L147();
  L50(dx15):
    st xf = dx15;
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L214() else L215();
  L113():
    dr4 = tryDispatchBuiltin.1("[", x16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L115() else L114();
  L114():
    __3 = ldf `[` in base;
    r54 = dyn __3(x16, <missing>, -1.0);
    goto L28(r54);
  L138():
    goto L33();
  L141():
    dr8 = tryDispatchBuiltin.1("[", x24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L143() else L142(dr8);
  L142(x26):
    sapply2 = ldf sapply;
    check L144() else D43();
  L207():
    st x = r138;
    st `i.fac` = 1.0;
    goto L49();
  L210():
    dr14 = tryDispatchBuiltin.1("[", x50);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L212() else L211(dr14);
  L211(x52):
    i_fac2 = ld `i.fac`;
    check L213() else D84();
  D26():
    deopt 96 [r55];
  D43():
    deopt 141 [x26];
  D84():
    deopt 278 [x52, i_fac2];
  L35(r80):
    st xnames = r80;
    cbind1 = ldf cbind;
    check L150() else D47();
  L51(r142):
    c25 = `as.logical`(r142);
    if c25 then L217() else L52();
  L115():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(dx4);
  L116():
    goto L27(r55);
  L143():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L34(dx8);
  L144():
    p16 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    p17 = prom<V +>{
      is_factor2 = ld `is.factor`;
      is_factor3 = force? is_factor2;
      checkMissing(is_factor3);
      return is_factor3;
    };
    r77 = dyn sapply2(p16, p17);
    check L145() else D44();
  L146():
    x29 = ld x;
    check L148() else D45();
  L147():
    r79 = dyn base10(<sym x>);
    goto L35(r79);
  L212():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L50(dx14);
  L213():
    i_fac3 = force? i_fac2;
    __10 = ldf `[` in base;
    r140 = dyn __10(x50, <missing>, i_fac3, FALSE);
    goto L50(r140);
  L214():
    ask1 = ld ask;
    check L216() else D85();
  L215():
    r141 = dyn base17(<sym ask>);
    goto L51(r141);
  D44():
    deopt 144 [x26, r77];
  D45():
    deopt 150 [x29];
  D47():
    deopt 156 [];
  D85():
    deopt 286 [ask1];
  L52():
    goto L55();
  L55():
    ask3 = ld ask;
    check L229() else D92();
  L145():
    __5 = ldf `[` in base;
    r78 = dyn __5(x24, <missing>, r77);
    goto L34(r78);
  L148():
    x30 = force? x29;
    checkMissing(x30);
    names1 = ldf names in base;
    r81 = dyn names1(x30);
    check L149() else D46();
  L150():
    p18 = prom<V +>{
      x31 = ld x;
      x32 = force? x31;
      checkMissing(x32);
      return x32;
    };
    p19 = prom<V +>{
      y21 = ld y;
      y22 = force? y21;
      checkMissing(y22);
      return y22;
    };
    r84 = dyn cbind1(p18, p19);
    check L151() else D48();
  L216():
    ask2 = force? ask1;
    checkMissing(ask2);
    c24 = `==`(ask2, NULL);
    goto L51(c24);
  L217():
    sym18 = ldf prod;
    base18 = ldf prod in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L218() else L219();
  D46():
    deopt 153 [r81];
  D48():
    deopt 159 [r84];
  D92():
    deopt 308 [ask3];
  L53(r144):
    nResp2 = ld nResp;
    check L223() else D89();
  L149():
    goto L35(r81);
  L151():
    st x = r84;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L152() else L153();
  L218():
    par1 = ldf par;
    check L220() else D86();
  L219():
    r143 = dyn base18(<lang par("mfcol")>);
    goto L53(r143);
  L229():
    ask4 = force? ask3;
    checkMissing(ask4);
    c33 = `as.logical`(ask4);
    if c33 then L230() else L56();
  D86():
    deopt 292 [];
  D89():
    deopt 296 [r144, nResp2];
  L36(r86):
    l1 = ld x;
    names__1 = ldf `names<-`;
    check L157() else D52();
  L56():
    goto L58();
  L58():
    nResp4 = ld nResp;
    check L236() else D95();
  L152():
    xnames = ld xnames;
    check L154() else D49();
  L153():
    r85 = dyn base11(<sym xnames>, <sym ynames>);
    goto L36(r85);
  L220():
    r145 = dyn par1("mfcol");
    check L221() else D87();
  L223():
    nResp3 = force? nResp2;
    checkMissing(nResp3);
    r147 = `<`(r144, nResp3);
    c26 = `as.logical`(r147);
    if c26 then L224() else L54(c26);
  L230():
    devAskNewPage = ldf devAskNewPage;
    check L231() else D93();
  D49():
    deopt 163 [xnames];
  D52():
    deopt 170 [r86, l1, r86];
  D87():
    deopt 294 [r145];
  D93():
    deopt 311 [];
  D95():
    deopt 321 [1, nResp4];
  L54(c28):
    st ask = c28;
    goto L55();
  L154():
    xnames1 = force? xnames;
    checkMissing(xnames1);
    ynames = ld ynames;
    check L155() else D50();
  L157():
    r88 = dyn names__1(l1, NULL, r86);
    check L158() else D53();
  L221():
    prod = ldf prod in base;
    r146 = dyn prod(r145);
    check L222() else D88();
  L224():
    dev_interactive = ldf `dev.interactive`;
    check L225() else D90();
  L231():
    p33 = prom<V +>{
      ask5 = ld ask;
      ask6 = force? ask5;
      checkMissing(ask6);
      return ask6;
    };
    r150 = dyn devAskNewPage(p33);
    check L232() else D94();
  L236():
    nResp5 = force? nResp4;
    checkMissing(nResp5);
    r155 = `:`(1, nResp5);
    s = toForSeq(r155);
    l2 = length(s);
    i = 0;
    goto L59(i);
  D50():
    deopt 165 [ynames];
  D53():
    deopt 172 [r86, r88];
  D88():
    deopt 296 [r146];
  D90():
    deopt 300 [c26];
  D94():
    deopt 313 [r150];
  L59(i1):
    i2 = `+`.1(i1, 1);
    c34 = `<`.1(l2, i2);
    if c34 then L237() else L60();
  L155():
    ynames1 = force? ynames;
    checkMissing(ynames1);
    c15 = ldf c in base;
    r87 = dyn c15(xnames1, ynames1);
    check L156() else D51();
  L158():
    st x = r88;
    goto L19(r86);
  L222():
    goto L53(r146);
  L225():
    r148 = dyn dev_interactive[orNone](TRUE);
    check L226() else D91();
  L232():
    st oask = r150;
    sym19 = ldf `on.exit`;
    base19 = ldf `on.exit` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L233() else L234();
  D51():
    deopt 168 [r87];
  D91():
    deopt 303 [c26, r148];
  L57(r152):
    goto L58();
  L60():
    x53 = `[[`(s, i2, NULL, TRUE);
    st j = x53;
    _plot_des = ldf `.plot.des`;
    check L238() else D96();
  L156():
    goto L36(r87);
  L226():
    c29 = `as.logical`(r148);
    c30 = `&&`(c26, c29);
    goto L54(c30);
  L233():
    on_exit = ldf `on.exit` in base;
    r153 = dyn on_exit(<lang devAskNewPage(oask)>);
    goto L57(r153);
  L234():
    r151 = dyn base19(<lang devAskNewPage(oask)>);
    goto L57(r151);
  L237():
    sym20 = ldf invisible;
    base20 = ldf invisible in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L240() else L241();
  D96():
    deopt 325 [i2];
  L61(r165):
    popenv;
    return r165;
  L238():
    p34 = prom<V +>{
      xf = ld xf;
      xf1 = force? xf;
      checkMissing(xf1);
      return xf1;
    };
    p35 = prom<V +>{
      ydata = ld ydata;
      ydata1 = force? ydata;
      checkMissing(ydata1);
      c35 = `is.object`(ydata1);
      if c35 then L1() else L2();
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", ydata1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      j = ld j;
      j1 = force? j;
      __11 = ldf `[` in base;
      r157 = dyn __11(ydata1, <missing>, j1);
      goto L0(r157);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p36 = prom<V +>{
      fun3 = ld fun;
      fun4 = force? fun3;
      checkMissing(fun4);
      return fun4;
    };
    p37 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      c36 = `is.object`(ylab4);
      if c36 then L1() else L2(ylab4);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", ylab4);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(ylab6):
      j2 = ld j;
      j3 = force? j2;
      __12 = ldf `[` in base;
      r160 = dyn __12(ylab6, j3);
      goto L0(r160);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p38 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    ddd1 = ld `...`;
    r163 = dyn _plot_des[, , fun, ylab, ylim, `...`](p34, p35, p36, p37, p38, ddd1);
    check L239() else D97();
  L240():
    invisible = ldf invisible in base;
    r166 = dyn invisible();
    check L242() else D98();
  L241():
    r164 = dyn base20();
    goto L61(r164);
  D97():
    deopt 335 [i2, r163];
  D98():
    deopt 342 [r166];
  L239():
    goto L59(i2);
  L242():
    goto L61(r166);
  }
}
fun inner606620067(x, y, fun, ylab, ylim, `...`) {
  (reg x:*, reg y:*, reg fun:*, reg ylab:*, reg ylim:*, reg ddd:dots) -+> V { var x:*, var y:*, var fun:*, var ylab:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg y1:*, reg y2:V, reg is_numeric:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r7:V, reg r8:V, reg c1:L, reg stop1:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg sapply:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg is_factor:*, reg is_factor1:V, reg p2:p(V +), reg r15:V, reg all:cls, reg r16:V, reg r17:V, reg c2:L, reg c4:V, reg is_factor2:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r19:V, reg r20:V, reg c5:L, reg c6:V, reg c8:L, reg stop2:cls, reg r21:V, reg ncol:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg y3:*, reg y4:V, reg anyNA:cls, reg r27:V, reg c9:L, reg fun1:*, reg fun2:V, reg r28:cls, reg fun3:cls, reg y5:*, reg y6:V, reg p5:p(V +), reg r31:V, reg lapply:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg r33:cls, reg p7:p(V +), reg r35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg unlist:cls, reg stats:*, reg stats1:V, reg p8:p(V +), reg r41:V, reg is_na:cls, reg r42:V, reg any:cls, reg r43:V, reg c10:L, reg warning:cls, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg ylim1:*, reg ylim2:V, reg c11:V, reg c12:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg sapply1:cls, reg stats2:*, reg stats3:V, reg p9:p(V +), reg range:*, reg range1:V, reg p10:p(V +), reg r54:V, reg tot:*, reg tot1:V, reg c13:cls, reg r55:V, reg range2:cls, reg r56:V, reg plot:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r58:V, reg r59:V, reg k:*, reg k1:V, reg r60:V, reg c14:cls, reg r61:V, reg p11:p(V +), reg ylim3:*, reg ylim4:V, reg p12:p(V +), reg axes:*, reg axes1:V, reg p13:p(V +), reg xlab:*, reg xlab1:V, reg p14:p(V +), reg ylab1:*, reg ylab2:V, reg p15:p(V +), reg main:*, reg main1:V, reg p16:p(V +), reg ddd1:dots?, reg r68:V, reg segments:cls, reg tot2:*, reg tot3:V, reg p17:p(V +), reg k2:*, reg k3:V, reg r70:V, reg p18:p(V +), reg tot4:*, reg tot5:V, reg p19:p(V +), reg ddd2:dots?, reg r73:V, reg k4:*, reg k5:V, reg r74:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x11:V, reg stats4:*, reg stats5:V, reg c16:L, reg i6:I, reg stats7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r75:V, reg segments1:cls, reg i11:*, reg i12:V, reg p20:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r77:V, reg r78:V, reg si:*, reg si1:V, reg min:cls, reg r79:V, reg p21:p(V +), reg i13:*, reg i14:V, reg p22:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r82:V, reg r83:V, reg si2:*, reg si3:V, reg max:cls, reg r84:V, reg p23:p(V +), reg ddd3:dots?, reg r86:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r89:V, reg i17:I, reg r90:I, reg r91:V, reg si4:*, reg si5:V, reg length:cls, reg r92:V, reg r93:V, reg s1:V, reg l1:I, reg i18:I, reg i19:I, reg i20:I, reg i21:I, reg c17:L, reg x12:V, reg si6:*, reg si7:V, reg c18:L, reg i28:I, reg i29:I, reg si9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i32:I, reg i33:I, reg dx3:V, reg j:*, reg j1:V, reg __1:cls, reg r94:V, reg segments2:cls, reg i34:*, reg i35:V, reg r95:V, reg p24:p(V +), reg sij:*, reg sij1:V, reg p25:p(V +), reg i36:*, reg i37:V, reg r98:V, reg p26:p(V +), reg sij2:*, reg sij3:V, reg p27:p(V +), reg ddd4:dots?, reg r101:V, reg text:cls, reg i38:*, reg i39:V, reg r102:V, reg p28:p(V +), reg sij4:*, reg sij5:V, reg p29:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r105:V, reg r106:V, reg sij6:*, reg sij7:V, reg names:cls, reg r107:V, reg p30:p(V +), reg ddd5:dots?, reg r109:V, reg axes2:*, reg axes3:V, reg c19:L, reg c21:V, reg xaxt:*, reg xaxt1:V, reg r110:V, reg c22:L, reg c23:V, reg c25:L, reg axis:cls, reg k6:*, reg k7:V, reg r111:V, reg p31:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r113:V, reg r114:V, reg stats8:*, reg stats9:V, reg names1:cls, reg r115:V, reg p32:p(V +), reg xaxt2:*, reg xaxt3:V, reg p33:p(V +), reg xtick:*, reg xtick1:V, reg p34:p(V +), reg par:cls, reg r119:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r120:V, reg r121:V, reg p35:*, reg p36:V, reg c26:L, reg p38:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r122:V, reg xtick2:*, reg xtick3:V, reg c27:L, reg p39:*, reg p40:V, reg c28:L, reg p42:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r123:V, reg dx8:V, reg c29:cls, reg r124:V, reg p43:p(V +), reg ddd6:dots?, reg r126:V |
    mkenv;
    st x = x;
    st y = y;
    st fun = fun;
    st ylab = ylab;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L0(NULL) else L0(ylim);
  L0(ylim_orDefault):
    st ylim = ylim_orDefault;
    st `...` = ddd;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L35() else L2();
  L31():
    y1 = ld y;
    check L33() else D0();
  L32():
    r = dyn base(<sym y>);
    goto L1(r);
  D0():
    deopt 2 [y1];
  L2():
    goto L3();
  L3():
    is_data_frame = ldf `is.data.frame`;
    check L39() else D4();
  L33():
    y2 = force? y1;
    checkMissing(y2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(y2);
    check L34() else D1();
  L35():
    stop = ldf stop;
    check L36() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L34():
    goto L1(r2);
  L36():
    r4 = dyn stop("'y' must be a numeric vector");
    check L37() else D3();
  L39():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r7 = dyn is_data_frame(p);
    check L40() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 16 [r7];
  L37():
    goto L3();
  L40():
    r8 = `!`(r7);
    c1 = `as.logical`(r8);
    if c1 then L41() else L4();
  L4():
    goto L5();
  L5():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L45() else L46();
  L41():
    stop1 = ldf stop;
    check L42() else D6();
  D6():
    deopt 19 [];
  L6(r12):
    r17 = `!`(r12);
    c2 = `as.logical`(r17);
    if c2 then L50() else L7(c2);
  L42():
    r9 = dyn stop1("'x' must be a data frame");
    check L43() else D7();
  L45():
    sapply = ldf sapply;
    check L47() else D8();
  L46():
    r11 = dyn base1(<lang sapply(x, is.factor)>);
    goto L6(r11);
  D7():
    deopt 21 [r9];
  D8():
    deopt 27 [];
  L7(c4):
    c8 = `as.logical`(c4);
    if c8 then L54() else L8();
  L43():
    goto L5();
  L47():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      is_factor = ld `is.factor`;
      is_factor1 = force? is_factor;
      checkMissing(is_factor1);
      return is_factor1;
    };
    r15 = dyn sapply(p1, p2);
    check L48() else D9();
  L50():
    is_factor2 = ldf `is.factor`;
    check L51() else D11();
  D9():
    deopt 30 [r15];
  D11():
    deopt 35 [c2];
  L8():
    goto L9();
  L9():
    ncol = ldf ncol;
    check L58() else D15();
  L48():
    all = ldf all in base;
    r16 = dyn all(r15);
    check L49() else D10();
  L51():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r19 = dyn is_factor2(p3);
    check L52() else D12();
  L54():
    stop2 = ldf stop;
    check L55() else D13();
  D10():
    deopt 32 [r16];
  D12():
    deopt 37 [c2, r19];
  D13():
    deopt 41 [];
  D15():
    deopt 47 [];
  L49():
    goto L6(r16);
  L52():
    r20 = `!`(r19);
    c5 = `as.logical`(r20);
    c6 = `&&`(c2, c5);
    goto L7(c6);
  L55():
    r21 = dyn stop2("all columns/components of 'x' must be factors");
    check L56() else D14();
  L58():
    p4 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r24 = dyn ncol(p4);
    check L59() else D16();
  D14():
    deopt 43 [r21];
  D16():
    deopt 49 [r24];
  L56():
    goto L9();
  L59():
    st k = r24;
    sym2 = ldf anyNA;
    base2 = ldf anyNA in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L10(r26):
    c9 = `as.logical`(r26);
    if c9 then L64() else L11();
  L60():
    y3 = ld y;
    check L62() else D17();
  L61():
    r25 = dyn base2(<sym y>);
    goto L10(r25);
  D17():
    deopt 53 [y3];
  L11():
    goto L12();
  L12():
    fun3 = ldf fun;
    check L67() else D20();
  L62():
    y4 = force? y3;
    checkMissing(y4);
    anyNA = ldf anyNA in base;
    r27 = dyn anyNA(y4);
    check L63() else D18();
  L64():
    fun1 = ld fun;
    check L65() else D19();
  D18():
    deopt 56 [r27];
  D19():
    deopt 57 [fun1];
  D20():
    deopt 66 [];
  L63():
    goto L10(r27);
  L65():
    fun2 = force? fun1;
    checkMissing(fun2);
    st FUN = fun2;
    r28 = clos inner883694641;
    st fun = r28;
    goto L12();
  L67():
    p5 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r31 = dyn fun3(p5);
    check L68() else D21();
  D21():
    deopt 68 [r31];
  L68():
    st tot = r31;
    lapply = ldf lapply;
    check L69() else D22();
  D22():
    deopt 71 [];
  L69():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p7 = prom<V +>{
      r33 = clos inner1945898059;
      return r33;
    };
    r35 = dyn lapply(p6, p7);
    check L70() else D23();
  D23():
    deopt 74 [r35];
  L70():
    st stats = r35;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L13(r37):
    c10 = `as.logical`(r37);
    if c10 then L79() else L15();
  L71():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L73() else L74();
  L72():
    r36 = dyn base3(<lang is.na(unlist(stats))>);
    goto L13(r36);
  L14(r39):
    any = ldf any in base;
    r43 = dyn any(r39);
    check L78() else D27();
  L15():
    goto L16();
  L16():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  L73():
    unlist = ldf unlist;
    check L75() else D24();
  L74():
    r38 = dyn base4(<lang unlist(stats)>);
    goto L14(r38);
  L79():
    warning = ldf warning;
    check L80() else D28();
  D24():
    deopt 81 [];
  D27():
    deopt 87 [r43];
  D28():
    deopt 89 [];
  L17(r47):
    c12 = `as.logical`(r47);
    if c12 then L86() else L18();
  L75():
    p8 = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r41 = dyn unlist(p8);
    check L76() else D25();
  L78():
    goto L13(r43);
  L80():
    r44 = dyn warning[, `call.`]("some levels of the factors are empty", FALSE);
    check L81() else D29();
  L83():
    ylim1 = ld ylim;
    check L85() else D30();
  L84():
    r46 = dyn base5(<sym ylim>);
    goto L17(r46);
  D25():
    deopt 83 [r41];
  D29():
    deopt 93 [r44];
  D30():
    deopt 97 [ylim1];
  L18():
    goto L21();
  L21():
    plot = ldf plot;
    check L97() else D36();
  L76():
    is_na = ldf `is.na` in base;
    r42 = dyn is_na(r41);
    check L77() else D26();
  L81():
    goto L16();
  L85():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c11 = `==`(ylim2, NULL);
    goto L17(c11);
  L86():
    sym6 = ldf range;
    base6 = ldf range in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L87() else L88();
  D26():
    deopt 85 [r42];
  D36():
    deopt 121 [];
  L19(r49):
    st ylim = r49;
    goto L21();
  L77():
    goto L14(r42);
  L87():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L88():
    r48 = dyn base6(<lang c(sapply(stats, range, na.rm=TRUE), tot)>);
    goto L19(r48);
  L97():
    p11 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r59):
      return r59;
    L1():
      k = ld k;
      k1 = force? k;
      checkMissing(k1);
      r60 = `+`(k1, 1.0);
      c14 = ldf c in base;
      r61 = dyn c14(0.0, r60);
      goto L0(r61);
    L2():
      r58 = dyn base8(0.0, <lang `+`(k, 1.0)>);
      goto L0(r58);
    };
    p12 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    p13 = prom<V +>{
      axes = ld axes;
      axes1 = force? axes;
      checkMissing(axes1);
      return axes1;
    };
    p14 = prom<V +>{
      xlab = ld xlab;
      xlab1 = force? xlab;
      checkMissing(xlab1);
      return xlab1;
    };
    p15 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p16 = prom<V +>{
      main = ld main;
      main1 = force? main;
      checkMissing(main1);
      return main1;
    };
    ddd1 = ld `...`;
    r68 = dyn plot[, , type, axes, xaxt, xlab, ylab, main, adj, `...`](p11, p12, "n", p13, "n", p14, p15, p16, 0.5, ddd1);
    check L98() else D37();
  D37():
    deopt 139 [r68];
  L20(r51):
    range2 = ldf range in base;
    r56 = dyn range2(r51);
    check L95() else D35();
  L89():
    sapply1 = ldf sapply;
    check L91() else D31();
  L90():
    r50 = dyn base7(<lang sapply(stats, range, na.rm=TRUE)>, <sym tot>);
    goto L20(r50);
  L98():
    segments = ldf segments;
    check L99() else D38();
  D31():
    deopt 105 [];
  D35():
    deopt 116 [r56];
  D38():
    deopt 141 [];
  L91():
    p9 = prom<V +>{
      stats2 = ld stats;
      stats3 = force? stats2;
      checkMissing(stats3);
      return stats3;
    };
    p10 = prom<V +>{
      range = ld range;
      range1 = force? range;
      checkMissing(range1);
      return range1;
    };
    r54 = dyn sapply1[, , `na.rm`](p9, p10, TRUE);
    check L92() else D32();
  L95():
    goto L19(r56);
  L99():
    p17 = prom<V +>{
      tot2 = ld tot;
      tot3 = force? tot2;
      checkMissing(tot3);
      return tot3;
    };
    p18 = prom<V +>{
      k2 = ld k;
      k3 = force? k2;
      checkMissing(k3);
      r70 = `+`(k3, 0.5);
      return r70;
    };
    p19 = prom<V +>{
      tot4 = ld tot;
      tot5 = force? tot4;
      checkMissing(tot5);
      return tot5;
    };
    ddd2 = ld `...`;
    r73 = dyn segments[, , , , `...`](0.5, p17, p18, p19, ddd2);
    check L100() else D39();
  D32():
    deopt 110 [r54];
  D39():
    deopt 147 [r73];
  L92():
    tot = ld tot;
    check L93() else D33();
  L100():
    k4 = ld k;
    check L101() else D40();
  D33():
    deopt 111 [tot];
  D40():
    deopt 149 [1, k4];
  L93():
    tot1 = force? tot;
    checkMissing(tot1);
    c13 = ldf c in base;
    r55 = dyn c13(r54, tot1);
    check L94() else D34();
  L101():
    k5 = force? k4;
    checkMissing(k5);
    r74 = `:`(1, k5);
    s = toForSeq(r74);
    l = length(s);
    i = 0;
    goto L22(i);
  D34():
    deopt 114 [r55];
  L22(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l, i2);
    if c15 then L102() else L28();
  L94():
    goto L20(r55);
  L28():
    x11 = `[[`(s, i2, NULL, TRUE);
    st i = x11;
    stats4 = ld stats;
    check L103() else D41();
  L102():
    axes2 = ld axes;
    check L124() else D53();
  D41():
    deopt 152 [i2, stats4];
  D53():
    deopt 204 [axes2];
  L103():
    stats5 = force? stats4;
    checkMissing(stats5);
    c16 = `is.object`(stats5);
    if c16 then L104() else L105(i2, stats5);
  L124():
    axes3 = force? axes2;
    checkMissing(axes3);
    c19 = `as.logical`(axes3);
    if c19 then L125() else L29(c19);
  L23(i8, dx1):
    st si = dx1;
    segments1 = ldf segments;
    check L108() else D43();
  L29(c21):
    c25 = `as.logical`(c21);
    if c25 then L128() else L30();
  L104():
    dr = tryDispatchBuiltin.1("[[", stats5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L106() else L105(i2, dr);
  L105(i6, stats7):
    i9 = ld i;
    check L107() else D42();
  L125():
    xaxt = ld xaxt;
    check L126() else D54();
  D42():
    deopt 154 [i6, stats7, i9];
  D43():
    deopt 159 [i8];
  D54():
    deopt 206 [c19, xaxt];
  L30():
    invisible.0();
    popenv;
    return NULL;
  L106():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(i2, dx);
  L107():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r75 = dyn __(stats7, i10);
    goto L23(i6, r75);
  L108():
    p20 = prom<V +>{
      i11 = ld i;
      i12 = force? i11;
      checkMissing(i12);
      return i12;
    };
    p21 = prom<V +>{
      sym9 = ldf min;
      base9 = ldf min in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r78):
      return r78;
    L1():
      si = ld si;
      si1 = force? si;
      checkMissing(si1);
      min = ldf min in base;
      r79 = dyn min(si1, TRUE);
      goto L0(r79);
    L2():
      r77 = dyn base9[, `na.rm`](<sym si>, TRUE);
      goto L0(r77);
    };
    p22 = prom<V +>{
      i13 = ld i;
      i14 = force? i13;
      checkMissing(i14);
      return i14;
    };
    p23 = prom<V +>{
      sym10 = ldf max;
      base10 = ldf max in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r83):
      return r83;
    L1():
      si2 = ld si;
      si3 = force? si2;
      checkMissing(si3);
      max = ldf max in base;
      r84 = dyn max(si3, TRUE);
      goto L0(r84);
    L2():
      r82 = dyn base10[, `na.rm`](<sym si>, TRUE);
      goto L0(r82);
    };
    ddd3 = ld `...`;
    r86 = dyn segments1[, , , , `...`](p20, p21, p22, p23, ddd3);
    check L109() else D44();
  L126():
    xaxt1 = force? xaxt;
    checkMissing(xaxt1);
    r110 = `!=`(xaxt1, "n");
    c22 = `as.logical`(r110);
    c23 = `&&`(c19, c22);
    goto L29(c23);
  L128():
    axis = ldf axis;
    check L129() else D55();
  D44():
    deopt 165 [i8, r86];
  D55():
    deopt 212 [];
  L109():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L110() else L111();
  L129():
    p31 = prom<V +>{
      k6 = ld k;
      k7 = force? k6;
      checkMissing(k7);
      r111 = `:`(1, k7);
      return r111;
    };
    p32 = prom<V +>{
      sym13 = ldf names;
      base13 = ldf names in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r114):
      return r114;
    L1():
      stats8 = ld stats;
      stats9 = force? stats8;
      checkMissing(stats9);
      names1 = ldf names in base;
      r115 = dyn names1(stats9);
      goto L0(r115);
    L2():
      r113 = dyn base13(<sym stats>);
      goto L0(r113);
    };
    p33 = prom<V +>{
      xaxt2 = ld xaxt;
      xaxt3 = force? xaxt2;
      checkMissing(xaxt3);
      return xaxt3;
    };
    p34 = prom<V +>{
      xtick = ld xtick;
      xtick1 = force? xtick;
      checkMissing(xtick1);
      return xtick1;
    };
    p43 = prom<V +>{
      par = ldf par;
      r119 = dyn par("mgp");
      st p = r119;
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L5() else L6();
    L0(r121):
      return r121;
    L5():
      p35 = ld p;
      p36 = force? p35;
      checkMissing(p36);
      c26 = `is.object`(p36);
      if c26 then L7() else L8(p36);
    L6():
      r120 = dyn base14(<lang `[`(p, 1)>, <lang if(xtick, `[`(p, 2), 0.0)>, 0.0);
      goto L0(r120);
    L1(dx5):
      xtick2 = ld xtick;
      xtick3 = force? xtick2;
      checkMissing(xtick3);
      c27 = `as.logical`(xtick3);
      if c27 then L10() else L2();
    L7():
      dr4 = tryDispatchBuiltin.1("[", p36);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L9() else L8(dr4);
    L8(p38):
      __2 = ldf `[` in base;
      r122 = dyn __2(p38, 1);
      goto L1(r122);
    L2():
      goto L4(0.0);
    L4(dx8):
      c29 = ldf c in base;
      r124 = dyn c29(dx5, dx8, 0.0);
      goto L0(r124);
    L9():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    L10():
      p39 = ld p;
      p40 = force? p39;
      checkMissing(p40);
      c28 = `is.object`(p40);
      if c28 then L11() else L12(p40);
    L3(dx7):
      goto L4(dx7);
    L11():
      dr6 = tryDispatchBuiltin.1("[", p40);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L13() else L12(dr6);
    L12(p42):
      __3 = ldf `[` in base;
      r123 = dyn __3(p42, 2);
      goto L3(r123);
    L13():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L3(dx6);
    };
    ddd6 = ld `...`;
    r126 = dyn axis[, at, , xaxt, tick, mgp, `...`](1.0, p31, p32, p33, p34, p43, ddd6);
    check L130() else D56();
  D56():
    deopt 224 [r126];
  L24(i17, r90, r91):
    r93 = `:`(r90, r91);
    s1 = toForSeq(r93);
    l1 = length(s1);
    i18 = 0;
    goto L25(i17, i18);
  L110():
    si4 = ld si;
    check L112() else D45();
  L111():
    r89 = dyn base11(<sym si>);
    goto L24(i8, 1, r89);
  L130():
    popenv;
    return r126;
  D45():
    deopt 169 [i8, 1, si4];
  L25(i19, i20):
    i21 = `+`.1(i20, 1);
    c17 = `<`.1(l1, i21);
    if c17 then L114() else L27();
  L112():
    si5 = force? si4;
    checkMissing(si5);
    length = ldf length in base;
    r92 = dyn length(si5);
    check L113() else D46();
  D46():
    deopt 172 [i8, 1, r92];
  L27():
    x12 = `[[`(s1, i21, NULL, TRUE);
    st j = x12;
    si6 = ld si;
    check L115() else D47();
  L113():
    goto L24(i8, 1, r92);
  L114():
    goto L22(i19);
  D47():
    deopt 174 [i19, i21, si6];
  L115():
    si7 = force? si6;
    checkMissing(si7);
    c18 = `is.object`(si7);
    if c18 then L116() else L117(i19, i21, si7);
  L26(i32, i33, dx3):
    st sij = dx3;
    segments2 = ldf segments;
    check L120() else D49();
  L116():
    dr2 = tryDispatchBuiltin.1("[", si7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L118() else L117(i19, i21, dr2);
  L117(i28, i29, si9):
    j = ld j;
    check L119() else D48();
  D48():
    deopt 176 [i28, i29, si9, j];
  D49():
    deopt 181 [i32, i33];
  L118():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(i19, i21, dx2);
  L119():
    j1 = force? j;
    __1 = ldf `[` in base;
    r94 = dyn __1(si9, j1);
    goto L26(i28, i29, r94);
  L120():
    p24 = prom<V +>{
      i34 = ld i;
      i35 = force? i34;
      checkMissing(i35);
      r95 = `-`(i35, 0.05);
      return r95;
    };
    p25 = prom<V +>{
      sij = ld sij;
      sij1 = force? sij;
      checkMissing(sij1);
      return sij1;
    };
    p26 = prom<V +>{
      i36 = ld i;
      i37 = force? i36;
      checkMissing(i37);
      r98 = `+`(i37, 0.05);
      return r98;
    };
    p27 = prom<V +>{
      sij2 = ld sij;
      sij3 = force? sij2;
      checkMissing(sij3);
      return sij3;
    };
    ddd4 = ld `...`;
    r101 = dyn segments2[, , , , `...`](p24, p25, p26, p27, ddd4);
    check L121() else D50();
  D50():
    deopt 187 [i32, i33, r101];
  L121():
    text = ldf text;
    check L122() else D51();
  D51():
    deopt 189 [i32, i33];
  L122():
    p28 = prom<V +>{
      i38 = ld i;
      i39 = force? i38;
      checkMissing(i39);
      r102 = `-`(i39, 0.1);
      return r102;
    };
    p29 = prom<V +>{
      sij4 = ld sij;
      sij5 = force? sij4;
      checkMissing(sij5);
      return sij5;
    };
    p30 = prom<V +>{
      sym12 = ldf names;
      base12 = ldf names in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r106):
      return r106;
    L1():
      sij6 = ld sij;
      sij7 = force? sij6;
      checkMissing(sij7);
      names = ldf names in base;
      r107 = dyn names(sij7);
      goto L0(r107);
    L2():
      r105 = dyn base12(<sym sij>);
      goto L0(r105);
    };
    ddd5 = ld `...`;
    r109 = dyn text[, , labels, adj, `...`](p28, p29, p30, 1.0, ddd5);
    check L123() else D52();
  D52():
    deopt 197 [i32, i33, r109];
  L123():
    goto L25(i32, i33);
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg FUN:cls, reg u1:*, reg u2:V, reg c:L, reg u4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg u7:V, reg r1:V, reg u8:*, reg u9:V, reg is_na:cls, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V |
    mkenv;
    st u = u;
    FUN = ldf FUN;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      c = `is.object`(u2);
      if c then L2() else L3(u2);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", u2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(u4):
      sym = ldf `is.na`;
      base = ldf `is.na` in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(u7, r1):
      r3 = `!`(r1);
      __ = ldf `[` in base;
      r4 = dyn __(u7, r3);
      goto L0(r4);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      u8 = ld u;
      u9 = force? u8;
      checkMissing(u9);
      is_na = ldf `is.na` in base;
      r2 = dyn is_na(u9);
      goto L1(u4, r2);
    L6():
      r = dyn base(<sym u>);
      goto L1(u4, r);
    };
    r6 = dyn FUN(p);
    check L1() else D1();
  D1():
    deopt 3 [r6];
  L1():
    popenv;
    return r6;
  }
}
fun inner1945898059(xc) {
  (reg xc:*) -+> V { var xc:*, reg tapply:cls, reg y:*, reg y1:V, reg p:p(V +), reg xc1:*, reg xc2:V, reg p1:p(V +), reg fun:*, reg fun1:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st xc = xc;
    tapply = ldf tapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p1 = prom<V +>{
      xc1 = ld xc;
      xc2 = force? xc1;
      checkMissing(xc2);
      return xc2;
    };
    p2 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    r3 = dyn tapply(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}