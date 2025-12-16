fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner962673497;
    st `contour.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner962673497(x, y, z, nlevels, levels, labels, xlim, ylim, zlim, labcex, drawlabels, method, vfont, axes, `frame.plot`, col, lty, lwd, add, `...`) {
  (reg x:*, reg y:*, reg z:*, reg nlevels:*, reg levels:*, reg labels:*, reg xlim:*, reg ylim:*, reg zlim:*, reg labcex:*, reg drawlabels:*, reg method:*, reg vfont:*, reg axes:*, reg frame_plot:*, reg col:*, reg lty:*, reg lwd:*, reg add:*, reg ddd:dots) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg seq:cls, reg nrow:cls, reg z1:*, reg z2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var y:*, reg y_isMissing:L, reg y_orDefault:*, reg seq1:cls, reg ncol:cls, reg z3:*, reg z4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), var z:*, var nlevels:*, reg nlevels_isMissing:L, reg nlevels_orDefault:*, var levels:*, reg levels_isMissing:L, reg levels_orDefault:*, reg pretty:cls, reg zlim1:*, reg zlim2:V, reg p6:p(V +), reg nlevels1:*, reg nlevels2:V, reg p7:p(V +), reg r12:V, reg p8:p(V +), var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg x1:*, reg x2:V, reg range:cls, reg r16:V, reg p9:p(V +), var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg y1:*, reg y2:V, reg range1:cls, reg r20:V, reg p10:p(V +), var zlim:*, reg zlim_isMissing:L, reg zlim_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg z5:*, reg z6:V, reg range2:cls, reg r24:V, reg p11:p(V +), var labcex:*, reg labcex_isMissing:L, reg labcex_orDefault:*, var drawlabels:*, reg drawlabels_isMissing:L, reg drawlabels_orDefault:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, var vfont:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, reg axes1:*, reg axes2:V, reg p12:p(V +), var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r27:V, reg p13:p(V +), var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par1:cls, reg r29:V, reg p14:p(V +), var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, reg par2:cls, reg r31:V, reg p15:p(V +), var add:*, reg add_isMissing:L, reg add_orDefault:*, var `...`:dots?, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg missing:cls, reg r35:V, reg c:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg missing1:cls, reg r38:V, reg r39:V, reg c1:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg x3:*, reg x4:V, reg is_list:cls, reg r42:V, reg c2:L, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r43:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r44:V, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r45:V, reg dx6:V, reg x17:*, reg x18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg nrow1:cls, reg z7:*, reg z8:V, reg p16:p(V +), reg r49:V, reg seq_int:cls, reg r50:V, reg dx7:V, reg stop:cls, reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg x19:*, reg x20:V, reg is_list1:cls, reg r54:V, reg c6:L, reg x21:*, reg x22:V, reg c7:L, reg x24:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg r55:V, reg x25:*, reg x26:V, reg c8:L, reg x28:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg r56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg diff:cls, reg x29:*, reg x30:V, reg p17:p(V +), reg r60:V, reg r61:V, reg any:cls, reg r62:V, reg c9:L, reg c10:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r63:V, reg c14:L, reg r64:V, reg diff1:cls, reg y3:*, reg y4:V, reg p18:p(V +), reg r66:V, reg r67:V, reg any1:cls, reg r68:V, reg c15:L, reg c16:V, reg c18:L, reg stop1:cls, reg r69:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r71:V, reg r72:V, reg z9:*, reg z10:V, reg is_matrix:cls, reg r73:V, reg r74:V, reg c19:L, reg c20:V, reg nrow2:cls, reg z11:*, reg z12:V, reg p19:p(V +), reg r76:V, reg r77:V, reg c22:L, reg c23:V, reg c25:L, reg c26:V, reg ncol1:cls, reg z13:*, reg z14:V, reg p20:p(V +), reg r79:V, reg r80:V, reg c28:L, reg c29:V, reg c31:L, reg stop2:cls, reg r81:V, reg add1:*, reg add2:V, reg r83:V, reg c32:L, reg r84:cls, reg r85:cls, reg plot_new:cls, reg r86:V, reg localPlotWindow:cls, reg xlim1:*, reg xlim2:V, reg p21:p(V +), reg ylim1:*, reg ylim2:V, reg p22:p(V +), reg ddd1:dots?, reg r89:V, reg localTitle:cls, reg ddd2:dots?, reg r90:V, reg pmatch:cls, reg method1:*, reg method2:V, reg c33:L, reg method4:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg __:cls, reg r92:V, reg p23:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r94:V, reg r95:V, reg c34:cls, reg r96:V, reg p24:p(V +), reg r98:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r99:V, reg r100:V, reg missing2:cls, reg r101:V, reg c35:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r102:V, reg r103:V, reg C_contourDef:*, reg C_contourDef1:V, reg vargs:dots, reg r104:V, reg c36:L, reg r105:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r106:V, reg c37:cls, reg r107:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r109:V, reg r110:V, reg vfont1:*, reg vfont2:V, reg c38:V, reg r111:V, reg c39:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r112:V, reg r113:V, reg pmatch1:cls, reg vfont3:*, reg vfont4:V, reg c40:L, reg vfont6:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg __1:cls, reg r114:V, reg p25:p(V +), reg Hershey:*, reg Hershey1:V, reg c41:L, reg Hershey3:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg r116:V, reg p26:p(V +), reg r118:V, reg pmatch2:cls, reg vfont7:*, reg vfont8:V, reg c42:L, reg vfont10:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg __2:cls, reg r119:V, reg p27:p(V +), reg Hershey4:*, reg Hershey5:V, reg c43:L, reg Hershey7:V, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg r121:V, reg p28:p(V +), reg r123:V, reg c44:cls, reg r124:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r126:V, reg r127:V, reg labels1:*, reg labels2:V, reg c45:V, reg r128:V, reg c46:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r129:V, reg r130:V, reg labels3:*, reg labels4:V, reg as_character:cls, reg r131:V, reg isTRUE:cls, reg drawlabels1:*, reg drawlabels2:V, reg p29:p(V +), reg r133:V, reg c47:L, reg c49:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r134:V, reg c52:L, reg r135:V, reg labels5:*, reg labels6:V, reg length:cls, reg r136:V, reg r137:V, reg c53:L, reg c54:V, reg c56:L, reg stop3:cls, reg r138:V, reg r139:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r141:V, reg C_contour:*, reg C_contour1:V, reg x31:*, reg x32:V, reg y5:*, reg y6:V, reg z15:*, reg z16:V, reg levels1:*, reg levels2:V, reg labels7:*, reg labels8:V, reg labcex1:*, reg labcex2:V, reg drawlabels3:*, reg drawlabels4:V, reg method5:*, reg method6:V, reg vfont11:*, reg vfont12:V, reg col1:*, reg col2:V, reg lty1:*, reg lty2:V, reg lwd1:*, reg lwd2:V, reg _External_graphics:cls, reg r143:V, reg add3:*, reg add4:V, reg r144:V, reg c57:L, reg r145:cls, reg r146:cls, reg axes3:*, reg axes4:V, reg c58:L, reg localAxis:cls, reg x33:*, reg x34:V, reg p30:p(V +), reg ddd3:dots?, reg r148:V, reg localAxis1:cls, reg y7:*, reg y8:V, reg p31:p(V +), reg ddd4:dots?, reg r150:V, reg frame_plot1:*, reg frame_plot2:V, reg c59:L, reg localBox:cls, reg ddd5:dots?, reg r152:V, reg r153:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r155:V, reg r156:V, reg invisible:cls, reg r157:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p2 = prom<V +>{
      seq = ldf seq;
      p1 = prom<V +>{
        nrow = ldf nrow;
        p = prom<V +>{
          z1 = ld z;
          z2 = force? z1;
          checkMissing(z2);
          return z2;
        };
        r1 = dyn nrow(p);
        return r1;
      };
      r3 = dyn seq[, , `length.out`](0.0, 1.0, p1);
      return r3;
    };
    goto L1(p2);
  L1(x_orDefault):
    st x = x_orDefault;
    y_isMissing = missing.0(y);
    if y_isMissing then L2() else L3(y);
  L2():
    p5 = prom<V +>{
      seq1 = ldf seq;
      p4 = prom<V +>{
        ncol = ldf ncol;
        p3 = prom<V +>{
          z3 = ld z;
          z4 = force? z3;
          checkMissing(z4);
          return z4;
        };
        r6 = dyn ncol(p3);
        return r6;
      };
      r8 = dyn seq1[, , `length.out`](0.0, 1.0, p4);
      return r8;
    };
    goto L3(p5);
  L3(y_orDefault):
    st y = y_orDefault;
    st z = z;
    nlevels_isMissing = missing.0(nlevels);
    if nlevels_isMissing then L4(10.0) else L4(nlevels);
  L4(nlevels_orDefault):
    st nlevels = nlevels_orDefault;
    levels_isMissing = missing.0(levels);
    if levels_isMissing then L5() else L6(levels);
  L5():
    p8 = prom<V +>{
      pretty = ldf pretty;
      p6 = prom<V +>{
        zlim1 = ld zlim;
        zlim2 = force? zlim1;
        checkMissing(zlim2);
        return zlim2;
      };
      p7 = prom<V +>{
        nlevels1 = ld nlevels;
        nlevels2 = force? nlevels1;
        checkMissing(nlevels2);
        return nlevels2;
      };
      r12 = dyn pretty(p6, p7);
      return r12;
    };
    goto L6(p8);
  L6(levels_orDefault):
    st levels = levels_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L7(NULL) else L7(labels);
  L7(labels_orDefault):
    st labels = labels_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L8() else L9(xlim);
  L8():
    p9 = prom<V +>{
      sym = ldf range;
      base = ldf range in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r15):
      return r15;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      range = ldf range in base;
      r16 = dyn range(x2, TRUE);
      goto L0(r16);
    L2():
      r14 = dyn base[, finite](<sym x>, TRUE);
      goto L0(r14);
    };
    goto L9(p9);
  L9(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L10() else L11(ylim);
  L10():
    p10 = prom<V +>{
      sym1 = ldf range;
      base1 = ldf range in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      range1 = ldf range in base;
      r20 = dyn range1(y2, TRUE);
      goto L0(r20);
    L2():
      r18 = dyn base1[, finite](<sym y>, TRUE);
      goto L0(r18);
    };
    goto L11(p10);
  L11(ylim_orDefault):
    st ylim = ylim_orDefault;
    zlim_isMissing = missing.0(zlim);
    if zlim_isMissing then L12() else L13(zlim);
  L12():
    p11 = prom<V +>{
      sym2 = ldf range;
      base2 = ldf range in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      z5 = ld z;
      z6 = force? z5;
      checkMissing(z6);
      range2 = ldf range in base;
      r24 = dyn range2(z6, TRUE);
      goto L0(r24);
    L2():
      r22 = dyn base2[, finite](<sym z>, TRUE);
      goto L0(r22);
    };
    goto L13(p11);
  L13(zlim_orDefault):
    st zlim = zlim_orDefault;
    labcex_isMissing = missing.0(labcex);
    if labcex_isMissing then L14(0.6) else L14(labcex);
  L14(labcex_orDefault):
    st labcex = labcex_orDefault;
    drawlabels_isMissing = missing.0(drawlabels);
    if drawlabels_isMissing then L15(TRUE) else L15(drawlabels);
  L15(drawlabels_orDefault):
    st drawlabels = drawlabels_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L16("flattest") else L16(method);
  L16(method_orDefault):
    st method = method_orDefault;
    st vfont = vfont;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L17(TRUE) else L17(axes);
  L17(axes_orDefault):
    st axes = axes_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L18() else L19(frame_plot);
  L18():
    p12 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    goto L19(p12);
  L19(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L20() else L21(col);
  L20():
    p13 = prom<V +>{
      par = ldf par;
      r27 = dyn par("fg");
      return r27;
    };
    goto L21(p13);
  L21(col_orDefault):
    st col = col_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L22() else L23(lty);
  L22():
    p14 = prom<V +>{
      par1 = ldf par;
      r29 = dyn par1("lty");
      return r29;
    };
    goto L23(p14);
  L23(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L24() else L25(lwd);
  L24():
    p15 = prom<V +>{
      par2 = ldf par;
      r31 = dyn par2("lwd");
      return r31;
    };
    goto L25(p15);
  L25(lwd_orDefault):
    st lwd = lwd_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L26(FALSE) else L26(add);
  L26(add_orDefault):
    st add = add_orDefault;
    st `...` = ddd;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L77() else L78();
  L27(r34):
    c = `as.logical`(r34);
    if c then L79() else L28();
  L77():
    missing = ldf missing in base;
    r35 = dyn missing(<sym z>);
    goto L27(r35);
  L78():
    r33 = dyn base3(<sym z>);
    goto L27(r33);
  L28():
    sym7 = ldf `is.list`;
    base7 = ldf `is.list` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L114() else L115();
  L36():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L130() else L131();
  L79():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L80() else L81();
  L29(r37):
    r39 = `!`(r37);
    c1 = `as.logical`(r39);
    if c1 then L82() else L30();
  L37(r53):
    c6 = `as.logical`(r53);
    if c6 then L118() else L38();
  L39(r58):
    c9 = `as.logical`(r58);
    if c9 then L40(c9) else L135();
  L80():
    missing1 = ldf missing in base;
    r38 = dyn missing1(<sym x>);
    goto L29(r38);
  L81():
    r36 = dyn base4(<sym x>);
    goto L29(r36);
  L114():
    x19 = ld x;
    check L116() else D11();
  L115():
    r52 = dyn base7(<sym x>);
    goto L37(r52);
  L130():
    diff = ldf diff;
    check L132() else D15();
  L131():
    r57 = dyn base8(<lang `<=`(diff(x), 0.0)>);
    goto L39(r57);
  D11():
    deopt 46 [x19];
  D15():
    deopt 63 [];
  L30():
    stop = ldf stop;
    check L111() else D9();
  L35(dx7):
    goto L36();
  L38():
    goto L36();
  L40(c10):
    c18 = `as.logical`(c10);
    if c18 then L142() else L42();
  L82():
    sym5 = ldf `is.list`;
    base5 = ldf `is.list` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  L116():
    x20 = force? x19;
    checkMissing(x20);
    is_list1 = ldf `is.list` in base;
    r54 = dyn is_list1(x20);
    check L117() else D12();
  L118():
    x21 = ld x;
    check L119() else D13();
  L132():
    p17 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    r60 = dyn diff(p17);
    check L133() else D16();
  L135():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L136() else L137();
  D9():
    deopt 41 [];
  D12():
    deopt 49 [r54];
  D13():
    deopt 50 [x21];
  D16():
    deopt 65 [r60];
  L31(r41):
    c2 = `as.logical`(r41);
    if c2 then L87() else L32();
  L41(c14, r64):
    c15 = `as.logical`(r64);
    c16 = `||`(c14, c15);
    goto L40(c16);
  L42():
    goto L43();
  L43():
    sym10 = ldf `is.matrix`;
    base10 = ldf `is.matrix` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L146() else L147();
  L83():
    x3 = ld x;
    check L85() else D0();
  L84():
    r40 = dyn base5(<sym x>);
    goto L31(r40);
  L111():
    r51 = dyn stop("no 'z' matrix specified");
    check L112() else D10();
  L117():
    goto L37(r54);
  L119():
    x22 = force? x21;
    checkMissing(x22);
    c7 = `is.object`(x22);
    if c7 then L121() else L122(x22);
  L133():
    r61 = `<=`(r60, 0.0);
    any = ldf any in base;
    r62 = dyn any(r61);
    check L134() else D17();
  L136():
    diff1 = ldf diff;
    check L138() else D18();
  L137():
    r63 = dyn base9(<lang `<=`(diff(y), 0.0)>);
    goto L41(c9, r63);
  L142():
    stop1 = ldf stop;
    check L143() else D21();
  D0():
    deopt 9 [x3];
  D10():
    deopt 43 [r51];
  D17():
    deopt 69 [r62];
  D18():
    deopt 73 [c9];
  D21():
    deopt 82 [];
  L32():
    x17 = ld x;
    check L104() else D5();
  L33(dx6):
    goto L35(dx6);
  L44(r72):
    r74 = `!`(r72);
    c19 = `as.logical`(r74);
    if c19 then L45(c19) else L150();
  L85():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r42 = dyn is_list(x4);
    check L86() else D1();
  L87():
    x5 = ld x;
    check L88() else D2();
  L112():
    goto L35(r51);
  L120(dx10):
    st y = dx10;
    x25 = ld x;
    check L124() else D14();
  L121():
    dr6 = tryDispatchBuiltin.1("$", x22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L123() else L122(dr6);
  L122(x24):
    r55 = `$`(x24, <sym y>);
    goto L120(r55);
  L134():
    goto L39(r62);
  L138():
    p18 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r66 = dyn diff1(p18);
    check L139() else D19();
  L143():
    r69 = dyn stop1("increasing 'x' and 'y' values expected");
    check L144() else D22();
  L146():
    z9 = ld z;
    check L148() else D23();
  L147():
    r71 = dyn base10(<sym z>);
    goto L44(r71);
  D1():
    deopt 12 [r42];
  D2():
    deopt 13 [x5];
  D5():
    deopt 25 [x17];
  D14():
    deopt 54 [x25];
  D19():
    deopt 75 [c9, r66];
  D22():
    deopt 84 [r69];
  D23():
    deopt 89 [z9];
  L45(c20):
    c25 = `as.logical`(c20);
    if c25 then L46(c25) else L154();
  L86():
    goto L31(r42);
  L88():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L90() else L91(x6);
  L104():
    x18 = force? x17;
    checkMissing(x18);
    st z = x18;
    sym6 = ldf `seq.int`;
    base6 = ldf `seq.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L105() else L106();
  L123():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L120(dx9);
  L124():
    x26 = force? x25;
    checkMissing(x26);
    c8 = `is.object`(x26);
    if c8 then L126() else L127(x26);
  L139():
    r67 = `<=`(r66, 0.0);
    any1 = ldf any in base;
    r68 = dyn any1(r67);
    check L140() else D20();
  L144():
    goto L43();
  L148():
    z10 = force? z9;
    checkMissing(z10);
    is_matrix = ldf `is.matrix` in base;
    r73 = dyn is_matrix(z10);
    check L149() else D24();
  L150():
    nrow2 = ldf nrow;
    check L151() else D25();
  D20():
    deopt 79 [c9, r68];
  D24():
    deopt 92 [r73];
  D25():
    deopt 95 [c19];
  L34(r47):
    st x = r47;
    goto L33(r47);
  L46(c26):
    c31 = `as.logical`(c26);
    if c31 then L158() else L47();
  L89(dx1):
    st z = dx1;
    x9 = ld x;
    check L93() else D3();
  L90():
    dr = tryDispatchBuiltin.1("$", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L92() else L91(dr);
  L91(x8):
    r43 = `$`(x8, <sym z>);
    goto L89(r43);
  L105():
    nrow1 = ldf nrow;
    check L107() else D6();
  L106():
    r46 = dyn base6[, , `length.out`](0.0, 1.0, <lang nrow(z)>);
    goto L34(r46);
  L125(dx12):
    st x = dx12;
    goto L36();
  L126():
    dr8 = tryDispatchBuiltin.1("$", x26);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L128() else L127(dr8);
  L127(x28):
    r56 = `$`(x28, <sym x>);
    goto L125(r56);
  L140():
    goto L41(c9, r68);
  L149():
    goto L44(r73);
  L151():
    p19 = prom<V +>{
      z11 = ld z;
      z12 = force? z11;
      checkMissing(z12);
      return z12;
    };
    r76 = dyn nrow2(p19);
    check L152() else D26();
  L154():
    ncol1 = ldf ncol;
    check L155() else D27();
  D3():
    deopt 17 [x9];
  D6():
    deopt 33 [];
  D26():
    deopt 97 [c19, r76];
  D27():
    deopt 102 [c25];
  L47():
    goto L48();
  L48():
    add1 = ld add;
    check L162() else D31();
  L92():
    dx = getTryDispatchBuiltinValue(dr);
    goto L89(dx);
  L93():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L95() else L96(x10);
  L107():
    p16 = prom<V +>{
      z7 = ld z;
      z8 = force? z7;
      checkMissing(z8);
      return z8;
    };
    r49 = dyn nrow1(p16);
    check L108() else D7();
  L128():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L125(dx11);
  L152():
    r77 = `<=`(r76, 1);
    c22 = `as.logical`(r77);
    c23 = `||`(c19, c22);
    goto L45(c23);
  L155():
    p20 = prom<V +>{
      z13 = ld z;
      z14 = force? z13;
      checkMissing(z14);
      return z14;
    };
    r79 = dyn ncol1(p20);
    check L156() else D28();
  L158():
    stop2 = ldf stop;
    check L159() else D29();
  D7():
    deopt 35 [r49];
  D28():
    deopt 104 [c25, r79];
  D29():
    deopt 109 [];
  D31():
    deopt 114 [add1];
  L94(dx3):
    st y = dx3;
    x13 = ld x;
    check L98() else D4();
  L95():
    dr2 = tryDispatchBuiltin.1("$", x10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L97() else L96(dr2);
  L96(x12):
    r44 = `$`(x12, <sym y>);
    goto L94(r44);
  L108():
    seq_int = ldf `seq.int` in base;
    r50 = dyn seq_int(0.0, 1.0, r49);
    check L109() else D8();
  L156():
    r80 = `<=`(r79, 1);
    c28 = `as.logical`(r80);
    c29 = `||`(c25, c28);
    goto L46(c29);
  L159():
    r81 = dyn stop2("no proper 'z' matrix specified");
    check L160() else D30();
  L162():
    add2 = force? add1;
    checkMissing(add2);
    r83 = `!`(add2);
    c32 = `as.logical`(r83);
    if c32 then L163() else L49();
  D4():
    deopt 21 [x13];
  D8():
    deopt 38 [r50];
  D30():
    deopt 111 [r81];
  L49():
    goto L50();
  L50():
    pmatch = ldf pmatch;
    check L171() else D38();
  L97():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L94(dx2);
  L98():
    x14 = force? x13;
    checkMissing(x14);
    c5 = `is.object`(x14);
    if c5 then L100() else L101(x14);
  L109():
    goto L34(r50);
  L160():
    goto L48();
  L163():
    r84 = clos `inner-1646950509`;
    st localPlotWindow = r84;
    r85 = clos inner1781216067;
    st localTitle = r85;
    plot_new = ldf `plot.new`;
    check L164() else D32();
  D32():
    deopt 124 [];
  D38():
    deopt 139 [];
  L99(dx5):
    st x = dx5;
    goto L33(dx5);
  L100():
    dr4 = tryDispatchBuiltin.1("$", x14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L102() else L101(dr4);
  L101(x16):
    r45 = `$`(x16, <sym x>);
    goto L99(r45);
  L164():
    r86 = dyn plot_new();
    check L165() else D33();
  L171():
    p23 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      c33 = `is.object`(method2);
      if c33 then L1() else L2(method2);
    L0(dx14):
      return dx14;
    L1():
      dr10 = tryDispatchBuiltin.1("[", method2);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(method4):
      __ = ldf `[` in base;
      r92 = dyn __(method4, 1);
      goto L0(r92);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx13);
    };
    p24 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r95):
      return r95;
    L1():
      c34 = ldf c in base;
      r96 = dyn c34("simple", "edge", "flattest");
      goto L0(r96);
    L2():
      r94 = dyn base11("simple", "edge", "flattest");
      goto L0(r94);
    };
    r98 = dyn pmatch(p23, p24);
    check L172() else D39();
  D33():
    deopt 125 [r86];
  D39():
    deopt 142 [r98];
  L102():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L99(dx4);
  L165():
    localPlotWindow = ldf localPlotWindow;
    check L166() else D34();
  L172():
    st method = r98;
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L173() else L174();
  D34():
    deopt 127 [];
  L51(r100):
    c35 = `as.logical`(r100);
    if c35 then L175() else L52();
  L166():
    p21 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p22 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    ddd1 = ld `...`;
    r89 = dyn localPlotWindow[, , `...`](p21, p22, ddd1);
    check L167() else D35();
  L173():
    missing2 = ldf missing in base;
    r101 = dyn missing2(<sym vfont>);
    goto L51(r101);
  L174():
    r99 = dyn base12(<sym vfont>);
    goto L51(r99);
  D35():
    deopt 131 [r89];
  L52():
    goto L56();
  L56():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L185() else L186();
  L167():
    localTitle = ldf localTitle;
    check L168() else D36();
  L175():
    sym13 = ldf `.Call`;
    base13 = ldf `.Call` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L176() else L177();
  D36():
    deopt 133 [];
  L53(r103):
    c36 = `as.logical`(r103);
    if c36 then L179() else L54();
  L57(r110):
    r111 = `!`(r110);
    c39 = `as.logical`(r111);
    if c39 then L188() else L58();
  L168():
    ddd2 = ld `...`;
    r90 = dyn localTitle[`...`](ddd2);
    check L169() else D37();
  L176():
    C_contourDef = ld C_contourDef;
    check L178() else D40();
  L177():
    r102 = dyn base13(<sym C_contourDef>);
    goto L53(r102);
  L185():
    vfont1 = ld vfont;
    check L187() else D42();
  L186():
    r109 = dyn base15(<sym vfont>);
    goto L57(r109);
  D37():
    deopt 135 [r90];
  D40():
    deopt 148 [C_contourDef];
  D42():
    deopt 163 [vfont1];
  L54():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L181() else L182();
  L55(r105):
    st vfont = r105;
    goto L56();
  L58():
    goto L60();
  L60():
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L197() else L198();
  L169():
    goto L50();
  L178():
    C_contourDef1 = force? C_contourDef;
    checkMissing(C_contourDef1);
    vargs = dots[];
    r104 = `.Call`(C_contourDef1, vargs, <missing>);
    goto L53(r104);
  L179():
    goto L55(NULL);
  L187():
    vfont2 = force? vfont1;
    checkMissing(vfont2);
    c38 = `==`(vfont2, NULL);
    goto L57(c38);
  L188():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L189() else L190();
  L59(r113):
    st vfont = r113;
    goto L60();
  L61(r127):
    r128 = `!`(r127);
    c46 = `as.logical`(r128);
    if c46 then L200() else L62();
  L181():
    c37 = ldf c in base;
    r107 = dyn c37("sans serif", "plain");
    check L183() else D41();
  L182():
    r106 = dyn base14("sans serif", "plain");
    goto L55(r106);
  L189():
    pmatch1 = ldf pmatch;
    check L191() else D43();
  L190():
    r112 = dyn base16[typeface, fontindex](<lang pmatch(`[`(vfont, 1), `$`(Hershey, typeface))>, <lang pmatch(`[`(vfont, 2), `$`(Hershey, fontindex))>);
    goto L59(r112);
  L197():
    labels1 = ld labels;
    check L199() else D48();
  L198():
    r126 = dyn base17(<sym labels>);
    goto L61(r126);
  D41():
    deopt 158 [r107];
  D43():
    deopt 170 [];
  D48():
    deopt 187 [labels1];
  L62():
    goto L68();
  L68():
    sym20 = ldf `.External.graphics`;
    base20 = ldf `.External.graphics` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L218() else L219();
  L183():
    goto L55(r107);
  L191():
    p25 = prom<V +>{
      vfont3 = ld vfont;
      vfont4 = force? vfont3;
      checkMissing(vfont4);
      c40 = `is.object`(vfont4);
      if c40 then L1() else L2(vfont4);
    L0(dx16):
      return dx16;
    L1():
      dr12 = tryDispatchBuiltin.1("[", vfont4);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(vfont6):
      __1 = ldf `[` in base;
      r114 = dyn __1(vfont6, 1);
      goto L0(r114);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx15);
    };
    p26 = prom<V +>{
      Hershey = ld Hershey;
      Hershey1 = force? Hershey;
      checkMissing(Hershey1);
      c41 = `is.object`(Hershey1);
      if c41 then L1() else L2(Hershey1);
    L0(dx18):
      return dx18;
    L1():
      dr14 = tryDispatchBuiltin.1("$", Hershey1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(Hershey3):
      r116 = `$`(Hershey3, <sym typeface>);
      goto L0(r116);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx17);
    };
    r118 = dyn pmatch1(p25, p26);
    check L192() else D44();
  L199():
    labels2 = force? labels1;
    checkMissing(labels2);
    c45 = `==`(labels2, NULL);
    goto L61(c45);
  L200():
    sym18 = ldf `as.character`;
    base18 = ldf `as.character` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L201() else L202();
  D44():
    deopt 173 [r118];
  L63(r130):
    st labels = r130;
    isTRUE = ldf isTRUE;
    check L205() else D51();
  L69():
    add3 = ld add;
    check L234() else D71();
  L192():
    pmatch2 = ldf pmatch;
    check L193() else D45();
  L201():
    labels3 = ld labels;
    check L203() else D49();
  L202():
    r129 = dyn base18(<sym labels>);
    goto L63(r129);
  L218():
    C_contour = ld C_contour;
    check L220() else D57();
  L219():
    r141 = dyn base20(<sym C_contour>, <sym x>, <sym y>, <sym z>, <sym levels>, <sym labels>, <sym labcex>, <sym drawlabels>, <sym method>, <sym vfont>, <sym col>, <sym lty>, <sym lwd>);
    goto L69();
  D45():
    deopt 176 [];
  D49():
    deopt 193 [labels3];
  D51():
    deopt 199 [];
  D57():
    deopt 220 [C_contour];
  D71():
    deopt 248 [add3];
  L193():
    p27 = prom<V +>{
      vfont7 = ld vfont;
      vfont8 = force? vfont7;
      checkMissing(vfont8);
      c42 = `is.object`(vfont8);
      if c42 then L1() else L2(vfont8);
    L0(dx20):
      return dx20;
    L1():
      dr16 = tryDispatchBuiltin.1("[", vfont8);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(vfont10):
      __2 = ldf `[` in base;
      r119 = dyn __2(vfont10, 2);
      goto L0(r119);
    L3():
      dx19 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx19);
    };
    p28 = prom<V +>{
      Hershey4 = ld Hershey;
      Hershey5 = force? Hershey4;
      checkMissing(Hershey5);
      c43 = `is.object`(Hershey5);
      if c43 then L1() else L2(Hershey5);
    L0(dx22):
      return dx22;
    L1():
      dr18 = tryDispatchBuiltin.1("$", Hershey5);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(Hershey7):
      r121 = `$`(Hershey7, <sym fontindex>);
      goto L0(r121);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx21);
    };
    r123 = dyn pmatch2(p27, p28);
    check L194() else D46();
  L203():
    labels4 = force? labels3;
    checkMissing(labels4);
    as_character = ldf `as.character` in base;
    r131 = dyn as_character(labels4);
    check L204() else D50();
  L205():
    p29 = prom<V +>{
      drawlabels1 = ld drawlabels;
      drawlabels2 = force? drawlabels1;
      checkMissing(drawlabels2);
      return drawlabels2;
    };
    r133 = dyn isTRUE(p29);
    check L206() else D52();
  L220():
    C_contour1 = force? C_contour;
    checkMissing(C_contour1);
    x31 = ld x;
    check L221() else D58();
  L234():
    add4 = force? add3;
    checkMissing(add4);
    r144 = `!`(add4);
    c57 = `as.logical`(r144);
    if c57 then L235() else L70();
  D46():
    deopt 179 [r123];
  D50():
    deopt 196 [r131];
  D52():
    deopt 201 [r133];
  D58():
    deopt 222 [x31];
  L70():
    goto L75();
  L75():
    sym21 = ldf invisible;
    base21 = ldf invisible in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L249() else L250();
  L194():
    c44 = ldf c in base;
    r124 = dyn c44(r118, r123);
    check L195() else D47();
  L204():
    goto L63(r131);
  L206():
    c47 = `as.logical`(r133);
    if c47 then L207() else L64(c47);
  L221():
    x32 = force? x31;
    checkMissing(x32);
    y5 = ld y;
    check L222() else D59();
  L235():
    r145 = clos inner1271785601;
    st localAxis = r145;
    r146 = clos inner1271785601;
    st localBox = r146;
    axes3 = ld axes;
    check L236() else D72();
  D47():
    deopt 182 [r124];
  D59():
    deopt 224 [y5];
  D72():
    deopt 257 [axes3];
  L64(c49):
    c56 = `as.logical`(c49);
    if c56 then L213() else L66();
  L76(r156):
    popenv;
    return r156;
  L195():
    goto L59(r124);
  L207():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L208() else L209();
  L222():
    y6 = force? y5;
    checkMissing(y6);
    z15 = ld z;
    check L223() else D60();
  L236():
    axes4 = force? axes3;
    checkMissing(axes4);
    c58 = `as.logical`(axes4);
    if c58 then L237() else L71();
  L249():
    invisible = ldf invisible in base;
    r157 = dyn invisible();
    check L251() else D80();
  L250():
    r155 = dyn base21();
    goto L76(r155);
  D60():
    deopt 226 [z15];
  D80():
    deopt 288 [r157];
  L65(c52, r135):
    r137 = `!`(r135);
    c53 = `as.logical`(r137);
    c54 = `&&`(c52, c53);
    goto L64(c54);
  L66():
    goto L67(NULL);
  L67(r139):
    goto L68();
  L71():
    goto L72();
  L72():
    frame_plot1 = ld `frame.plot`;
    check L243() else D77();
  L208():
    labels5 = ld labels;
    check L210() else D53();
  L209():
    r134 = dyn base19(<sym labels>);
    goto L65(c47, r134);
  L213():
    stop3 = ldf stop;
    check L214() else D55();
  L223():
    z16 = force? z15;
    checkMissing(z16);
    levels1 = ld levels;
    check L224() else D61();
  L237():
    localAxis = ldf localAxis;
    check L238() else D73();
  L251():
    goto L76(r157);
  D53():
    deopt 204 [c47, labels5];
  D55():
    deopt 211 [];
  D61():
    deopt 228 [levels1];
  D73():
    deopt 260 [];
  D77():
    deopt 275 [frame_plot1];
  L210():
    labels6 = force? labels5;
    checkMissing(labels6);
    length = ldf length in base;
    r136 = dyn length(labels6);
    check L211() else D54();
  L214():
    r138 = dyn stop3("'labels' is length zero.  Use 'drawlabels = FALSE' to suppress labels.");
    check L215() else D56();
  L224():
    levels2 = force? levels1;
    checkMissing(levels2);
    labels7 = ld labels;
    check L225() else D62();
  L238():
    p30 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    ddd3 = ld `...`;
    r148 = dyn localAxis[, side, `...`](p30, 1.0, ddd3);
    check L239() else D74();
  L243():
    frame_plot2 = force? frame_plot1;
    checkMissing(frame_plot2);
    c59 = `as.logical`(frame_plot2);
    if c59 then L244() else L73();
  D54():
    deopt 207 [c47, r136];
  D56():
    deopt 213 [r138];
  D62():
    deopt 230 [labels7];
  D74():
    deopt 265 [r148];
  L73():
    goto L74(NULL);
  L74(r153):
    goto L75();
  L211():
    goto L65(c47, r136);
  L215():
    goto L67(r138);
  L225():
    labels8 = force? labels7;
    checkMissing(labels8);
    labcex1 = ld labcex;
    check L226() else D63();
  L239():
    localAxis1 = ldf localAxis;
    check L240() else D75();
  L244():
    localBox = ldf localBox;
    check L245() else D78();
  D63():
    deopt 232 [labcex1];
  D75():
    deopt 267 [];
  D78():
    deopt 278 [];
  L226():
    labcex2 = force? labcex1;
    checkMissing(labcex2);
    drawlabels3 = ld drawlabels;
    check L227() else D64();
  L240():
    p31 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    ddd4 = ld `...`;
    r150 = dyn localAxis1[, side, `...`](p31, 2.0, ddd4);
    check L241() else D76();
  L245():
    ddd5 = ld `...`;
    r152 = dyn localBox[`...`](ddd5);
    check L246() else D79();
  D64():
    deopt 234 [drawlabels3];
  D76():
    deopt 272 [r150];
  D79():
    deopt 280 [r152];
  L227():
    drawlabels4 = force? drawlabels3;
    checkMissing(drawlabels4);
    method5 = ld method;
    check L228() else D65();
  L241():
    goto L72();
  L246():
    goto L74(r152);
  D65():
    deopt 236 [method5];
  L228():
    method6 = force? method5;
    checkMissing(method6);
    vfont11 = ld vfont;
    check L229() else D66();
  D66():
    deopt 238 [vfont11];
  L229():
    vfont12 = force? vfont11;
    checkMissing(vfont12);
    col1 = ld col;
    check L230() else D67();
  D67():
    deopt 240 [col1];
  L230():
    col2 = force? col1;
    checkMissing(col2);
    lty1 = ld lty;
    check L231() else D68();
  D68():
    deopt 242 [lty1];
  L231():
    lty2 = force? lty1;
    checkMissing(lty2);
    lwd1 = ld lwd;
    check L232() else D69();
  D69():
    deopt 244 [lwd1];
  L232():
    lwd2 = force? lwd1;
    checkMissing(lwd2);
    _External_graphics = ldf `.External.graphics` in base;
    r143 = dyn _External_graphics(C_contour1, x32, y6, z16, levels2, labels8, labcex2, drawlabels4, method6, vfont12, col2, lty2, lwd2);
    check L233() else D70();
  D70():
    deopt 247 [r143];
  L233():
    goto L69();
  }
}
fun `inner-1646950509`(xlim, ylim, `...`, main, sub, xlab, ylab, outer, line) {
  (reg xlim:*, reg ylim:*, reg ddd:dots, reg main:*, reg sub:*, reg xlab:*, reg ylab:*, reg outer:*, reg line:*) -+> V { var xlim:*, var ylim:*, var `...`:dots?, var main:*, var sub:*, var xlab:*, var ylab:*, var outer:*, var line:*, reg plot_window:cls, reg xlim1:*, reg xlim2:V, reg p:p(V +), reg ylim1:*, reg ylim2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st xlim = xlim;
    st ylim = ylim;
    st `...` = ddd;
    st main = main;
    st sub = sub;
    st xlab = xlab;
    st ylab = ylab;
    st outer = outer;
    st line = line;
    plot_window = ldf `plot.window`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p1 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    ddd1 = ld `...`;
    r2 = dyn plot_window[, , `...`](p, p1, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner1781216067(`...`, log) {
  (reg ddd:dots, reg log:*) -+> V { var `...`:dots?, var log:*, reg title:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st `...` = ddd;
    st log = log;
    title = ldf title;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn title[`...`](ddd1);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}
fun inner1271785601(`...`, col, bg, pch, cex, lty, lwd) {
  (reg ddd:dots, reg col:*, reg bg:*, reg pch:*, reg cex:*, reg lty:*, reg lwd:*) -+> V { var `...`:dots?, var col:*, var bg:*, var pch:*, var cex:*, var lty:*, var lwd:*, reg Axis:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st `...` = ddd;
    st col = col;
    st bg = bg;
    st pch = pch;
    st cex = cex;
    st lty = lty;
    st lwd = lwd;
    Axis = ldf Axis;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn Axis[`...`](ddd1);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}