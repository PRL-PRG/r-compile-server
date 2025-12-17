fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg require1:cls, reg grDevices:*, reg grDevices1:V, reg p1:p(V +), reg r8:V, reg as_matrix:cls, reg mtcars:*, reg mtcars1:V, reg p2:p(V +), reg r10:V, reg rainbow:cls, reg nrow:cls, reg x:*, reg x1:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg rainbow1:cls, reg ncol:cls, reg x2:*, reg x3:V, reg p5:p(V +), reg r16:V, reg p6:p(V +), reg r18:V, reg heatmap:cls, reg x4:*, reg x5:V, reg p7:p(V +), reg cm_colors:cls, reg r20:V, reg p8:p(V +), reg rc:*, reg rc1:V, reg p9:p(V +), reg cc:*, reg cc1:V, reg p10:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg c:cls, reg r26:V, reg p11:p(V +), reg r28:V, reg __:cls, reg r29:V, reg r30:cls, reg hv:*, reg hv1:V, reg p12:p(V +), reg r32:V, reg heatmap1:cls, reg x6:*, reg x7:V, reg p13:p(V +), reg cm_colors1:cls, reg r34:V, reg p14:p(V +), reg rc2:*, reg rc3:V, reg p15:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg c1:cls, reg r39:V, reg p16:p(V +), reg r41:V, reg heatmap2:cls, reg x8:*, reg x9:V, reg p17:p(V +), reg cm_colors2:cls, reg r43:V, reg p18:p(V +), reg cc2:*, reg cc3:V, reg p19:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg c2:cls, reg r48:V, reg p20:p(V +), reg r50:V, reg heatmap3:cls, reg x10:*, reg x11:V, reg p21:p(V +), reg r52:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg round:cls, reg r55:V, reg symnum:cls, reg Ca:*, reg Ca1:V, reg p22:p(V +), reg r57:V, reg heatmap4:cls, reg Ca2:*, reg Ca3:V, reg p23:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r59:V, reg r60:V, reg c3:cls, reg r61:V, reg p24:p(V +), reg r63:V, reg heatmap5:cls, reg Ca4:*, reg Ca5:V, reg p25:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:V, reg c4:cls, reg r67:V, reg p26:p(V +), reg r69:V, reg rainbow2:cls, reg nrow1:cls, reg Ca6:*, reg Ca7:V, reg p27:p(V +), reg r71:V, reg p28:p(V +), reg r73:V, reg heatmap6:cls, reg Ca8:*, reg Ca9:V, reg p29:p(V +), reg cc4:*, reg cc5:V, reg p30:p(V +), reg cc6:*, reg cc7:V, reg p31:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r77:V, reg r78:V, reg c5:cls, reg r79:V, reg p32:p(V +), reg r81:V, reg heatmap7:cls, reg Ca10:*, reg Ca11:V, reg p33:p(V +), reg cc8:*, reg cc9:V, reg p34:p(V +), reg cc10:*, reg cc11:V, reg p35:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r85:V, reg r86:V, reg c6:cls, reg r87:V, reg p36:p(V +), reg r89:V, reg symnum1:cls, reg cor:cls, reg USJudgeRatings:*, reg USJudgeRatings1:V, reg p37:p(V +), reg r91:V, reg p38:p(V +), reg r93:V, reg heatmap8:cls, reg cU:*, reg cU1:V, reg p39:p(V +), reg topo_colors:cls, reg r95:V, reg p40:p(V +), reg r97:cls, reg p41:p(V +), reg r99:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r100:V, reg round1:cls, reg r102:V, reg __1:cls, reg r103:V, reg r104:cls, reg hU:*, reg hU1:V, reg c7:L, reg hU3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r105:V, reg p42:p(V +), reg r107:V |
    mkenv;
    r = clos inner2380383889;
    st heatmap = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    as_matrix = ldf `as.matrix`;
    check L12() else D4();
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
    require1 = ldf require;
    check L10() else D2();
  L9():
    r5 = dyn base1(<sym grDevices>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  D4():
    deopt 14 [];
  L7():
    goto L0();
  L10():
    p1 = prom<V +>{
      grDevices = ld grDevices;
      grDevices1 = force? grDevices;
      checkMissing(grDevices1);
      return grDevices1;
    };
    r8 = dyn require1(p1);
    check L11() else D3();
  L12():
    p2 = prom<V +>{
      mtcars = ld mtcars;
      mtcars1 = force? mtcars;
      checkMissing(mtcars1);
      return mtcars1;
    };
    r10 = dyn as_matrix(p2);
    check L13() else D5();
  D3():
    deopt 12 [r8];
  D5():
    deopt 16 [r10];
  L11():
    goto L1();
  L13():
    st x = r10;
    rainbow = ldf rainbow;
    check L14() else D6();
  D6():
    deopt 19 [];
  L14():
    p4 = prom<V +>{
      nrow = ldf nrow;
      p3 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r12 = dyn nrow(p3);
      return r12;
    };
    r14 = dyn rainbow[, start, end](p4, 0.0, 0.3);
    check L15() else D7();
  D7():
    deopt 25 [r14];
  L15():
    st rc = r14;
    rainbow1 = ldf rainbow;
    check L16() else D8();
  D8():
    deopt 28 [];
  L16():
    p6 = prom<V +>{
      ncol = ldf ncol;
      p5 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r16 = dyn ncol(p5);
      return r16;
    };
    r18 = dyn rainbow1[, start, end](p6, 0.0, 0.3);
    check L17() else D9();
  D9():
    deopt 34 [r18];
  L17():
    st cc = r18;
    heatmap = ldf heatmap;
    check L18() else D10();
  D10():
    deopt 37 [];
  L18():
    p7 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p8 = prom<V +>{
      cm_colors = ldf `cm.colors`;
      r20 = dyn cm_colors(256.0);
      return r20;
    };
    p9 = prom<V +>{
      rc = ld rc;
      rc1 = force? rc;
      checkMissing(rc1);
      return rc1;
    };
    p10 = prom<V +>{
      cc = ld cc;
      cc1 = force? cc;
      checkMissing(cc1);
      return cc1;
    };
    p11 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      c = ldf c in base;
      r26 = dyn c(5.0, 10.0);
      goto L0(r26);
    L2():
      r24 = dyn base2(5.0, 10.0);
      goto L0(r24);
    };
    r28 = dyn heatmap[, col, scale, RowSideColors, ColSideColors, margins, xlab, ylab, main](p7, p8, "column", p9, p10, p11, "specification variables", "Car Models", "heatmap(<Mtcars data>, ..., scale = \"column\")");
    check L19() else D11();
  D11():
    deopt 55 [r28];
  L19():
    st hv = r28;
    __ = ldf `::`;
    check L20() else D12();
  D12():
    deopt 58 [];
  L20():
    r29 = dyn __("utils", "str");
    check L21() else D13();
  D13():
    deopt 61 [r29];
  L21():
    checkFun.0(r29);
    r30 = r29 as cls;
    p12 = prom<V +>{
      hv = ld hv;
      hv1 = force? hv;
      checkMissing(hv1);
      return hv1;
    };
    r32 = dyn r30(p12);
    check L22() else D14();
  D14():
    deopt 64 [r32];
  L22():
    heatmap1 = ldf heatmap;
    check L23() else D15();
  D15():
    deopt 66 [];
  L23():
    p13 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p14 = prom<V +>{
      cm_colors1 = ldf `cm.colors`;
      r34 = dyn cm_colors1(256.0);
      return r34;
    };
    p15 = prom<V +>{
      rc2 = ld rc;
      rc3 = force? rc2;
      checkMissing(rc3);
      return rc3;
    };
    p16 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      c1 = ldf c in base;
      r39 = dyn c1(5.0, 10.0);
      goto L0(r39);
    L2():
      r37 = dyn base3(5.0, 10.0);
      goto L0(r37);
    };
    r41 = dyn heatmap1[, Colv, col, scale, RowSideColors, margins, xlab, ylab, main](p13, NA_LGL, p14, "column", p15, p16, "specification variables", "Car Models", "heatmap(<Mtcars data>, ..., scale = \"column\")");
    check L24() else D16();
  D16():
    deopt 84 [r41];
  L24():
    heatmap2 = ldf heatmap;
    check L25() else D17();
  D17():
    deopt 86 [];
  L25():
    p17 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    p18 = prom<V +>{
      cm_colors2 = ldf `cm.colors`;
      r43 = dyn cm_colors2(256.0);
      return r43;
    };
    p19 = prom<V +>{
      cc2 = ld cc;
      cc3 = force? cc2;
      checkMissing(cc3);
      return cc3;
    };
    p20 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      c2 = ldf c in base;
      r48 = dyn c2(5.0, 10.0);
      goto L0(r48);
    L2():
      r46 = dyn base4(5.0, 10.0);
      goto L0(r46);
    };
    r50 = dyn heatmap2[, Rowv, col, scale, ColSideColors, margins, xlab, ylab](p17, NA_LGL, p18, "column", p19, p20, "xlab", "ylab");
    check L26() else D18();
  D18():
    deopt 102 [r50];
  L26():
    heatmap3 = ldf heatmap;
    check L27() else D19();
  D19():
    deopt 104 [];
  L27():
    p21 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r52 = dyn heatmap3[, Rowv, Colv, scale, main](p21, NA_LGL, NA_LGL, "column", "heatmap(*, NA, NA) ~= image(t(x))");
    check L28() else D20();
  D20():
    deopt 114 [r52];
  L28():
    sym5 = ldf round;
    base5 = ldf round in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L29() else L30();
  L2():
    symnum = ldf symnum;
    check L31() else D21();
  L29():
    round = ldf round in base;
    r55 = dyn round(<lang `<-`(Ca, cor(attitude))>, 2.0);
    goto L2();
  L30():
    r53 = dyn base5(<lang `<-`(Ca, cor(attitude))>, 2.0);
    goto L2();
  D21():
    deopt 119 [];
  L31():
    p22 = prom<V +>{
      Ca = ld Ca;
      Ca1 = force? Ca;
      checkMissing(Ca1);
      return Ca1;
    };
    r57 = dyn symnum(p22);
    check L32() else D22();
  D22():
    deopt 121 [r57];
  L32():
    heatmap4 = ldf heatmap;
    check L33() else D23();
  D23():
    deopt 123 [];
  L33():
    p23 = prom<V +>{
      Ca2 = ld Ca;
      Ca3 = force? Ca2;
      checkMissing(Ca3);
      return Ca3;
    };
    p24 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      c3 = ldf c in base;
      r61 = dyn c3(6.0, 6.0);
      goto L0(r61);
    L2():
      r59 = dyn base6(6.0, 6.0);
      goto L0(r59);
    };
    r63 = dyn heatmap4[, symm, margins](p23, TRUE, p24);
    check L34() else D24();
  D24():
    deopt 129 [r63];
  L34():
    heatmap5 = ldf heatmap;
    check L35() else D25();
  D25():
    deopt 131 [];
  L35():
    p25 = prom<V +>{
      Ca4 = ld Ca;
      Ca5 = force? Ca4;
      checkMissing(Ca5);
      return Ca5;
    };
    p26 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      c4 = ldf c in base;
      r67 = dyn c4(6.0, 6.0);
      goto L0(r67);
    L2():
      r65 = dyn base7(6.0, 6.0);
      goto L0(r65);
    };
    r69 = dyn heatmap5[, Rowv, symm, margins](p25, FALSE, TRUE, p26);
    check L36() else D26();
  D26():
    deopt 139 [r69];
  L36():
    rainbow2 = ldf rainbow;
    check L37() else D27();
  D27():
    deopt 141 [];
  L37():
    p28 = prom<V +>{
      nrow1 = ldf nrow;
      p27 = prom<V +>{
        Ca6 = ld Ca;
        Ca7 = force? Ca6;
        checkMissing(Ca7);
        return Ca7;
      };
      r71 = dyn nrow1(p27);
      return r71;
    };
    r73 = dyn rainbow2(p28);
    check L38() else D28();
  D28():
    deopt 143 [r73];
  L38():
    st cc = r73;
    heatmap6 = ldf heatmap;
    check L39() else D29();
  D29():
    deopt 146 [];
  L39():
    p29 = prom<V +>{
      Ca8 = ld Ca;
      Ca9 = force? Ca8;
      checkMissing(Ca9);
      return Ca9;
    };
    p30 = prom<V +>{
      cc4 = ld cc;
      cc5 = force? cc4;
      checkMissing(cc5);
      return cc5;
    };
    p31 = prom<V +>{
      cc6 = ld cc;
      cc7 = force? cc6;
      checkMissing(cc7);
      return cc7;
    };
    p32 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r78):
      return r78;
    L1():
      c5 = ldf c in base;
      r79 = dyn c5(6.0, 6.0);
      goto L0(r79);
    L2():
      r77 = dyn base8(6.0, 6.0);
      goto L0(r77);
    };
    r81 = dyn heatmap6[, Rowv, symm, RowSideColors, ColSideColors, margins](p29, FALSE, TRUE, p30, p31, p32);
    check L40() else D30();
  D30():
    deopt 158 [r81];
  L40():
    heatmap7 = ldf heatmap;
    check L41() else D31();
  D31():
    deopt 160 [];
  L41():
    p33 = prom<V +>{
      Ca10 = ld Ca;
      Ca11 = force? Ca10;
      checkMissing(Ca11);
      return Ca11;
    };
    p34 = prom<V +>{
      cc8 = ld cc;
      cc9 = force? cc8;
      checkMissing(cc9);
      return cc9;
    };
    p35 = prom<V +>{
      cc10 = ld cc;
      cc11 = force? cc10;
      checkMissing(cc11);
      return cc11;
    };
    p36 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r86):
      return r86;
    L1():
      c6 = ldf c in base;
      r87 = dyn c6(6.0, 6.0);
      goto L0(r87);
    L2():
      r85 = dyn base9(6.0, 6.0);
      goto L0(r85);
    };
    r89 = dyn heatmap7[, symm, RowSideColors, ColSideColors, margins](p33, TRUE, p34, p35, p36);
    check L42() else D32();
  D32():
    deopt 170 [r89];
  L42():
    symnum1 = ldf symnum;
    check L43() else D33();
  D33():
    deopt 172 [];
  L43():
    p38 = prom<V +>{
      cor = ldf cor;
      p37 = prom<V +>{
        USJudgeRatings = ld USJudgeRatings;
        USJudgeRatings1 = force? USJudgeRatings;
        checkMissing(USJudgeRatings1);
        return USJudgeRatings1;
      };
      r91 = dyn cor(p37);
      st cU = r91;
      invisible.0();
      return r91;
    };
    r93 = dyn symnum1(p38);
    check L44() else D34();
  D34():
    deopt 174 [r93];
  L44():
    heatmap8 = ldf heatmap;
    check L45() else D35();
  D35():
    deopt 176 [];
  L45():
    p39 = prom<V +>{
      cU = ld cU;
      cU1 = force? cU;
      checkMissing(cU1);
      return cU1;
    };
    p40 = prom<V +>{
      topo_colors = ldf `topo.colors`;
      r95 = dyn topo_colors(16.0);
      return r95;
    };
    p41 = prom<V +>{
      r97 = clos inner4061490079;
      return r97;
    };
    r99 = dyn heatmap8[, Rowv, symm, col, distfun, `keep.dendro`](p39, FALSE, TRUE, p40, p41, TRUE);
    check L46() else D36();
  D36():
    deopt 188 [r99];
  L46():
    st hU = r99;
    sym10 = ldf round;
    base10 = ldf round in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L47() else L48();
  L3():
    __1 = ldf `::`;
    check L49() else D37();
  L47():
    round1 = ldf round in base;
    r102 = dyn round1(<lang `*`(100.0, `[`(cU, `[[`(hU, 1.0), `[[`(hU, 2.0)))>);
    goto L3();
  L48():
    r100 = dyn base10(<lang `*`(100.0, `[`(cU, `[[`(hU, 1.0), `[[`(hU, 2.0)))>);
    goto L3();
  D37():
    deopt 194 [];
  L49():
    r103 = dyn __1("utils", "str");
    check L50() else D38();
  D38():
    deopt 197 [r103];
  L50():
    checkFun.0(r103);
    r104 = r103 as cls;
    p42 = prom<V +>{
      hU = ld hU;
      hU1 = force? hU;
      checkMissing(hU1);
      c7 = `is.object`(hU1);
      if c7 then L1() else L2(hU1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", hU1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(hU3):
      r105 = `$`(hU3, <sym Colv>);
      goto L0(r105);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r107 = dyn r104(p42);
    check L51() else D39();
  D39():
    deopt 200 [r107];
  L51():
    popenv;
    return r107;
  }
}
fun inner2380383889(x, Rowv, Colv, distfun, hclustfun, reorderfun, `add.expr`, symm, revC, scale, `na.rm`, margins, ColSideColors, RowSideColors, cexRow, cexCol, labRow, labCol, main, xlab, ylab, `keep.dendro`, verbose, `...`) {
  (reg x:*, reg Rowv:*, reg Colv:*, reg distfun:*, reg hclustfun:*, reg reorderfun:*, reg add_expr:*, reg symm:*, reg revC:*, reg scale:*, reg na_rm:*, reg margins:*, reg ColSideColors:*, reg RowSideColors:*, reg cexRow:*, reg cexCol:*, reg labRow:*, reg labCol:*, reg main:*, reg xlab:*, reg ylab:*, reg keep_dendro:*, reg verbose:*, reg ddd:dots) -+> V { var x:*, var Rowv:*, reg Rowv_isMissing:L, reg Rowv_orDefault:*, var Colv:*, reg Colv_isMissing:L, reg Colv_orDefault:*, reg symm1:*, reg symm2:V, reg c:L, reg p:p(V +), var distfun:*, reg distfun_isMissing:L, reg distfun_orDefault:*, reg dist:*, reg dist1:V, reg p1:p(V +), var hclustfun:*, reg hclustfun_isMissing:L, reg hclustfun_orDefault:*, reg hclust:*, reg hclust1:V, reg p2:p(V +), var reorderfun:*, reg reorderfun_isMissing:L, reg reorderfun_orDefault:*, reg r3:cls, reg p3:p(V +), var `add.expr`:*, var symm:*, reg symm_isMissing:L, reg symm_orDefault:*, var revC:*, reg revC_isMissing:L, reg revC_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg Colv1:*, reg Colv2:V, reg identical:cls, reg r7:V, reg p4:p(V +), var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg p5:p(V +), var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var margins:*, reg margins_isMissing:L, reg margins_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg c2:cls, reg r15:V, reg p6:p(V +), var ColSideColors:*, var RowSideColors:*, var cexRow:*, reg cexRow_isMissing:L, reg cexRow_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:R, reg r23:R, reg r24:V, reg nr:*, reg nr1:V, reg log10:cls, reg r25:V, reg r26:V, reg r27:V, reg p7:p(V +), var cexCol:*, reg cexCol_isMissing:L, reg cexCol_orDefault:*, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:R, reg r35:R, reg r36:V, reg nc:*, reg nc1:V, reg log11:cls, reg r37:V, reg r38:V, reg r39:V, reg p8:p(V +), var labRow:*, reg labRow_isMissing:L, reg labRow_orDefault:*, var labCol:*, reg labCol_isMissing:L, reg labCol_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `keep.dendro`:*, reg keep_dendro_isMissing:L, reg keep_dendro_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r41:V, reg p9:p(V +), var `...`:dots?, reg symm3:*, reg symm4:V, reg c3:L, reg c5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg c8:L, reg r44:V, reg missing:cls, reg r45:V, reg c9:L, reg c10:V, reg c12:L, reg r46:V, reg match_arg:cls, reg scale1:*, reg scale2:V, reg p10:p(V +), reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg x1:*, reg x2:V, reg dim:cls, reg r53:V, reg length:cls, reg r54:V, reg r55:V, reg c13:L, reg c14:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg c18:L, reg r57:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r58:V, reg r59:V, reg c19:L, reg c20:V, reg c22:L, reg stop:cls, reg r60:V, reg di:*, reg di1:V, reg c23:L, reg di3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r62:V, reg di4:*, reg di5:V, reg c24:L, reg di7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r63:V, reg nr2:*, reg nr3:V, reg r64:V, reg c25:L, reg c26:V, reg nc2:*, reg nc3:V, reg r65:V, reg c28:L, reg c29:V, reg c31:L, reg stop1:cls, reg r66:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg r69:V, reg margins1:*, reg margins2:V, reg is_numeric1:cls, reg r70:V, reg r71:V, reg c32:L, reg c33:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r72:V, reg c37:L, reg r73:V, reg margins3:*, reg margins4:V, reg length1:cls, reg r74:V, reg r75:V, reg c38:L, reg c39:V, reg c41:L, reg stop2:cls, reg r76:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r78:V, reg r79:V, reg Rowv1:*, reg Rowv2:V, reg identical1:cls, reg r80:V, reg r81:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r82:V, reg r83:V, reg Colv3:*, reg Colv4:V, reg identical2:cls, reg r84:V, reg r85:V, reg doRdend:*, reg doRdend1:V, reg r86:V, reg c42:L, reg c44:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r87:V, reg c47:L, reg r88:V, reg Colv5:*, reg Colv6:V, reg identical3:cls, reg r89:V, reg c48:L, reg c49:V, reg c51:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r91:V, reg r92:V, reg Rowv3:*, reg Rowv4:V, reg c52:V, reg c53:L, reg rowMeans:cls, reg x5:*, reg x6:V, reg p11:p(V +), reg na_rm1:*, reg na_rm2:V, reg p12:p(V +), reg r95:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r97:V, reg r98:V, reg Colv7:*, reg Colv8:V, reg c54:V, reg c55:L, reg colMeans:cls, reg x7:*, reg x8:V, reg p13:p(V +), reg na_rm3:*, reg na_rm4:V, reg p14:p(V +), reg r101:V, reg doRdend2:*, reg doRdend3:V, reg c56:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r103:V, reg r104:V, reg Rowv5:*, reg Rowv6:V, reg inherits:cls, reg r105:V, reg c57:L, reg Rowv7:*, reg Rowv8:V, reg hclustfun1:cls, reg distfun1:cls, reg x9:*, reg x10:V, reg p15:p(V +), reg r107:V, reg p16:p(V +), reg r109:V, reg as_dendrogram:cls, reg hcr:*, reg hcr1:V, reg p17:p(V +), reg r111:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r112:V, reg r113:V, reg Rowv10:*, reg Rowv11:V, reg c58:L, reg r114:V, reg c59:L, reg c60:V, reg Rowv12:*, reg Rowv13:V, reg c62:L, reg c63:V, reg c65:L, reg reorderfun1:cls, reg ddr:*, reg ddr1:V, reg p18:p(V +), reg Rowv14:*, reg Rowv15:V, reg p19:p(V +), reg r117:V, reg nr4:*, reg nr5:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r118:V, reg nr8:V, reg r119:V, reg order_dendrogram:cls, reg ddr2:*, reg ddr3:V, reg p20:p(V +), reg r121:V, reg length2:cls, reg r122:V, reg r123:V, reg c66:L, reg stop3:cls, reg r124:V, reg r125:V, reg nr9:*, reg nr10:V, reg r127:V, reg doCdend:*, reg doCdend1:V, reg c67:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r128:V, reg r129:V, reg Colv9:*, reg Colv10:V, reg inherits1:cls, reg r130:V, reg c68:L, reg Colv11:*, reg Colv12:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r131:V, reg r132:V, reg Colv14:*, reg Colv15:V, reg identical4:cls, reg r133:V, reg c69:L, reg nr11:*, reg nr12:V, reg nc4:*, reg nc5:V, reg r134:V, reg c70:L, reg stop4:cls, reg r135:V, reg ddr4:*, reg ddr5:V, reg hclustfun2:cls, reg distfun2:cls, reg symm5:*, reg symm6:V, reg c71:L, reg x11:*, reg x12:V, reg t:cls, reg x13:*, reg x14:V, reg p21:p(V +), reg r138:V, reg p22:p(V +), reg r140:V, reg p23:p(V +), reg r142:V, reg as_dendrogram1:cls, reg hcc:*, reg hcc1:V, reg p24:p(V +), reg r144:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r145:V, reg r146:V, reg Colv16:*, reg Colv17:V, reg c72:L, reg r147:V, reg c73:L, reg c74:V, reg Colv18:*, reg Colv19:V, reg c76:L, reg c77:V, reg c79:L, reg reorderfun2:cls, reg ddc:*, reg ddc1:V, reg p25:p(V +), reg Colv20:*, reg Colv21:V, reg p26:p(V +), reg r150:V, reg nc6:*, reg nc7:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r151:V, reg nc10:V, reg r152:V, reg order_dendrogram1:cls, reg ddc2:*, reg ddc3:V, reg p27:p(V +), reg r154:V, reg length3:cls, reg r155:V, reg r156:V, reg c80:L, reg stop5:cls, reg r157:V, reg r158:V, reg nc11:*, reg nc12:V, reg r160:V, reg x15:*, reg x16:V, reg c81:L, reg x18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg rowInd:*, reg rowInd1:V, reg colInd:*, reg colInd1:V, reg __2:cls, reg r161:V, reg ____:cls, reg ____1:cls, reg labRow1:*, reg labRow2:V, reg c82:L, reg labRow4:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg rowInd2:*, reg rowInd3:V, reg __3:cls, reg r162:V, reg p28:p(V +), reg rownames:cls, reg x19:*, reg x20:V, reg p29:p(V +), reg r165:V, reg p30:p(V +), reg r167:V, reg p31:p(V +), reg nr13:*, reg nr14:V, reg r169:V, reg c83:L, reg r171:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg rowInd4:*, reg rowInd5:V, reg __4:cls, reg r172:V, reg p32:p(V +), reg r174:V, reg ____2:cls, reg ____3:cls, reg labCol1:*, reg labCol2:V, reg c84:L, reg labCol4:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg colInd2:*, reg colInd3:V, reg __5:cls, reg r175:V, reg p33:p(V +), reg colnames:cls, reg x21:*, reg x22:V, reg p34:p(V +), reg r178:V, reg p35:p(V +), reg r180:V, reg p36:p(V +), reg nc13:*, reg nc14:V, reg r182:V, reg c85:L, reg r184:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg colInd4:*, reg colInd5:V, reg __6:cls, reg r185:V, reg p37:p(V +), reg r187:V, reg scale3:*, reg scale4:V, reg r188:V, reg c86:L, reg sweep:cls, reg x23:*, reg x24:V, reg p38:p(V +), reg rowMeans1:cls, reg x25:*, reg x26:V, reg p39:p(V +), reg na_rm5:*, reg na_rm6:V, reg p40:p(V +), reg r192:V, reg p41:p(V +), reg r194:V, reg apply:cls, reg x27:*, reg x28:V, reg p42:p(V +), reg sd:*, reg sd1:V, reg p43:p(V +), reg na_rm7:*, reg na_rm8:V, reg p44:p(V +), reg r198:V, reg sweep1:cls, reg x29:*, reg x30:V, reg p45:p(V +), reg sx:*, reg sx1:V, reg p46:p(V +), reg __7:*, reg __8:V, reg p47:p(V +), reg r202:V, reg scale5:*, reg scale6:V, reg r204:V, reg c87:L, reg sweep2:cls, reg x31:*, reg x32:V, reg p48:p(V +), reg colMeans1:cls, reg x33:*, reg x34:V, reg p49:p(V +), reg na_rm9:*, reg na_rm10:V, reg p50:p(V +), reg r208:V, reg p51:p(V +), reg r210:V, reg apply1:cls, reg x35:*, reg x36:V, reg p52:p(V +), reg sd2:*, reg sd3:V, reg p53:p(V +), reg na_rm11:*, reg na_rm12:V, reg p54:p(V +), reg r214:V, reg sweep3:cls, reg x37:*, reg x38:V, reg p55:p(V +), reg sx2:*, reg sx3:V, reg p56:p(V +), reg __9:*, reg __10:V, reg p57:p(V +), reg r218:V, reg rbind:cls, reg sym23:cls, reg base23:cls, reg guard23:L, reg r219:V, reg r220:V, reg c88:cls, reg r221:V, reg p58:p(V +), reg p59:p(V +), reg r224:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r225:V, reg r226:V, reg doRdend4:*, reg doRdend5:V, reg c89:L, reg r227:R, reg c90:cls, reg r228:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r229:V, reg r230:V, reg doCdend2:*, reg doCdend3:V, reg c91:L, reg r231:R, reg sym26:cls, reg base26:cls, reg guard26:L, reg r234:V, reg r235:R, reg r236:V, reg main1:*, reg main2:V, reg c92:V, reg r237:V, reg c93:L, reg r240:R, reg r241:R, reg r242:V, reg c94:cls, reg r243:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r244:V, reg r245:V, reg missing1:cls, reg r246:V, reg r247:V, reg c95:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r248:V, reg r249:V, reg ColSideColors1:*, reg ColSideColors2:V, reg c96:L, reg r250:V, reg c97:L, reg c98:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r251:V, reg c102:L, reg r252:V, reg ColSideColors3:*, reg ColSideColors4:V, reg length4:cls, reg r253:V, reg nc15:*, reg nc16:V, reg r254:V, reg c103:L, reg c104:V, reg c106:L, reg stop6:cls, reg r255:V, reg rbind1:cls, reg lmat:*, reg lmat1:V, reg c107:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __11:cls, reg r257:V, reg r258:V, reg p60:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r260:V, reg r261:V, reg c108:cls, reg r262:V, reg p61:p(V +), reg lmat4:*, reg lmat5:V, reg c109:L, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __12:cls, reg r264:V, reg r265:V, reg p62:p(V +), reg r267:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r268:V, reg r269:V, reg lhei:*, reg lhei1:V, reg c110:L, reg lhei3:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __13:cls, reg r270:V, reg lhei4:*, reg lhei5:V, reg c111:L, reg lhei7:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __14:cls, reg r271:V, reg c112:cls, reg r272:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r274:V, reg r275:V, reg missing2:cls, reg r276:V, reg r277:V, reg c113:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r278:V, reg r279:V, reg RowSideColors1:*, reg RowSideColors2:V, reg c114:L, reg r280:V, reg c115:L, reg c116:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r281:V, reg c120:L, reg r282:V, reg RowSideColors3:*, reg RowSideColors4:V, reg length5:cls, reg r283:V, reg nr15:*, reg nr16:V, reg r284:V, reg c121:L, reg c122:V, reg c124:L, reg stop7:cls, reg r285:V, reg cbind:cls, reg lmat8:*, reg lmat9:V, reg c125:L, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg __15:cls, reg r287:V, reg r288:V, reg p63:p(V +), reg sym35:cls, reg base35:cls, reg guard35:L, reg r290:V, reg r291:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r292:V, reg r293:V, reg rep:cls, reg r294:V, reg c126:cls, reg r295:V, reg p64:p(V +), reg lmat12:*, reg lmat13:V, reg c127:L, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg __16:cls, reg r297:V, reg r298:V, reg p65:p(V +), reg r300:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r301:V, reg r302:V, reg lwid:*, reg lwid1:V, reg c128:L, reg lwid3:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg __17:cls, reg r303:V, reg lwid4:*, reg lwid5:V, reg c129:L, reg lwid7:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg __18:cls, reg r304:V, reg c130:cls, reg r305:V, reg l:*, reg c131:L, reg r308:R, reg l2:*, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r315:V, reg r316:R, reg l5:*, reg r317:R, reg r318:V, reg lmat16:*, reg lmat17:V, reg is_na:cls, reg r319:V, reg ___:cls, reg r320:V, reg verbose1:*, reg verbose2:V, reg c132:L, reg cat:cls, reg lwid8:*, reg lwid9:V, reg p66:p(V +), reg lhei8:*, reg lhei9:V, reg p67:p(V +), reg r323:V, reg print:cls, reg lmat18:*, reg lmat19:V, reg p68:p(V +), reg r325:V, reg dev_hold:cls, reg r327:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r328:V, reg on_exit:cls, reg r330:V, reg par:cls, reg r331:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r332:V, reg on_exit1:cls, reg r334:V, reg layout:cls, reg lmat20:*, reg lmat21:V, reg p69:p(V +), reg lwid10:*, reg lwid11:V, reg p70:p(V +), reg lhei10:*, reg lhei11:V, reg p71:p(V +), reg r338:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r339:V, reg r340:V, reg missing3:cls, reg r341:V, reg r342:V, reg c133:L, reg par1:cls, reg sym42:cls, reg base42:cls, reg guard42:L, reg r343:V, reg r344:V, reg margins5:*, reg margins6:V, reg c134:L, reg margins8:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg __19:cls, reg r345:V, reg c135:cls, reg r346:V, reg p72:p(V +), reg r348:V, reg image:cls, reg rbind2:cls, reg revC1:*, reg revC2:V, reg c136:L, reg nr17:*, reg nr18:V, reg r349:V, reg nr19:*, reg nr20:V, reg r350:V, reg p73:p(V +), reg r352:V, reg p74:p(V +), reg RowSideColors5:*, reg RowSideColors6:V, reg c137:L, reg RowSideColors8:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg rowInd6:*, reg rowInd7:V, reg __20:cls, reg r354:V, reg p75:p(V +), reg r356:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r358:V, reg r359:V, reg missing4:cls, reg r360:V, reg r361:V, reg c138:L, reg par2:cls, reg sym44:cls, reg base44:cls, reg guard44:L, reg r362:V, reg r363:V, reg margins9:*, reg margins10:V, reg c139:L, reg margins12:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg __21:cls, reg r364:V, reg c140:cls, reg r365:V, reg p76:p(V +), reg r367:V, reg image1:cls, reg cbind1:cls, reg nc17:*, reg nc18:V, reg r368:V, reg p77:p(V +), reg r370:V, reg p78:p(V +), reg ColSideColors5:*, reg ColSideColors6:V, reg c141:L, reg ColSideColors8:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg colInd6:*, reg colInd7:V, reg __22:cls, reg r372:V, reg p79:p(V +), reg r374:V, reg par3:cls, reg sym45:cls, reg base45:cls, reg guard45:L, reg r376:V, reg r377:V, reg margins13:*, reg margins14:V, reg c142:L, reg margins16:V, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg __23:cls, reg r378:V, reg margins17:*, reg margins18:V, reg c143:L, reg margins20:V, reg dr42:V, reg dc21:L, reg dx42:V, reg dx43:V, reg __24:cls, reg r379:V, reg c144:cls, reg r380:V, reg p80:p(V +), reg r382:V, reg symm7:*, reg symm8:V, reg r383:V, reg c145:L, reg c146:V, reg scale7:*, reg scale8:V, reg r384:V, reg c148:L, reg c149:V, reg c151:L, reg t1:cls, reg x39:*, reg x40:V, reg p81:p(V +), reg r386:V, reg revC3:*, reg revC4:V, reg c152:L, reg nr21:*, reg nr22:V, reg r388:V, reg doRdend6:*, reg doRdend7:V, reg c153:L, reg rev:cls, reg ddr6:*, reg ddr7:V, reg p82:p(V +), reg r390:V, reg x41:*, reg x42:V, reg c154:L, reg x44:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg iy:*, reg iy1:V, reg __25:cls, reg r392:V, reg nr23:*, reg nr24:V, reg r393:V, reg image2:cls, reg nc19:*, reg nc20:V, reg r394:V, reg p83:p(V +), reg nr25:*, reg nr26:V, reg r396:V, reg p84:p(V +), reg x45:*, reg x46:V, reg p85:p(V +), reg sym46:cls, reg base46:cls, reg guard46:L, reg r401:V, reg r402:R, reg r403:V, reg nc21:*, reg nc22:V, reg c155:cls, reg r404:V, reg r405:V, reg p86:p(V +), reg sym47:cls, reg base47:cls, reg guard47:L, reg r409:V, reg r410:R, reg r411:V, reg nr27:*, reg nr28:V, reg c156:cls, reg r412:V, reg r413:V, reg p87:p(V +), reg ddd1:dots?, reg r415:V, reg axis:cls, reg nc23:*, reg nc24:V, reg r416:V, reg p88:p(V +), reg labCol5:*, reg labCol6:V, reg p89:p(V +), reg p90:p(V +), reg cexCol1:*, reg cexCol2:V, reg p91:p(V +), reg r421:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r422:V, reg r423:V, reg xlab1:*, reg xlab2:V, reg c157:V, reg r424:V, reg c158:L, reg mtext:cls, reg xlab3:*, reg xlab4:V, reg p92:p(V +), reg margins21:*, reg margins22:V, reg c159:L, reg margins24:V, reg dr46:V, reg dc23:L, reg dx47:V, reg dx48:V, reg __26:cls, reg r426:V, reg r427:V, reg p93:p(V +), reg r429:V, reg axis1:cls, reg iy2:*, reg iy3:V, reg p94:p(V +), reg labRow5:*, reg labRow6:V, reg p95:p(V +), reg p96:p(V +), reg cexRow1:*, reg cexRow2:V, reg p97:p(V +), reg r435:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r436:V, reg r437:V, reg ylab1:*, reg ylab2:V, reg c160:V, reg r438:V, reg c161:L, reg mtext1:cls, reg ylab3:*, reg ylab4:V, reg p98:p(V +), reg margins25:*, reg margins26:V, reg c162:L, reg margins28:V, reg dr48:V, reg dc24:L, reg dx49:V, reg dx50:V, reg __27:cls, reg r440:V, reg r441:V, reg p99:p(V +), reg r443:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r445:V, reg r446:V, reg missing5:cls, reg r447:V, reg r448:V, reg c163:L, reg eval_parent:cls, reg sym51:cls, reg base51:cls, reg guard51:L, reg r449:V, reg r450:V, reg substitute:cls, reg r451:V, reg p100:p(V +), reg r453:V, reg par4:cls, reg sym52:cls, reg base52:cls, reg guard52:L, reg r455:V, reg r456:V, reg margins29:*, reg margins30:V, reg c164:L, reg margins32:V, reg dr50:V, reg dc25:L, reg dx51:V, reg dx52:V, reg __28:cls, reg r457:V, reg c165:cls, reg r458:V, reg p101:p(V +), reg r460:V, reg doRdend8:*, reg doRdend9:V, reg c166:L, reg plot:cls, reg ddr8:*, reg ddr9:V, reg p102:p(V +), reg r462:V, reg frame:cls, reg r464:V, reg par5:cls, reg sym53:cls, reg base53:cls, reg guard53:L, reg r465:V, reg r466:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r467:V, reg r468:V, reg main3:*, reg main4:V, reg c167:V, reg r469:V, reg c168:L, reg r470:R, reg margins33:*, reg margins34:V, reg c169:L, reg margins36:V, reg dr52:V, reg dc26:L, reg dx53:V, reg dx54:V, reg __29:cls, reg r471:V, reg c170:cls, reg r472:V, reg p103:p(V +), reg r474:V, reg doCdend4:*, reg doCdend5:V, reg c171:L, reg plot1:cls, reg ddc4:*, reg ddc5:V, reg p104:p(V +), reg r476:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r478:V, reg r479:V, reg main5:*, reg main6:V, reg c172:V, reg r480:V, reg c173:L, reg frame1:cls, reg r481:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r482:V, reg r483:V, reg main7:*, reg main8:V, reg c174:V, reg r484:V, reg c175:L, reg par6:cls, reg r485:V, reg title:cls, reg main9:*, reg main10:V, reg p105:p(V +), reg op:*, reg op1:V, reg c176:L, reg r488:R, reg op3:V, reg dr54:V, reg dc27:L, reg dx55:V, reg r490:R, reg dx56:V, reg __30:cls, reg r491:V, reg r492:V, reg p106:p(V +), reg r494:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r496:V, reg r497:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r498:V, reg r499:V, reg rowInd8:*, reg rowInd9:V, reg colInd8:*, reg colInd9:V, reg keep_dendro1:*, reg keep_dendro2:V, reg c177:L, reg c179:V, reg doRdend10:*, reg doRdend11:V, reg c180:L, reg c181:V, reg c183:L, reg ddr10:*, reg ddr11:V, reg ddr12:V, reg keep_dendro3:*, reg keep_dendro4:V, reg c184:L, reg c186:V, reg doCdend6:*, reg doCdend7:V, reg c187:L, reg c188:V, reg c190:L, reg ddc6:*, reg ddc7:V, reg ddc8:V, reg list:cls, reg r500:V, reg invisible:cls, reg r501:V |
    mkenv;
    st x = x;
    Rowv_isMissing = missing.0(Rowv);
    if Rowv_isMissing then L0(NULL) else L0(Rowv);
  L0(Rowv_orDefault):
    st Rowv = Rowv_orDefault;
    Colv_isMissing = missing.0(Colv);
    if Colv_isMissing then L1() else L2(Colv);
  L1():
    p = prom<V +>{
      symm1 = ld symm;
      symm2 = force? symm1;
      checkMissing(symm2);
      c = `as.logical`(symm2);
      if c then L1() else L0();
    L0():
      return NULL;
    L1():
      return "Rowv";
    };
    goto L2(p);
  L2(Colv_orDefault):
    st Colv = Colv_orDefault;
    distfun_isMissing = missing.0(distfun);
    if distfun_isMissing then L3() else L4(distfun);
  L3():
    p1 = prom<V +>{
      dist = ld dist;
      dist1 = force? dist;
      checkMissing(dist1);
      return dist1;
    };
    goto L4(p1);
  L4(distfun_orDefault):
    st distfun = distfun_orDefault;
    hclustfun_isMissing = missing.0(hclustfun);
    if hclustfun_isMissing then L5() else L6(hclustfun);
  L5():
    p2 = prom<V +>{
      hclust = ld hclust;
      hclust1 = force? hclust;
      checkMissing(hclust1);
      return hclust1;
    };
    goto L6(p2);
  L6(hclustfun_orDefault):
    st hclustfun = hclustfun_orDefault;
    reorderfun_isMissing = missing.0(reorderfun);
    if reorderfun_isMissing then L7() else L8(reorderfun);
  L7():
    p3 = prom<V +>{
      r3 = clos inner1668500607;
      return r3;
    };
    goto L8(p3);
  L8(reorderfun_orDefault):
    st reorderfun = reorderfun_orDefault;
    st `add.expr` = add_expr;
    symm_isMissing = missing.0(symm);
    if symm_isMissing then L9(FALSE) else L9(symm);
  L9(symm_orDefault):
    st symm = symm_orDefault;
    revC_isMissing = missing.0(revC);
    if revC_isMissing then L10() else L11(revC);
  L10():
    p4 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      Colv1 = ld Colv;
      Colv2 = force? Colv1;
      checkMissing(Colv2);
      identical = ldf identical in base;
      r7 = dyn identical(Colv2, "Rowv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r7);
    L2():
      r5 = dyn base(<sym Colv>, "Rowv");
      goto L0(r5);
    };
    goto L11(p4);
  L11(revC_orDefault):
    st revC = revC_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L12() else L13(scale);
  L12():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c1 = ldf c in base;
      r11 = dyn c1("row", "column", "none");
      goto L0(r11);
    L2():
      r9 = dyn base1("row", "column", "none");
      goto L0(r9);
    };
    goto L13(p5);
  L13(scale_orDefault):
    st scale = scale_orDefault;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L14(TRUE) else L14(na_rm);
  L14(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    margins_isMissing = missing.0(margins);
    if margins_isMissing then L15() else L16(margins);
  L15():
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c2 = ldf c in base;
      r15 = dyn c2(5.0, 5.0);
      goto L0(r15);
    L2():
      r13 = dyn base2(5.0, 5.0);
      goto L0(r13);
    };
    goto L16(p6);
  L16(margins_orDefault):
    st margins = margins_orDefault;
    st ColSideColors = ColSideColors;
    st RowSideColors = RowSideColors;
    cexRow_isMissing = missing.0(cexRow);
    if cexRow_isMissing then L17() else L18(cexRow);
  L17():
    p7 = prom<V +>{
      sym3 = ldf log10;
      base3 = ldf log10 in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22, r23, r24):
      r26 = `/`(r23, r24);
      r27 = `+`(r22, r26);
      return r27;
    L1():
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      log10 = ldf log10 in base;
      r25 = dyn log10(nr1);
      goto L0(0.2, 1.0, r25);
    L2():
      r21 = dyn base3(<sym nr>);
      goto L0(0.2, 1.0, r21);
    };
    goto L18(p7);
  L18(cexRow_orDefault):
    st cexRow = cexRow_orDefault;
    cexCol_isMissing = missing.0(cexCol);
    if cexCol_isMissing then L19() else L20(cexCol);
  L19():
    p8 = prom<V +>{
      sym4 = ldf log10;
      base4 = ldf log10 in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r34, r35, r36):
      r38 = `/`(r35, r36);
      r39 = `+`(r34, r38);
      return r39;
    L1():
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      log11 = ldf log10 in base;
      r37 = dyn log11(nc1);
      goto L0(0.2, 1.0, r37);
    L2():
      r33 = dyn base4(<sym nc>);
      goto L0(0.2, 1.0, r33);
    };
    goto L20(p8);
  L20(cexCol_orDefault):
    st cexCol = cexCol_orDefault;
    labRow_isMissing = missing.0(labRow);
    if labRow_isMissing then L21(NULL) else L21(labRow);
  L21(labRow_orDefault):
    st labRow = labRow_orDefault;
    labCol_isMissing = missing.0(labCol);
    if labCol_isMissing then L22(NULL) else L22(labCol);
  L22(labCol_orDefault):
    st labCol = labCol_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L23(NULL) else L23(main);
  L23(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L24(NULL) else L24(xlab);
  L24(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L25(NULL) else L25(ylab);
  L25(ylab_orDefault):
    st ylab = ylab_orDefault;
    keep_dendro_isMissing = missing.0(keep_dendro);
    if keep_dendro_isMissing then L26(FALSE) else L26(keep_dendro);
  L26(keep_dendro_orDefault):
    st `keep.dendro` = keep_dendro_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L27() else L28(verbose);
  L27():
    p9 = prom<V +>{
      getOption = ldf getOption;
      r41 = dyn getOption("verbose");
      return r41;
    };
    goto L28(p9);
  L28(verbose_orDefault):
    st verbose = verbose_orDefault;
    st `...` = ddd;
    symm3 = ld symm;
    check L168() else D0();
  D0():
    deopt 0 [symm3];
  L168():
    symm4 = force? symm3;
    checkMissing(symm4);
    c3 = `as.logical`(symm4);
    if c3 then L169() else L29(c3);
  L29(c5):
    c12 = `as.logical`(c5);
    if c12 then L173() else L31();
  L169():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L170() else L171();
  L30(c8, r44):
    c9 = `as.logical`(r44);
    c10 = `&&`(c8, c9);
    goto L29(c10);
  L31():
    match_arg = ldf `match.arg`;
    check L175() else D1();
  L32(r46):
    st scale = r46;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L177() else L178();
  L170():
    missing = ldf missing in base;
    r45 = dyn missing(<sym scale>);
    goto L30(c3, r45);
  L171():
    r43 = dyn base5(<sym scale>);
    goto L30(c3, r43);
  L173():
    goto L32("none");
  D1():
    deopt 9 [];
  L33(r50):
    r55 = `!=`(r50, 2.0);
    c13 = `as.logical`(r55);
    if c13 then L35(c13) else L184();
  L175():
    p10 = prom<V +>{
      scale1 = ld scale;
      scale2 = force? scale1;
      checkMissing(scale2);
      return scale2;
    };
    r48 = dyn match_arg(p10);
    check L176() else D2();
  L177():
    sym7 = ldf dim;
    base7 = ldf dim in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L179() else L180();
  L178():
    r49 = dyn base6(<lang `<-`(di, dim(x))>);
    goto L33(r49);
  D2():
    deopt 11 [r48];
  L34(r52):
    st di = r52;
    length = ldf length in base;
    r54 = dyn length(r52);
    check L183() else D5();
  L35(c14):
    c22 = `as.logical`(c14);
    if c22 then L190() else L37();
  L176():
    goto L32(r48);
  L179():
    x1 = ld x;
    check L181() else D3();
  L180():
    r51 = dyn base7(<sym x>);
    goto L34(r51);
  L184():
    sym8 = ldf `is.numeric`;
    base8 = ldf `is.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L185() else L186();
  D3():
    deopt 17 [x1];
  D5():
    deopt 23 [r54];
  L36(c18, r57):
    r59 = `!`(r57);
    c19 = `as.logical`(r59);
    c20 = `||`(c18, c19);
    goto L35(c20);
  L37():
    goto L38();
  L38():
    di = ld di;
    check L194() else D10();
  L181():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r53 = dyn dim(x2);
    check L182() else D4();
  L183():
    goto L33(r54);
  L185():
    x3 = ld x;
    check L187() else D6();
  L186():
    r56 = dyn base8(<sym x>);
    goto L36(c13, r56);
  L190():
    stop = ldf stop;
    check L191() else D8();
  D4():
    deopt 20 [r53];
  D6():
    deopt 28 [c13, x3];
  D8():
    deopt 35 [];
  D10():
    deopt 40 [di];
  L182():
    goto L34(r53);
  L187():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r58 = dyn is_numeric(x4);
    check L188() else D7();
  L191():
    r60 = dyn stop("'x' must be a numeric matrix");
    check L192() else D9();
  L194():
    di1 = force? di;
    checkMissing(di1);
    c23 = `is.object`(di1);
    if c23 then L195() else L196(di1);
  D7():
    deopt 31 [c13, r58];
  D9():
    deopt 37 [r60];
  L39(dx1):
    st nr = dx1;
    di4 = ld di;
    check L198() else D11();
  L188():
    goto L36(c13, r58);
  L192():
    goto L38();
  L195():
    dr = tryDispatchBuiltin.1("[", di1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L197() else L196(dr);
  L196(di3):
    __ = ldf `[` in base;
    r62 = dyn __(di3, 1);
    goto L39(r62);
  D11():
    deopt 46 [di4];
  L197():
    dx = getTryDispatchBuiltinValue(dr);
    goto L39(dx);
  L198():
    di5 = force? di4;
    checkMissing(di5);
    c24 = `is.object`(di5);
    if c24 then L199() else L200(di5);
  L40(dx3):
    st nc = dx3;
    nr2 = ld nr;
    check L202() else D12();
  L199():
    dr2 = tryDispatchBuiltin.1("[", di5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L201() else L200(dr2);
  L200(di7):
    __1 = ldf `[` in base;
    r63 = dyn __1(di7, 2);
    goto L40(r63);
  D12():
    deopt 52 [nr2];
  L201():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L40(dx2);
  L202():
    nr3 = force? nr2;
    checkMissing(nr3);
    r64 = `<=`(nr3, 1.0);
    c25 = `as.logical`(r64);
    if c25 then L41(c25) else L203();
  L41(c26):
    c31 = `as.logical`(c26);
    if c31 then L206() else L42();
  L203():
    nc2 = ld nc;
    check L204() else D13();
  D13():
    deopt 56 [c25, nc2];
  L42():
    goto L43();
  L43():
    sym9 = ldf `is.numeric`;
    base9 = ldf `is.numeric` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L210() else L211();
  L204():
    nc3 = force? nc2;
    checkMissing(nc3);
    r65 = `<=`(nc3, 1.0);
    c28 = `as.logical`(r65);
    c29 = `||`(c25, c28);
    goto L41(c29);
  L206():
    stop1 = ldf stop;
    check L207() else D14();
  D14():
    deopt 62 [];
  L44(r69):
    r71 = `!`(r69);
    c32 = `as.logical`(r71);
    if c32 then L45(c32) else L214();
  L207():
    r66 = dyn stop1("'x' must have at least 2 rows and 2 columns");
    check L208() else D15();
  L210():
    margins1 = ld margins;
    check L212() else D16();
  L211():
    r68 = dyn base9(<sym margins>);
    goto L44(r68);
  D15():
    deopt 64 [r66];
  D16():
    deopt 69 [margins1];
  L45(c33):
    c41 = `as.logical`(c33);
    if c41 then L220() else L47();
  L208():
    goto L43();
  L212():
    margins2 = force? margins1;
    checkMissing(margins2);
    is_numeric1 = ldf `is.numeric` in base;
    r70 = dyn is_numeric1(margins2);
    check L213() else D17();
  L214():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L215() else L216();
  D17():
    deopt 72 [r70];
  L46(c37, r73):
    r75 = `!=`(r73, 2);
    c38 = `as.logical`(r75);
    c39 = `||`(c37, c38);
    goto L45(c39);
  L47():
    goto L48();
  L48():
    sym11 = ldf identical;
    base11 = ldf identical in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L224() else L225();
  L213():
    goto L44(r70);
  L215():
    margins3 = ld margins;
    check L217() else D18();
  L216():
    r72 = dyn base10(<sym margins>);
    goto L46(c32, r72);
  L220():
    stop2 = ldf stop;
    check L221() else D20();
  D18():
    deopt 76 [c32, margins3];
  D20():
    deopt 84 [];
  L49(r79):
    r81 = `!`(r79);
    st doRdend = r81;
    sym12 = ldf identical;
    base12 = ldf identical in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L228() else L229();
  L217():
    margins4 = force? margins3;
    checkMissing(margins4);
    length1 = ldf length in base;
    r74 = dyn length1(margins4);
    check L218() else D19();
  L221():
    r76 = dyn stop2("'margins' must be a numeric vector of length 2");
    check L222() else D21();
  L224():
    Rowv1 = ld Rowv;
    check L226() else D22();
  L225():
    r78 = dyn base11(<sym Rowv>, NA_LGL);
    goto L49(r78);
  D19():
    deopt 79 [c32, r74];
  D21():
    deopt 86 [r76];
  D22():
    deopt 91 [Rowv1];
  L50(r83):
    r85 = `!`(r83);
    st doCdend = r85;
    doRdend = ld doRdend;
    check L232() else D26();
  L218():
    goto L46(c32, r74);
  L222():
    goto L48();
  L226():
    Rowv2 = force? Rowv1;
    checkMissing(Rowv2);
    identical1 = ldf identical in base;
    r80 = dyn identical1(Rowv2, NA_LGL, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L227() else D23();
  L228():
    Colv3 = ld Colv;
    check L230() else D24();
  L229():
    r82 = dyn base12(<sym Colv>, NA_LGL);
    goto L50(r82);
  D23():
    deopt 102 [r80];
  D24():
    deopt 107 [Colv3];
  D26():
    deopt 121 [doRdend];
  L227():
    goto L49(r80);
  L230():
    Colv4 = force? Colv3;
    checkMissing(Colv4);
    identical2 = ldf identical in base;
    r84 = dyn identical2(Colv4, NA_LGL, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L231() else D25();
  L232():
    doRdend1 = force? doRdend;
    checkMissing(doRdend1);
    r86 = `!`(doRdend1);
    c42 = `as.logical`(r86);
    if c42 then L233() else L51(c42);
  D25():
    deopt 118 [r84];
  L51(c44):
    c51 = `as.logical`(c44);
    if c51 then L239() else L53();
  L231():
    goto L50(r84);
  L233():
    sym13 = ldf identical;
    base13 = ldf identical in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L234() else L235();
  L52(c47, r88):
    c48 = `as.logical`(r88);
    c49 = `&&`(c47, c48);
    goto L51(c49);
  L53():
    goto L54();
  L54():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L241() else L242();
  L234():
    Colv5 = ld Colv;
    check L236() else D27();
  L235():
    r87 = dyn base13(<sym Colv>, "Rowv");
    goto L52(c42, r87);
  L239():
    st doCdend = FALSE;
    goto L54();
  D27():
    deopt 126 [c42, Colv5];
  L55(r92):
    c53 = `as.logical`(r92);
    if c53 then L244() else L56();
  L236():
    Colv6 = force? Colv5;
    checkMissing(Colv6);
    identical3 = ldf identical in base;
    r89 = dyn identical3(Colv6, "Rowv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L237() else D28();
  L241():
    Rowv3 = ld Rowv;
    check L243() else D29();
  L242():
    r91 = dyn base14(<sym Rowv>);
    goto L55(r91);
  D28():
    deopt 137 [c42, r89];
  D29():
    deopt 145 [Rowv3];
  L56():
    goto L57();
  L57():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L248() else L249();
  L237():
    goto L52(c42, r89);
  L243():
    Rowv4 = force? Rowv3;
    checkMissing(Rowv4);
    c52 = `==`(Rowv4, NULL);
    goto L55(c52);
  L244():
    rowMeans = ldf rowMeans;
    check L245() else D30();
  D30():
    deopt 149 [];
  L58(r98):
    c55 = `as.logical`(r98);
    if c55 then L251() else L59();
  L245():
    p11 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p12 = prom<V +>{
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      return na_rm2;
    };
    r95 = dyn rowMeans[, `na.rm`](p11, p12);
    check L246() else D31();
  L248():
    Colv7 = ld Colv;
    check L250() else D32();
  L249():
    r97 = dyn base15(<sym Colv>);
    goto L58(r97);
  D31():
    deopt 153 [r95];
  D32():
    deopt 158 [Colv7];
  L59():
    goto L60();
  L60():
    doRdend2 = ld doRdend;
    check L255() else D35();
  L246():
    st Rowv = r95;
    goto L57();
  L250():
    Colv8 = force? Colv7;
    checkMissing(Colv8);
    c54 = `==`(Colv8, NULL);
    goto L58(c54);
  L251():
    colMeans = ldf colMeans;
    check L252() else D33();
  D33():
    deopt 162 [];
  D35():
    deopt 170 [doRdend2];
  L252():
    p13 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p14 = prom<V +>{
      na_rm3 = ld `na.rm`;
      na_rm4 = force? na_rm3;
      checkMissing(na_rm4);
      return na_rm4;
    };
    r101 = dyn colMeans[, `na.rm`](p13, p14);
    check L253() else D34();
  L255():
    doRdend3 = force? doRdend2;
    checkMissing(doRdend3);
    c56 = `as.logical`(doRdend3);
    if c56 then L256() else L61();
  D34():
    deopt 166 [r101];
  L61():
    nr9 = ld nr;
    check L289() else D53();
  L71():
    doCdend = ld doCdend;
    check L290() else D54();
  L253():
    st Colv = r101;
    goto L60();
  L256():
    sym16 = ldf inherits;
    base16 = ldf inherits in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L257() else L258();
  D53():
    deopt 227 [1, nr9];
  D54():
    deopt 231 [doCdend];
  L62(r104):
    c57 = `as.logical`(r104);
    if c57 then L261() else L63();
  L257():
    Rowv5 = ld Rowv;
    check L259() else D36();
  L258():
    r103 = dyn base16(<sym Rowv>, "dendrogram");
    goto L62(r103);
  L289():
    nr10 = force? nr9;
    checkMissing(nr10);
    r127 = `:`(1, nr10);
    st rowInd = r127;
    goto L71();
  L290():
    doCdend1 = force? doCdend;
    checkMissing(doCdend1);
    c67 = `as.logical`(doCdend1);
    if c67 then L291() else L72();
  D36():
    deopt 174 [Rowv5];
  L63():
    hclustfun1 = ldf hclustfun;
    check L264() else D39();
  L64():
    nr4 = ld nr;
    check L278() else D47();
  L72():
    nc11 = ld nc;
    check L337() else D79();
  L86():
    x15 = ld x;
    check L338() else D80();
  L259():
    Rowv6 = force? Rowv5;
    checkMissing(Rowv6);
    inherits = ldf inherits in base;
    r105 = dyn inherits(Rowv6, "dendrogram", FALSE);
    check L260() else D37();
  L261():
    Rowv7 = ld Rowv;
    check L262() else D38();
  L291():
    sym19 = ldf inherits;
    base19 = ldf inherits in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L292() else L293();
  D37():
    deopt 179 [r105];
  D38():
    deopt 180 [Rowv7];
  D39():
    deopt 184 [];
  D47():
    deopt 209 [nr4];
  D79():
    deopt 315 [1, nc11];
  D80():
    deopt 319 [x15];
  L73(r129):
    c68 = `as.logical`(r129);
    if c68 then L296() else L74();
  L260():
    goto L62(r105);
  L262():
    Rowv8 = force? Rowv7;
    checkMissing(Rowv8);
    st ddr = Rowv8;
    goto L64();
  L264():
    p16 = prom<V +>{
      distfun1 = ldf distfun;
      p15 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r107 = dyn distfun1(p15);
      return r107;
    };
    r109 = dyn hclustfun1(p16);
    check L265() else D40();
  L278():
    nr5 = force? nr4;
    checkMissing(nr5);
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L279() else L280();
  L292():
    Colv9 = ld Colv;
    check L294() else D55();
  L293():
    r128 = dyn base19(<sym Colv>, "dendrogram");
    goto L73(r128);
  L337():
    nc12 = force? nc11;
    checkMissing(nc12);
    r160 = `:`(1, nc12);
    st colInd = r160;
    goto L86();
  L338():
    x16 = force? x15;
    checkMissing(x16);
    c81 = `is.object`(x16);
    if c81 then L339() else L340(x16);
  D40():
    deopt 186 [r109];
  D55():
    deopt 235 [Colv9];
  L68(nr8, r119):
    r123 = `!=`(nr8, r119);
    c66 = `as.logical`(r123);
    if c66 then L284() else L69();
  L74():
    sym20 = ldf identical;
    base20 = ldf identical in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L299() else L300();
  L75():
    nc6 = ld nc;
    check L326() else D73();
  L87(dx5):
    st x = dx5;
    ____ = ldf `%||%`;
    check L344() else D83();
  L265():
    st hcr = r109;
    as_dendrogram = ldf `as.dendrogram`;
    check L266() else D41();
  L279():
    order_dendrogram = ldf `order.dendrogram`;
    check L281() else D48();
  L280():
    r118 = dyn base18(<lang `<-`(rowInd, order.dendrogram(ddr))>);
    goto L68(nr5, r118);
  L294():
    Colv10 = force? Colv9;
    checkMissing(Colv10);
    inherits1 = ldf inherits in base;
    r130 = dyn inherits1(Colv10, "dendrogram", FALSE);
    check L295() else D56();
  L296():
    Colv11 = ld Colv;
    check L297() else D57();
  L339():
    dr4 = tryDispatchBuiltin.1("[", x16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L341() else L340(dr4);
  L340(x18):
    rowInd = ld rowInd;
    check L342() else D81();
  D41():
    deopt 189 [];
  D48():
    deopt 213 [nr5];
  D56():
    deopt 240 [r130];
  D57():
    deopt 241 [Colv11];
  D73():
    deopt 297 [nc6];
  D81():
    deopt 321 [x18, rowInd];
  D83():
    deopt 327 [];
  L69():
    goto L70(NULL);
  L70(r125):
    goto L71();
  L76(r132):
    c69 = `as.logical`(r132);
    if c69 then L303() else L77();
  L266():
    p17 = prom<V +>{
      hcr = ld hcr;
      hcr1 = force? hcr;
      checkMissing(hcr1);
      return hcr1;
    };
    r111 = dyn as_dendrogram(p17);
    check L267() else D42();
  L281():
    p20 = prom<V +>{
      ddr2 = ld ddr;
      ddr3 = force? ddr2;
      checkMissing(ddr3);
      return ddr3;
    };
    r121 = dyn order_dendrogram(p20);
    check L282() else D49();
  L284():
    stop3 = ldf stop;
    check L285() else D51();
  L295():
    goto L73(r130);
  L297():
    Colv12 = force? Colv11;
    checkMissing(Colv12);
    st ddc = Colv12;
    goto L75();
  L299():
    Colv14 = ld Colv;
    check L301() else D58();
  L300():
    r131 = dyn base20(<sym Colv>, "Rowv");
    goto L76(r131);
  L326():
    nc7 = force? nc6;
    checkMissing(nc7);
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L327() else L328();
  L341():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L87(dx4);
  L342():
    rowInd1 = force? rowInd;
    colInd = ld colInd;
    check L343() else D82();
  L344():
    p31 = prom<V +>{
      ____1 = ldf `%||%`;
      p28 = prom<V +>{
        labRow1 = ld labRow;
        labRow2 = force? labRow1;
        checkMissing(labRow2);
        c82 = `is.object`(labRow2);
        if c82 then L1() else L2(labRow2);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", labRow2);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(labRow4):
        rowInd2 = ld rowInd;
        rowInd3 = force? rowInd2;
        __3 = ldf `[` in base;
        r162 = dyn __3(labRow4, rowInd3);
        goto L0(r162);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p30 = prom<V +>{
        rownames = ldf rownames;
        p29 = prom<V +>{
          x19 = ld x;
          x20 = force? x19;
          checkMissing(x20);
          return x20;
        };
        r165 = dyn rownames(p29);
        return r165;
      };
      r167 = dyn ____1(p28, p30);
      return r167;
    };
    p32 = prom<V +>{
      nr13 = ld nr;
      nr14 = force? nr13;
      checkMissing(nr14);
      r169 = `:`(1, nr14);
      c83 = `is.object`(r169);
      if c83 then L1() else L2(r169);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", r169);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(r171):
      rowInd4 = ld rowInd;
      rowInd5 = force? rowInd4;
      __4 = ldf `[` in base;
      r172 = dyn __4(r171, rowInd5);
      goto L0(r172);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r174 = dyn ____(p31, p32);
    check L345() else D84();
  D42():
    deopt 191 [r111];
  D49():
    deopt 215 [nr5, r121];
  D51():
    deopt 221 [];
  D58():
    deopt 246 [Colv14];
  D82():
    deopt 322 [x18, rowInd1, colInd];
  D84():
    deopt 330 [r174];
  L77():
    hclustfun2 = ldf hclustfun;
    check L312() else D65();
  L83(nc10, r152):
    r156 = `!=`(nc10, r152);
    c80 = `as.logical`(r156);
    if c80 then L332() else L84();
  L267():
    st ddr = r111;
    sym17 = ldf `is.logical`;
    base17 = ldf `is.logical` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L268() else L269();
  L282():
    st rowInd = r121;
    length2 = ldf length in base;
    r122 = dyn length2(r121);
    check L283() else D50();
  L285():
    r124 = dyn stop3("row dendrogram ordering gave index of wrong length");
    check L286() else D52();
  L301():
    Colv15 = force? Colv14;
    checkMissing(Colv15);
    identical4 = ldf identical in base;
    r133 = dyn identical4(Colv15, "Rowv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L302() else D59();
  L303():
    nr11 = ld nr;
    check L304() else D60();
  L327():
    order_dendrogram1 = ldf `order.dendrogram`;
    check L329() else D74();
  L328():
    r151 = dyn base22(<lang `<-`(colInd, order.dendrogram(ddc))>);
    goto L83(nc7, r151);
  L343():
    colInd1 = force? colInd;
    __2 = ldf `[` in base;
    r161 = dyn __2(x18, rowInd1, colInd1);
    goto L87(r161);
  L345():
    st labRow = r174;
    ____2 = ldf `%||%`;
    check L346() else D85();
  D50():
    deopt 218 [nr5, r122];
  D52():
    deopt 223 [r124];
  D59():
    deopt 257 [r133];
  D60():
    deopt 258 [nr11];
  D65():
    deopt 272 [];
  D74():
    deopt 301 [nc7];
  D85():
    deopt 333 [];
  L65(r113):
    r114 = `!`(r113);
    c59 = `as.logical`(r114);
    if c59 then L66(c59) else L271();
  L84():
    goto L85(NULL);
  L85(r158):
    goto L86();
  L268():
    Rowv10 = ld Rowv;
    check L270() else D43();
  L269():
    r112 = dyn base17(<sym Rowv>);
    goto L65(r112);
  L283():
    goto L68(nr5, r122);
  L286():
    goto L70(r124);
  L302():
    goto L76(r133);
  L304():
    nr12 = force? nr11;
    checkMissing(nr12);
    nc4 = ld nc;
    check L305() else D61();
  L312():
    p23 = prom<V +>{
      distfun2 = ldf distfun;
      p22 = prom<V +>{
        symm5 = ld symm;
        symm6 = force? symm5;
        checkMissing(symm6);
        c71 = `as.logical`(symm6);
        if c71 then L1() else L0();
      L0():
        t = ldf t;
        p21 = prom<V +>{
          x13 = ld x;
          x14 = force? x13;
          checkMissing(x14);
          return x14;
        };
        r138 = dyn t(p21);
        return r138;
      L1():
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        return x12;
      };
      r140 = dyn distfun2(p22);
      return r140;
    };
    r142 = dyn hclustfun2(p23);
    check L313() else D66();
  L329():
    p27 = prom<V +>{
      ddc2 = ld ddc;
      ddc3 = force? ddc2;
      checkMissing(ddc3);
      return ddc3;
    };
    r154 = dyn order_dendrogram1(p27);
    check L330() else D75();
  L332():
    stop5 = ldf stop;
    check L333() else D77();
  L346():
    p36 = prom<V +>{
      ____3 = ldf `%||%`;
      p33 = prom<V +>{
        labCol1 = ld labCol;
        labCol2 = force? labCol1;
        checkMissing(labCol2);
        c84 = `is.object`(labCol2);
        if c84 then L1() else L2(labCol2);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", labCol2);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(labCol4):
        colInd2 = ld colInd;
        colInd3 = force? colInd2;
        __5 = ldf `[` in base;
        r175 = dyn __5(labCol4, colInd3);
        goto L0(r175);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      p35 = prom<V +>{
        colnames = ldf colnames;
        p34 = prom<V +>{
          x21 = ld x;
          x22 = force? x21;
          checkMissing(x22);
          return x22;
        };
        r178 = dyn colnames(p34);
        return r178;
      };
      r180 = dyn ____3(p33, p35);
      return r180;
    };
    p37 = prom<V +>{
      nc13 = ld nc;
      nc14 = force? nc13;
      checkMissing(nc14);
      r182 = `:`(1, nc14);
      c85 = `is.object`(r182);
      if c85 then L1() else L2(r182);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", r182);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(r184):
      colInd4 = ld colInd;
      colInd5 = force? colInd4;
      __6 = ldf `[` in base;
      r185 = dyn __6(r184, colInd5);
      goto L0(r185);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r187 = dyn ____2(p36, p37);
    check L347() else D86();
  D43():
    deopt 194 [Rowv10];
  D61():
    deopt 259 [nr12, nc4];
  D66():
    deopt 274 [r142];
  D75():
    deopt 303 [nc7, r154];
  D77():
    deopt 309 [];
  D86():
    deopt 336 [r187];
  L66(c60):
    c65 = `as.logical`(c60);
    if c65 then L274() else L67();
  L270():
    Rowv11 = force? Rowv10;
    checkMissing(Rowv11);
    c58 = `is.logical`(Rowv11);
    goto L65(c58);
  L271():
    Rowv12 = ld Rowv;
    check L272() else D44();
  L305():
    nc5 = force? nc4;
    checkMissing(nc5);
    r134 = `!=`(nr12, nc5);
    c70 = `as.logical`(r134);
    if c70 then L306() else L78();
  L313():
    st hcc = r142;
    as_dendrogram1 = ldf `as.dendrogram`;
    check L314() else D67();
  L330():
    st colInd = r154;
    length3 = ldf length in base;
    r155 = dyn length3(r154);
    check L331() else D76();
  L333():
    r157 = dyn stop5("column dendrogram ordering gave index of wrong length");
    check L334() else D78();
  L347():
    st labCol = r187;
    scale3 = ld scale;
    check L348() else D87();
  D44():
    deopt 198 [c59, Rowv12];
  D67():
    deopt 277 [];
  D76():
    deopt 306 [nc7, r155];
  D78():
    deopt 311 [r157];
  D87():
    deopt 338 [scale3];
  L67():
    goto L64();
  L78():
    goto L79();
  L79():
    ddr4 = ld ddr;
    check L310() else D64();
  L272():
    Rowv13 = force? Rowv12;
    checkMissing(Rowv13);
    c62 = `as.logical`(Rowv13);
    c63 = `||`(c59, c62);
    goto L66(c63);
  L274():
    reorderfun1 = ldf reorderfun;
    check L275() else D45();
  L306():
    stop4 = ldf stop;
    check L307() else D62();
  L314():
    p24 = prom<V +>{
      hcc = ld hcc;
      hcc1 = force? hcc;
      checkMissing(hcc1);
      return hcc1;
    };
    r144 = dyn as_dendrogram1(p24);
    check L315() else D68();
  L331():
    goto L83(nc7, r155);
  L334():
    goto L85(r157);
  L348():
    scale4 = force? scale3;
    checkMissing(scale4);
    r188 = `==`(scale4, "row");
    c86 = `as.logical`(r188);
    if c86 then L349() else L88();
  D45():
    deopt 202 [];
  D62():
    deopt 263 [];
  D64():
    deopt 268 [ddr4];
  D68():
    deopt 279 [r144];
  L88():
    scale5 = ld scale;
    check L357() else D94();
  L89():
    rbind = ldf rbind;
    check L366() else D101();
  L275():
    p18 = prom<V +>{
      ddr = ld ddr;
      ddr1 = force? ddr;
      checkMissing(ddr1);
      return ddr1;
    };
    p19 = prom<V +>{
      Rowv14 = ld Rowv;
      Rowv15 = force? Rowv14;
      checkMissing(Rowv15);
      return Rowv15;
    };
    r117 = dyn reorderfun1(p18, p19);
    check L276() else D46();
  L307():
    r135 = dyn stop4("Colv = \"Rowv\" but nrow(x) != ncol(x)");
    check L308() else D63();
  L310():
    ddr5 = force? ddr4;
    checkMissing(ddr5);
    st ddc = ddr5;
    goto L75();
  L315():
    st ddc = r144;
    sym21 = ldf `is.logical`;
    base21 = ldf `is.logical` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L316() else L317();
  L349():
    sweep = ldf sweep;
    check L350() else D88();
  D46():
    deopt 205 [r117];
  D63():
    deopt 265 [r135];
  D88():
    deopt 343 [];
  D94():
    deopt 370 [scale5];
  D101():
    deopt 405 [];
  L80(r146):
    r147 = `!`(r146);
    c73 = `as.logical`(r147);
    if c73 then L81(c73) else L319();
  L276():
    st ddr = r117;
    goto L64();
  L308():
    goto L79();
  L316():
    Colv16 = ld Colv;
    check L318() else D69();
  L317():
    r145 = dyn base21(<sym Colv>);
    goto L80(r145);
  L350():
    p38 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      return x24;
    };
    p41 = prom<V +>{
      rowMeans1 = ldf rowMeans;
      p39 = prom<V +>{
        x25 = ld x;
        x26 = force? x25;
        checkMissing(x26);
        return x26;
      };
      p40 = prom<V +>{
        na_rm5 = ld `na.rm`;
        na_rm6 = force? na_rm5;
        checkMissing(na_rm6);
        return na_rm6;
      };
      r192 = dyn rowMeans1[, `na.rm`](p39, p40);
      return r192;
    };
    r194 = dyn sweep[, , , `check.margin`](p38, 1, p41, FALSE);
    check L351() else D89();
  L357():
    scale6 = force? scale5;
    checkMissing(scale6);
    r204 = `==`(scale6, "column");
    c87 = `as.logical`(r204);
    if c87 then L358() else L90();
  L366():
    p58 = prom<V +>{
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r220):
      return r220;
    L1():
      c88 = ldf c in base;
      r221 = dyn c88(NA_LGL, 3.0);
      goto L0(r221);
    L2():
      r219 = dyn base23(NA_LGL, 3.0);
      goto L0(r219);
    };
    p59 = prom<V +>{
      return <int 2, 1>;
    };
    r224 = dyn rbind(p58, p59);
    check L367() else D102();
  D69():
    deopt 282 [Colv16];
  D89():
    deopt 349 [r194];
  D102():
    deopt 408 [r224];
  L81(c74):
    c79 = `as.logical`(c74);
    if c79 then L322() else L82();
  L90():
    goto L89();
  L318():
    Colv17 = force? Colv16;
    checkMissing(Colv17);
    c72 = `is.logical`(Colv17);
    goto L80(c72);
  L319():
    Colv18 = ld Colv;
    check L320() else D70();
  L351():
    st x = r194;
    apply = ldf apply;
    check L352() else D90();
  L358():
    sweep2 = ldf sweep;
    check L359() else D95();
  L367():
    st lmat = r224;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L368() else L369();
  D70():
    deopt 286 [c73, Colv18];
  D90():
    deopt 352 [];
  D95():
    deopt 375 [];
  L82():
    goto L75();
  L91(r226):
    st lwid = r226;
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L374() else L375();
  L320():
    Colv19 = force? Colv18;
    checkMissing(Colv19);
    c76 = `as.logical`(Colv19);
    c77 = `||`(c73, c76);
    goto L81(c77);
  L322():
    reorderfun2 = ldf reorderfun;
    check L323() else D71();
  L352():
    p42 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    p43 = prom<V +>{
      sd = ld sd;
      sd1 = force? sd;
      checkMissing(sd1);
      return sd1;
    };
    p44 = prom<V +>{
      na_rm7 = ld `na.rm`;
      na_rm8 = force? na_rm7;
      checkMissing(na_rm8);
      return na_rm8;
    };
    r198 = dyn apply[, , , `na.rm`](p42, 1, p43, p44);
    check L353() else D91();
  L359():
    p48 = prom<V +>{
      x31 = ld x;
      x32 = force? x31;
      checkMissing(x32);
      return x32;
    };
    p51 = prom<V +>{
      colMeans1 = ldf colMeans;
      p49 = prom<V +>{
        x33 = ld x;
        x34 = force? x33;
        checkMissing(x34);
        return x34;
      };
      p50 = prom<V +>{
        na_rm9 = ld `na.rm`;
        na_rm10 = force? na_rm9;
        checkMissing(na_rm10);
        return na_rm10;
      };
      r208 = dyn colMeans1[, `na.rm`](p49, p50);
      return r208;
    };
    r210 = dyn sweep2[, , , `check.margin`](p48, 2, p51, FALSE);
    check L360() else D96();
  L368():
    doRdend4 = ld doRdend;
    check L370() else D103();
  L369():
    r225 = dyn base24(<lang if(doRdend, 1.0, 0.05)>, 4.0);
    goto L91(r225);
  D71():
    deopt 290 [];
  D91():
    deopt 358 [r198];
  D96():
    deopt 381 [r210];
  D103():
    deopt 412 [doRdend4];
  L94(r230):
    st lhei = r230;
    sym27 = ldf missing;
    base27 = ldf missing in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L385() else L386();
  L323():
    p25 = prom<V +>{
      ddc = ld ddc;
      ddc1 = force? ddc;
      checkMissing(ddc1);
      return ddc1;
    };
    p26 = prom<V +>{
      Colv20 = ld Colv;
      Colv21 = force? Colv20;
      checkMissing(Colv21);
      return Colv21;
    };
    r150 = dyn reorderfun2(p25, p26);
    check L324() else D72();
  L353():
    st sx = r198;
    sweep1 = ldf sweep;
    check L354() else D92();
  L360():
    st x = r210;
    apply1 = ldf apply;
    check L361() else D97();
  L370():
    doRdend5 = force? doRdend4;
    checkMissing(doRdend5);
    c89 = `as.logical`(doRdend5);
    if c89 then L371() else L92();
  L374():
    doCdend2 = ld doCdend;
    check L376() else D105();
  L375():
    r229 = dyn base25(<lang `+`(`(`(if(doCdend, 1.0, 0.05)), if(`!`(is.null(main)), 0.2, 0.0))>, 4.0);
    goto L94(r229);
  D72():
    deopt 293 [r150];
  D92():
    deopt 361 [];
  D97():
    deopt 384 [];
  D105():
    deopt 424 [doCdend2];
  L92():
    goto L93(0.05);
  L93(r227):
    c90 = ldf c in base;
    r228 = dyn c90(r227, 4.0);
    check L373() else D104();
  L100(r245):
    r247 = `!`(r245);
    c95 = `as.logical`(r247);
    if c95 then L387() else L101();
  L324():
    st ddc = r150;
    goto L75();
  L354():
    p45 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    p46 = prom<V +>{
      sx = ld sx;
      sx1 = force? sx;
      checkMissing(sx1);
      return sx1;
    };
    p47 = prom<V +>{
      __7 = ld `/`;
      __8 = force? __7;
      checkMissing(__8);
      return __8;
    };
    r202 = dyn sweep1[, , , , `check.margin`](p45, 1, p46, p47, FALSE);
    check L355() else D93();
  L361():
    p52 = prom<V +>{
      x35 = ld x;
      x36 = force? x35;
      checkMissing(x36);
      return x36;
    };
    p53 = prom<V +>{
      sd2 = ld sd;
      sd3 = force? sd2;
      checkMissing(sd3);
      return sd3;
    };
    p54 = prom<V +>{
      na_rm11 = ld `na.rm`;
      na_rm12 = force? na_rm11;
      checkMissing(na_rm12);
      return na_rm12;
    };
    r214 = dyn apply1[, , , `na.rm`](p52, 2, p53, p54);
    check L362() else D98();
  L371():
    goto L93(1.0);
  L376():
    doCdend3 = force? doCdend2;
    checkMissing(doCdend3);
    c91 = `as.logical`(doCdend3);
    if c91 then L377() else L95();
  L385():
    missing1 = ldf missing in base;
    r246 = dyn missing1(<sym ColSideColors>);
    goto L100(r246);
  L386():
    r244 = dyn base27(<sym ColSideColors>);
    goto L100(r244);
  D93():
    deopt 368 [r202];
  D98():
    deopt 390 [r214];
  D104():
    deopt 420 [r228];
  L95():
    goto L96(0.05);
  L96(r231):
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L379() else L380();
  L101():
    goto L110();
  L110():
    sym32 = ldf missing;
    base32 = ldf missing in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L416() else L417();
  L355():
    st x = r202;
    goto L89();
  L362():
    st sx = r214;
    sweep3 = ldf sweep;
    check L363() else D99();
  L373():
    goto L91(r228);
  L377():
    goto L96(1.0);
  L387():
    sym28 = ldf `is.character`;
    base28 = ldf `is.character` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L388() else L389();
  D99():
    deopt 393 [];
  L97(r235, r236):
    r237 = `!`(r236);
    c93 = `as.logical`(r237);
    if c93 then L382() else L98();
  L102(r249):
    r250 = `!`(r249);
    c97 = `as.logical`(r250);
    if c97 then L103(c97) else L391();
  L111(r275):
    r277 = `!`(r275);
    c113 = `as.logical`(r277);
    if c113 then L418() else L112();
  L363():
    p55 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      return x38;
    };
    p56 = prom<V +>{
      sx2 = ld sx;
      sx3 = force? sx2;
      checkMissing(sx3);
      return sx3;
    };
    p57 = prom<V +>{
      __9 = ld `/`;
      __10 = force? __9;
      checkMissing(__10);
      return __10;
    };
    r218 = dyn sweep3[, , , , `check.margin`](p55, 2, p56, p57, FALSE);
    check L364() else D100();
  L379():
    main1 = ld main;
    check L381() else D106();
  L380():
    r234 = dyn base26(<sym main>);
    goto L97(r231, r234);
  L388():
    ColSideColors1 = ld ColSideColors;
    check L390() else D108();
  L389():
    r248 = dyn base28(<sym ColSideColors>);
    goto L102(r248);
  L416():
    missing2 = ldf missing in base;
    r276 = dyn missing2(<sym RowSideColors>);
    goto L111(r276);
  L417():
    r274 = dyn base32(<sym RowSideColors>);
    goto L111(r274);
  D100():
    deopt 400 [r218];
  D106():
    deopt 430 [r231, main1];
  D108():
    deopt 448 [ColSideColors1];
  L98():
    goto L99(r235, 0.0);
  L99(r240, r241):
    r242 = `+`(r240, r241);
    c94 = ldf c in base;
    r243 = dyn c94(r242, 4.0);
    check L384() else D107();
  L103(c98):
    c106 = `as.logical`(c98);
    if c106 then L398() else L105();
  L112():
    goto L121();
  L121():
    l = ld lmat;
    c131 = `is.object`(l);
    if c131 then L447() else L448(0.0, l);
  L364():
    st x = r218;
    goto L89();
  L381():
    main2 = force? main1;
    checkMissing(main2);
    c92 = `==`(main2, NULL);
    goto L97(r231, c92);
  L382():
    goto L99(r235, 0.2);
  L390():
    ColSideColors2 = force? ColSideColors1;
    checkMissing(ColSideColors2);
    c96 = `is.character`(ColSideColors2);
    goto L102(c96);
  L391():
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L392() else L393();
  L418():
    sym33 = ldf `is.character`;
    base33 = ldf `is.character` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L419() else L420();
  D107():
    deopt 441 [r243];
  L104(c102, r252):
    nc15 = ld nc;
    check L396() else D111();
  L105():
    goto L106();
  L106():
    rbind1 = ldf rbind;
    check L402() else D114();
  L113(r279):
    r280 = `!`(r279);
    c115 = `as.logical`(r280);
    if c115 then L114(c115) else L422();
  L122(dx31):
    st lmat = dx31;
    verbose1 = ld verbose;
    check L454() else D132();
  L384():
    goto L94(r243);
  L392():
    ColSideColors3 = ld ColSideColors;
    check L394() else D109();
  L393():
    r251 = dyn base29(<sym ColSideColors>);
    goto L104(c97, r251);
  L398():
    stop6 = ldf stop;
    check L399() else D112();
  L419():
    RowSideColors1 = ld RowSideColors;
    check L421() else D119();
  L420():
    r278 = dyn base33(<sym RowSideColors>);
    goto L113(r278);
  L447():
    dr30 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L449() else L448(0.0, dr30);
  L448(r308, l2):
    sym38 = ldf `is.na`;
    base38 = ldf `is.na` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L450() else L451();
  D109():
    deopt 454 [c97, ColSideColors3];
  D111():
    deopt 457 [c102, r252, nc15];
  D112():
    deopt 462 [];
  D114():
    deopt 468 [];
  D119():
    deopt 497 [RowSideColors1];
  D132():
    deopt 552 [verbose1];
  L114(c116):
    c124 = `as.logical`(c116);
    if c124 then L429() else L116();
  L123(r316, l5, r317, r318):
    ___ = ldf `[<-` in base;
    r320 = dyn ___(l5, r317, r318);
    goto L122(r320);
  L394():
    ColSideColors4 = force? ColSideColors3;
    checkMissing(ColSideColors4);
    length4 = ldf length in base;
    r253 = dyn length4(ColSideColors4);
    check L395() else D110();
  L396():
    nc16 = force? nc15;
    checkMissing(nc16);
    r254 = `!=`(r252, nc16);
    c103 = `as.logical`(r254);
    c104 = `||`(c102, c103);
    goto L103(c104);
  L399():
    r255 = dyn stop6("'ColSideColors' must be a character vector of length ncol(x)");
    check L400() else D113();
  L402():
    p60 = prom<V +>{
      lmat = ld lmat;
      lmat1 = force? lmat;
      checkMissing(lmat1);
      c107 = `is.object`(lmat1);
      if c107 then L1() else L2();
    L0(dx15):
      r258 = `+`(dx15, 1.0);
      return r258;
    L1():
      dr14 = tryDispatchBuiltin.1("[", lmat1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      __11 = ldf `[` in base;
      r257 = dyn __11(lmat1, 1.0, <missing>);
      goto L0(r257);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p61 = prom<V +>{
      sym30 = ldf c;
      base30 = ldf c in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r261):
      return r261;
    L1():
      c108 = ldf c in base;
      r262 = dyn c108(NA_LGL, 1.0);
      goto L0(r262);
    L2():
      r260 = dyn base30(NA_LGL, 1.0);
      goto L0(r260);
    };
    p62 = prom<V +>{
      lmat4 = ld lmat;
      lmat5 = force? lmat4;
      checkMissing(lmat5);
      c109 = `is.object`(lmat5);
      if c109 then L1() else L2();
    L0(dx17):
      r265 = `+`(dx17, 1.0);
      return r265;
    L1():
      dr16 = tryDispatchBuiltin.1("[", lmat5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2();
    L2():
      __12 = ldf `[` in base;
      r264 = dyn __12(lmat5, 2.0, <missing>);
      goto L0(r264);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r267 = dyn rbind1(p60, p61, p62);
    check L403() else D115();
  L421():
    RowSideColors2 = force? RowSideColors1;
    checkMissing(RowSideColors2);
    c114 = `is.character`(RowSideColors2);
    goto L113(c114);
  L422():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L423() else L424();
  L449():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L122(dx30);
  L450():
    lmat16 = ld lmat;
    check L452() else D130();
  L451():
    r315 = dyn base38(<sym lmat>);
    goto L123(r308, l2, 0.0, r315);
  L454():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c132 = `as.logical`(verbose2);
    if c132 then L455() else L124();
  D110():
    deopt 457 [c97, r253];
  D113():
    deopt 464 [r255];
  D115():
    deopt 472 [r267];
  D130():
    deopt 546 [r308, l2, 0.0, lmat16];
  L115(c120, r282):
    nr15 = ld nr;
    check L427() else D122();
  L116():
    goto L117();
  L117():
    cbind = ldf cbind;
    check L433() else D125();
  L124():
    goto L125();
  L125():
    dev_hold = ldf `dev.hold`;
    check L461() else D137();
  L395():
    goto L104(c97, r253);
  L400():
    goto L106();
  L403():
    st lmat = r267;
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L404() else L405();
  L423():
    RowSideColors3 = ld RowSideColors;
    check L425() else D120();
  L424():
    r281 = dyn base34(<sym RowSideColors>);
    goto L115(c115, r281);
  L429():
    stop7 = ldf stop;
    check L430() else D123();
  L452():
    lmat17 = force? lmat16;
    checkMissing(lmat17);
    is_na = ldf `is.na` in base;
    r319 = dyn is_na(lmat17);
    check L453() else D131();
  L455():
    cat = ldf cat;
    check L456() else D133();
  D120():
    deopt 503 [c115, RowSideColors3];
  D122():
    deopt 506 [c120, r282, nr15];
  D123():
    deopt 511 [];
  D125():
    deopt 517 [];
  D131():
    deopt 549 [r308, l2, 0.0, r319];
  D133():
    deopt 555 [];
  D137():
    deopt 569 [];
  L107(r269):
    st lhei = r269;
    goto L110();
  L404():
    lhei = ld lhei;
    check L406() else D116();
  L405():
    r268 = dyn base31(<lang `[`(lhei, 1)>, 0.2, <lang `[`(lhei, 2)>);
    goto L107(r268);
  L425():
    RowSideColors4 = force? RowSideColors3;
    checkMissing(RowSideColors4);
    length5 = ldf length in base;
    r283 = dyn length5(RowSideColors4);
    check L426() else D121();
  L427():
    nr16 = force? nr15;
    checkMissing(nr16);
    r284 = `!=`(r282, nr16);
    c121 = `as.logical`(r284);
    c122 = `||`(c120, c121);
    goto L114(c122);
  L430():
    r285 = dyn stop7("'RowSideColors' must be a character vector of length nrow(x)");
    check L431() else D124();
  L433():
    p63 = prom<V +>{
      lmat8 = ld lmat;
      lmat9 = force? lmat8;
      checkMissing(lmat9);
      c125 = `is.object`(lmat9);
      if c125 then L1() else L2();
    L0(dx23):
      r288 = `+`(dx23, 1.0);
      return r288;
    L1():
      dr22 = tryDispatchBuiltin.1("[", lmat9);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2();
    L2():
      __15 = ldf `[` in base;
      r287 = dyn __15(lmat9, <missing>, 1.0);
      goto L0(r287);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    p64 = prom<V +>{
      sym35 = ldf c;
      base35 = ldf c in base;
      guard35 = `==`.4(sym35, base35);
      if guard35 then L2() else L3();
    L0(r291):
      return r291;
    L2():
      sym36 = ldf rep;
      base36 = ldf rep in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L4() else L5();
    L3():
      r290 = dyn base35(<lang rep(NA_LGL, `-`(nrow(lmat), 1.0))>, 1.0);
      goto L0(r290);
    L1(r293):
      c126 = ldf c in base;
      r295 = dyn c126(r293, 1.0);
      goto L0(r295);
    L4():
      rep = ldf rep in base;
      r294 = dyn rep(NA_LGL, <lang `-`(nrow(lmat), 1.0)>);
      goto L1(r294);
    L5():
      r292 = dyn base36(NA_LGL, <lang `-`(nrow(lmat), 1.0)>);
      goto L1(r292);
    };
    p65 = prom<V +>{
      lmat12 = ld lmat;
      lmat13 = force? lmat12;
      checkMissing(lmat13);
      c127 = `is.object`(lmat13);
      if c127 then L1() else L2();
    L0(dx25):
      r298 = `+`(dx25, 1.0);
      return r298;
    L1():
      dr24 = tryDispatchBuiltin.1("[", lmat13);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2();
    L2():
      __16 = ldf `[` in base;
      r297 = dyn __16(lmat13, <missing>, 2.0);
      goto L0(r297);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    r300 = dyn cbind(p63, p64, p65);
    check L434() else D126();
  L453():
    goto L123(r308, l2, 0.0, r319);
  L456():
    p66 = prom<V +>{
      lwid8 = ld lwid;
      lwid9 = force? lwid8;
      checkMissing(lwid9);
      return lwid9;
    };
    p67 = prom<V +>{
      lhei8 = ld lhei;
      lhei9 = force? lhei8;
      checkMissing(lhei9);
      return lhei9;
    };
    r323 = dyn cat("layout: widths = ", p66, ", heights = ", p67, "; lmat=\n");
    check L457() else D134();
  L461():
    r327 = dyn dev_hold();
    check L462() else D138();
  D116():
    deopt 476 [lhei];
  D121():
    deopt 506 [c115, r283];
  D124():
    deopt 513 [r285];
  D126():
    deopt 521 [r300];
  D134():
    deopt 561 [r323];
  D138():
    deopt 570 [r327];
  L406():
    lhei1 = force? lhei;
    checkMissing(lhei1);
    c110 = `is.object`(lhei1);
    if c110 then L407() else L408(lhei1);
  L426():
    goto L115(c115, r283);
  L431():
    goto L117();
  L434():
    st lmat = r300;
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L435() else L436();
  L457():
    print = ldf print;
    check L458() else D135();
  L462():
    sym39 = ldf `on.exit`;
    base39 = ldf `on.exit` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L463() else L464();
  D135():
    deopt 563 [];
  L108(dx19):
    lhei4 = ld lhei;
    check L410() else D117();
  L118(r302):
    st lwid = r302;
    goto L121();
  L126():
    par = ldf par;
    check L465() else D139();
  L407():
    dr18 = tryDispatchBuiltin.1("[", lhei1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L409() else L408(dr18);
  L408(lhei3):
    __13 = ldf `[` in base;
    r270 = dyn __13(lhei3, 1);
    goto L108(r270);
  L435():
    lwid = ld lwid;
    check L437() else D127();
  L436():
    r301 = dyn base37(<lang `[`(lwid, 1)>, 0.2, <lang `[`(lwid, 2)>);
    goto L118(r301);
  L458():
    p68 = prom<V +>{
      lmat18 = ld lmat;
      lmat19 = force? lmat18;
      checkMissing(lmat19);
      return lmat19;
    };
    r325 = dyn print(p68);
    check L459() else D136();
  L463():
    on_exit = ldf `on.exit` in base;
    r330 = dyn on_exit(<lang dev.flush()>);
    goto L126();
  L464():
    r328 = dyn base39(<lang dev.flush()>);
    goto L126();
  D117():
    deopt 482 [lhei4];
  D127():
    deopt 525 [lwid];
  D136():
    deopt 565 [r325];
  D139():
    deopt 575 [];
  L409():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L108(dx18);
  L410():
    lhei5 = force? lhei4;
    checkMissing(lhei5);
    c111 = `is.object`(lhei5);
    if c111 then L411() else L412(lhei5);
  L437():
    lwid1 = force? lwid;
    checkMissing(lwid1);
    c128 = `is.object`(lwid1);
    if c128 then L438() else L439(lwid1);
  L459():
    goto L125();
  L465():
    r331 = dyn par[`no.readonly`](TRUE);
    check L466() else D140();
  D140():
    deopt 578 [r331];
  L109(dx21):
    c112 = ldf c in base;
    r272 = dyn c112(dx19, 0.2, dx21);
    check L414() else D118();
  L119(dx27):
    lwid4 = ld lwid;
    check L441() else D128();
  L411():
    dr20 = tryDispatchBuiltin.1("[", lhei5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L413() else L412(dr20);
  L412(lhei7):
    __14 = ldf `[` in base;
    r271 = dyn __14(lhei7, 2);
    goto L109(r271);
  L438():
    dr26 = tryDispatchBuiltin.1("[", lwid1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L440() else L439(dr26);
  L439(lwid3):
    __17 = ldf `[` in base;
    r303 = dyn __17(lwid3, 1);
    goto L119(r303);
  L466():
    st op = r331;
    sym40 = ldf `on.exit`;
    base40 = ldf `on.exit` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L467() else L468();
  D118():
    deopt 488 [r272];
  D128():
    deopt 531 [lwid4];
  L127():
    layout = ldf layout;
    check L469() else D141();
  L413():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L109(dx20);
  L414():
    goto L107(r272);
  L440():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L119(dx26);
  L441():
    lwid5 = force? lwid4;
    checkMissing(lwid5);
    c129 = `is.object`(lwid5);
    if c129 then L442() else L443(lwid5);
  L467():
    on_exit1 = ldf `on.exit` in base;
    r334 = dyn on_exit1(<lang par(op)>, TRUE);
    goto L127();
  L468():
    r332 = dyn base40[, add](<lang par(op)>, TRUE);
    goto L127();
  D141():
    deopt 584 [];
  L120(dx29):
    c130 = ldf c in base;
    r305 = dyn c130(dx27, 0.2, dx29);
    check L445() else D129();
  L442():
    dr28 = tryDispatchBuiltin.1("[", lwid5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L444() else L443(dr28);
  L443(lwid7):
    __18 = ldf `[` in base;
    r304 = dyn __18(lwid7, 2);
    goto L120(r304);
  L469():
    p69 = prom<V +>{
      lmat20 = ld lmat;
      lmat21 = force? lmat20;
      checkMissing(lmat21);
      return lmat21;
    };
    p70 = prom<V +>{
      lwid10 = ld lwid;
      lwid11 = force? lwid10;
      checkMissing(lwid11);
      return lwid11;
    };
    p71 = prom<V +>{
      lhei10 = ld lhei;
      lhei11 = force? lhei10;
      checkMissing(lhei11);
      return lhei11;
    };
    r338 = dyn layout[, widths, heights, respect](p69, p70, p71, TRUE);
    check L470() else D142();
  D129():
    deopt 537 [r305];
  D142():
    deopt 592 [r338];
  L444():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L120(dx28);
  L445():
    goto L118(r305);
  L470():
    sym41 = ldf missing;
    base41 = ldf missing in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L471() else L472();
  L128(r340):
    r342 = `!`(r340);
    c133 = `as.logical`(r342);
    if c133 then L473() else L129();
  L471():
    missing3 = ldf missing in base;
    r341 = dyn missing3(<sym RowSideColors>);
    goto L128(r341);
  L472():
    r339 = dyn base41(<sym RowSideColors>);
    goto L128(r339);
  L129():
    goto L130();
  L130():
    sym43 = ldf missing;
    base43 = ldf missing in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L479() else L480();
  L473():
    par1 = ldf par;
    check L474() else D143();
  D143():
    deopt 598 [];
  L131(r359):
    r361 = `!`(r359);
    c138 = `as.logical`(r361);
    if c138 then L481() else L132();
  L474():
    p72 = prom<V +>{
      sym42 = ldf c;
      base42 = ldf c in base;
      guard42 = `==`.4(sym42, base42);
      if guard42 then L2() else L3();
    L0(r344):
      return r344;
    L2():
      margins5 = ld margins;
      margins6 = force? margins5;
      checkMissing(margins6);
      c134 = `is.object`(margins6);
      if c134 then L4() else L5(margins6);
    L3():
      r343 = dyn base42(<lang `[`(margins, 1)>, 0.0, 0.0, 0.5);
      goto L0(r343);
    L1(dx33):
      c135 = ldf c in base;
      r346 = dyn c135(dx33, 0.0, 0.0, 0.5);
      goto L0(r346);
    L4():
      dr32 = tryDispatchBuiltin.1("[", margins6);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L6() else L5(dr32);
    L5(margins8):
      __19 = ldf `[` in base;
      r345 = dyn __19(margins8, 1);
      goto L1(r345);
    L6():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L1(dx32);
    };
    r348 = dyn par1[mar](p72);
    check L475() else D144();
  L479():
    missing4 = ldf missing in base;
    r360 = dyn missing4(<sym ColSideColors>);
    goto L131(r360);
  L480():
    r358 = dyn base43(<sym ColSideColors>);
    goto L131(r358);
  D144():
    deopt 601 [r348];
  L132():
    goto L133();
  L133():
    par3 = ldf par;
    check L487() else D151();
  L475():
    image = ldf image;
    check L476() else D145();
  L481():
    par2 = ldf par;
    check L482() else D147();
  D145():
    deopt 603 [];
  D147():
    deopt 617 [];
  D151():
    deopt 632 [];
  L476():
    p74 = prom<V +>{
      rbind2 = ldf rbind;
      p73 = prom<V +>{
        revC1 = ld revC;
        revC2 = force? revC1;
        checkMissing(revC2);
        c136 = `as.logical`(revC2);
        if c136 then L1() else L0();
      L0():
        nr19 = ld nr;
        nr20 = force? nr19;
        checkMissing(nr20);
        r350 = `:`(1, nr20);
        return r350;
      L1():
        nr17 = ld nr;
        nr18 = force? nr17;
        checkMissing(nr18);
        r349 = `:`(nr18, 1);
        return r349;
      };
      r352 = dyn rbind2(p73);
      return r352;
    };
    p75 = prom<V +>{
      RowSideColors5 = ld RowSideColors;
      RowSideColors6 = force? RowSideColors5;
      checkMissing(RowSideColors6);
      c137 = `is.object`(RowSideColors6);
      if c137 then L1() else L2(RowSideColors6);
    L0(dx35):
      return dx35;
    L1():
      dr34 = tryDispatchBuiltin.1("[", RowSideColors6);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(RowSideColors8):
      rowInd6 = ld rowInd;
      rowInd7 = force? rowInd6;
      __20 = ldf `[` in base;
      r354 = dyn __20(RowSideColors8, rowInd7);
      goto L0(r354);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    r356 = dyn image[, col, axes](p74, p75, FALSE);
    check L477() else D146();
  L482():
    p76 = prom<V +>{
      sym44 = ldf c;
      base44 = ldf c in base;
      guard44 = `==`.4(sym44, base44);
      if guard44 then L2() else L3();
    L0(r363):
      return r363;
    L2():
      margins9 = ld margins;
      margins10 = force? margins9;
      checkMissing(margins10);
      c139 = `is.object`(margins10);
      if c139 then L4() else L5(margins10);
    L3():
      r362 = dyn base44(0.5, 0.0, 0.0, <lang `[`(margins, 2)>);
      goto L0(r362);
    L1(dx37):
      c140 = ldf c in base;
      r365 = dyn c140(0.5, 0.0, 0.0, dx37);
      goto L0(r365);
    L4():
      dr36 = tryDispatchBuiltin.1("[", margins10);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L6() else L5(dr36);
    L5(margins12):
      __21 = ldf `[` in base;
      r364 = dyn __21(margins12, 2);
      goto L1(r364);
    L6():
      dx36 = getTryDispatchBuiltinValue(dr36);
      goto L1(dx36);
    };
    r367 = dyn par2[mar](p76);
    check L483() else D148();
  L487():
    p80 = prom<V +>{
      sym45 = ldf c;
      base45 = ldf c in base;
      guard45 = `==`.4(sym45, base45);
      if guard45 then L3() else L4();
    L0(r377):
      return r377;
    L3():
      margins13 = ld margins;
      margins14 = force? margins13;
      checkMissing(margins14);
      c142 = `is.object`(margins14);
      if c142 then L5() else L6(margins14);
    L4():
      r376 = dyn base45(<lang `[`(margins, 1)>, 0.0, 0.0, <lang `[`(margins, 2)>);
      goto L0(r376);
    L1(dx41):
      margins17 = ld margins;
      margins18 = force? margins17;
      checkMissing(margins18);
      c143 = `is.object`(margins18);
      if c143 then L8() else L9(margins18);
    L5():
      dr40 = tryDispatchBuiltin.1("[", margins14);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L7() else L6(dr40);
    L6(margins16):
      __23 = ldf `[` in base;
      r378 = dyn __23(margins16, 1);
      goto L1(r378);
    L2(dx43):
      c144 = ldf c in base;
      r380 = dyn c144(dx41, 0.0, 0.0, dx43);
      goto L0(r380);
    L7():
      dx40 = getTryDispatchBuiltinValue(dr40);
      goto L1(dx40);
    L8():
      dr42 = tryDispatchBuiltin.1("[", margins18);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L10() else L9(dr42);
    L9(margins20):
      __24 = ldf `[` in base;
      r379 = dyn __24(margins20, 2);
      goto L2(r379);
    L10():
      dx42 = getTryDispatchBuiltinValue(dr42);
      goto L2(dx42);
    };
    r382 = dyn par3[mar](p80);
    check L488() else D152();
  D146():
    deopt 609 [r356];
  D148():
    deopt 620 [r367];
  D152():
    deopt 635 [r382];
  L477():
    goto L130();
  L483():
    image1 = ldf image;
    check L484() else D149();
  L488():
    symm7 = ld symm;
    check L489() else D153();
  D149():
    deopt 622 [];
  D153():
    deopt 636 [symm7];
  L484():
    p78 = prom<V +>{
      cbind1 = ldf cbind;
      p77 = prom<V +>{
        nc17 = ld nc;
        nc18 = force? nc17;
        checkMissing(nc18);
        r368 = `:`(1, nc18);
        return r368;
      };
      r370 = dyn cbind1(p77);
      return r370;
    };
    p79 = prom<V +>{
      ColSideColors5 = ld ColSideColors;
      ColSideColors6 = force? ColSideColors5;
      checkMissing(ColSideColors6);
      c141 = `is.object`(ColSideColors6);
      if c141 then L1() else L2(ColSideColors6);
    L0(dx39):
      return dx39;
    L1():
      dr38 = tryDispatchBuiltin.1("[", ColSideColors6);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(ColSideColors8):
      colInd6 = ld colInd;
      colInd7 = force? colInd6;
      __22 = ldf `[` in base;
      r372 = dyn __22(ColSideColors8, colInd7);
      goto L0(r372);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx38);
    };
    r374 = dyn image1[, col, axes](p78, p79, FALSE);
    check L485() else D150();
  L489():
    symm8 = force? symm7;
    checkMissing(symm8);
    r383 = `!`(symm8);
    c145 = `as.logical`(r383);
    if c145 then L134(c145) else L490();
  D150():
    deopt 628 [r374];
  L134(c146):
    c151 = `as.logical`(c146);
    if c151 then L493() else L135();
  L485():
    goto L133();
  L490():
    scale7 = ld scale;
    check L491() else D154();
  D154():
    deopt 639 [c145, scale7];
  L135():
    goto L136();
  L136():
    revC3 = ld revC;
    check L497() else D157();
  L491():
    scale8 = force? scale7;
    checkMissing(scale8);
    r384 = `!=`(scale8, "none");
    c148 = `as.logical`(r384);
    c149 = `||`(c145, c148);
    goto L134(c149);
  L493():
    t1 = ldf t;
    check L494() else D155();
  D155():
    deopt 645 [];
  D157():
    deopt 651 [revC3];
  L494():
    p81 = prom<V +>{
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      return x40;
    };
    r386 = dyn t1(p81);
    check L495() else D156();
  L497():
    revC4 = force? revC3;
    checkMissing(revC4);
    c152 = `as.logical`(revC4);
    if c152 then L498() else L137();
  D156():
    deopt 647 [r386];
  L137():
    nr23 = ld nr;
    check L511() else D164();
  L141():
    image2 = ldf image;
    check L512() else D165();
  L495():
    st x = r386;
    goto L136();
  L498():
    nr21 = ld nr;
    check L499() else D158();
  D158():
    deopt 653 [nr21];
  D164():
    deopt 676 [1, nr23];
  D165():
    deopt 681 [];
  L499():
    nr22 = force? nr21;
    checkMissing(nr22);
    r388 = `:`(nr22, 1.0);
    st iy = r388;
    doRdend6 = ld doRdend;
    check L500() else D159();
  L511():
    nr24 = force? nr23;
    checkMissing(nr24);
    r393 = `:`(1, nr24);
    st iy = r393;
    goto L141();
  L512():
    p83 = prom<V +>{
      nc19 = ld nc;
      nc20 = force? nc19;
      checkMissing(nc20);
      r394 = `:`(1, nc20);
      return r394;
    };
    p84 = prom<V +>{
      nr25 = ld nr;
      nr26 = force? nr25;
      checkMissing(nr26);
      r396 = `:`(1, nr26);
      return r396;
    };
    p85 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      return x46;
    };
    p86 = prom<V +>{
      sym46 = ldf c;
      base46 = ldf c in base;
      guard46 = `==`.4(sym46, base46);
      if guard46 then L1() else L2();
    L0(r402, r403):
      r405 = `+`(r402, r403);
      return r405;
    L1():
      nc21 = ld nc;
      nc22 = force? nc21;
      checkMissing(nc22);
      c155 = ldf c in base;
      r404 = dyn c155(0.0, nc22);
      goto L0(0.5, r404);
    L2():
      r401 = dyn base46(0.0, <sym nc>);
      goto L0(0.5, r401);
    };
    p87 = prom<V +>{
      sym47 = ldf c;
      base47 = ldf c in base;
      guard47 = `==`.4(sym47, base47);
      if guard47 then L1() else L2();
    L0(r410, r411):
      r413 = `+`(r410, r411);
      return r413;
    L1():
      nr27 = ld nr;
      nr28 = force? nr27;
      checkMissing(nr28);
      c156 = ldf c in base;
      r412 = dyn c156(0.0, nr28);
      goto L0(0.5, r412);
    L2():
      r409 = dyn base47(0.0, <sym nr>);
      goto L0(0.5, r409);
    };
    ddd1 = ld `...`;
    r415 = dyn image2[, , , xlim, ylim, axes, xlab, ylab, `...`](p83, p84, p85, p86, p87, FALSE, "", "", ddd1);
    check L513() else D166();
  D159():
    deopt 658 [doRdend6];
  D166():
    deopt 696 [r415];
  L500():
    doRdend7 = force? doRdend6;
    checkMissing(doRdend7);
    c153 = `as.logical`(doRdend7);
    if c153 then L501() else L138();
  L513():
    axis = ldf axis;
    check L514() else D167();
  D167():
    deopt 698 [];
  L138():
    goto L139();
  L139():
    x41 = ld x;
    check L505() else D162();
  L501():
    rev = ldf rev;
    check L502() else D160();
  L514():
    p88 = prom<V +>{
      nc23 = ld nc;
      nc24 = force? nc23;
      checkMissing(nc24);
      r416 = `:`(1, nc24);
      return r416;
    };
    p89 = prom<V +>{
      labCol5 = ld labCol;
      labCol6 = force? labCol5;
      checkMissing(labCol6);
      return labCol6;
    };
    p90 = prom<V +>{
      return -0.5;
    };
    p91 = prom<V +>{
      cexCol1 = ld cexCol;
      cexCol2 = force? cexCol1;
      checkMissing(cexCol2);
      return cexCol2;
    };
    r421 = dyn axis[, , labels, las, line, tick, `cex.axis`](1.0, p88, p89, 2.0, p90, 0.0, p91);
    check L515() else D168();
  D160():
    deopt 661 [];
  D162():
    deopt 667 [x41];
  D168():
    deopt 711 [r421];
  L502():
    p82 = prom<V +>{
      ddr6 = ld ddr;
      ddr7 = force? ddr6;
      checkMissing(ddr7);
      return ddr7;
    };
    r390 = dyn rev(p82);
    check L503() else D161();
  L505():
    x42 = force? x41;
    checkMissing(x42);
    c154 = `is.object`(x42);
    if c154 then L506() else L507(x42);
  L515():
    sym48 = ldf `is.null`;
    base48 = ldf `is.null` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L516() else L517();
  D161():
    deopt 663 [r390];
  L140(dx45):
    st x = dx45;
    goto L141();
  L142(r423):
    r424 = `!`(r423);
    c158 = `as.logical`(r424);
    if c158 then L519() else L143();
  L503():
    st ddr = r390;
    goto L139();
  L506():
    dr44 = tryDispatchBuiltin.1("[", x42);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L508() else L507(dr44);
  L507(x44):
    iy = ld iy;
    check L509() else D163();
  L516():
    xlab1 = ld xlab;
    check L518() else D169();
  L517():
    r422 = dyn base48(<sym xlab>);
    goto L142(r422);
  D163():
    deopt 670 [x44, iy];
  D169():
    deopt 713 [xlab1];
  L143():
    goto L144();
  L144():
    axis1 = ldf axis;
    check L523() else D172();
  L508():
    dx44 = getTryDispatchBuiltinValue(dr44);
    goto L140(dx44);
  L509():
    iy1 = force? iy;
    __25 = ldf `[` in base;
    r392 = dyn __25(x42, <missing>, iy1);
    goto L140(r392);
  L518():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c157 = `==`(xlab2, NULL);
    goto L142(c157);
  L519():
    mtext = ldf mtext;
    check L520() else D170();
  D170():
    deopt 718 [];
  D172():
    deopt 728 [];
  L520():
    p92 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p93 = prom<V +>{
      margins21 = ld margins;
      margins22 = force? margins21;
      checkMissing(margins22);
      c159 = `is.object`(margins22);
      if c159 then L1() else L2(margins22);
    L0(dx48):
      r427 = `-`(dx48, 1.25);
      return r427;
    L1():
      dr46 = tryDispatchBuiltin.1("[", margins22);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(margins24):
      __26 = ldf `[` in base;
      r426 = dyn __26(margins24, 1);
      goto L0(r426);
    L3():
      dx47 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx47);
    };
    r429 = dyn mtext[, side, line](p92, 1.0, p93);
    check L521() else D171();
  L523():
    p94 = prom<V +>{
      iy2 = ld iy;
      iy3 = force? iy2;
      checkMissing(iy3);
      return iy3;
    };
    p95 = prom<V +>{
      labRow5 = ld labRow;
      labRow6 = force? labRow5;
      checkMissing(labRow6);
      return labRow6;
    };
    p96 = prom<V +>{
      return -0.5;
    };
    p97 = prom<V +>{
      cexRow1 = ld cexRow;
      cexRow2 = force? cexRow1;
      checkMissing(cexRow2);
      return cexRow2;
    };
    r435 = dyn axis1[, , labels, las, line, tick, `cex.axis`](4.0, p94, p95, 2.0, p96, 0.0, p97);
    check L524() else D173();
  D171():
    deopt 724 [r429];
  D173():
    deopt 741 [r435];
  L521():
    goto L144();
  L524():
    sym49 = ldf `is.null`;
    base49 = ldf `is.null` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L525() else L526();
  L145(r437):
    r438 = `!`(r437);
    c161 = `as.logical`(r438);
    if c161 then L528() else L146();
  L525():
    ylab1 = ld ylab;
    check L527() else D174();
  L526():
    r436 = dyn base49(<sym ylab>);
    goto L145(r436);
  D174():
    deopt 743 [ylab1];
  L146():
    goto L147();
  L147():
    sym50 = ldf missing;
    base50 = ldf missing in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L532() else L533();
  L527():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c160 = `==`(ylab2, NULL);
    goto L145(c160);
  L528():
    mtext1 = ldf mtext;
    check L529() else D175();
  D175():
    deopt 748 [];
  L148(r446):
    r448 = `!`(r446);
    c163 = `as.logical`(r448);
    if c163 then L534() else L149();
  L529():
    p98 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p99 = prom<V +>{
      margins25 = ld margins;
      margins26 = force? margins25;
      checkMissing(margins26);
      c162 = `is.object`(margins26);
      if c162 then L1() else L2(margins26);
    L0(dx50):
      r441 = `-`(dx50, 1.25);
      return r441;
    L1():
      dr48 = tryDispatchBuiltin.1("[", margins26);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(margins28):
      __27 = ldf `[` in base;
      r440 = dyn __27(margins28, 2);
      goto L0(r440);
    L3():
      dx49 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx49);
    };
    r443 = dyn mtext1[, side, line](p98, 4.0, p99);
    check L530() else D176();
  L532():
    missing5 = ldf missing in base;
    r447 = dyn missing5(<sym add.expr>);
    goto L148(r447);
  L533():
    r445 = dyn base50(<sym add.expr>);
    goto L148(r445);
  D176():
    deopt 754 [r443];
  L149():
    goto L150();
  L150():
    par4 = ldf par;
    check L538() else D179();
  L530():
    goto L147();
  L534():
    eval_parent = ldf `eval.parent`;
    check L535() else D177();
  D177():
    deopt 762 [];
  D179():
    deopt 768 [];
  L535():
    p100 = prom<V +>{
      sym51 = ldf substitute;
      base51 = ldf substitute in base;
      guard51 = `==`.4(sym51, base51);
      if guard51 then L1() else L2();
    L0(r450):
      return r450;
    L1():
      substitute = ldf substitute in base;
      r451 = dyn substitute(<sym add.expr>);
      goto L0(r451);
    L2():
      r449 = dyn base51(<sym add.expr>);
      goto L0(r449);
    };
    r453 = dyn eval_parent(p100);
    check L536() else D178();
  L538():
    p101 = prom<V +>{
      sym52 = ldf c;
      base52 = ldf c in base;
      guard52 = `==`.4(sym52, base52);
      if guard52 then L2() else L3();
    L0(r456):
      return r456;
    L2():
      margins29 = ld margins;
      margins30 = force? margins29;
      checkMissing(margins30);
      c164 = `is.object`(margins30);
      if c164 then L4() else L5(margins30);
    L3():
      r455 = dyn base52(<lang `[`(margins, 1)>, 0.0, 0.0, 0.0);
      goto L0(r455);
    L1(dx52):
      c165 = ldf c in base;
      r458 = dyn c165(dx52, 0.0, 0.0, 0.0);
      goto L0(r458);
    L4():
      dr50 = tryDispatchBuiltin.1("[", margins30);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L6() else L5(dr50);
    L5(margins32):
      __28 = ldf `[` in base;
      r457 = dyn __28(margins32, 1);
      goto L1(r457);
    L6():
      dx51 = getTryDispatchBuiltinValue(dr50);
      goto L1(dx51);
    };
    r460 = dyn par4[mar](p101);
    check L539() else D180();
  D178():
    deopt 764 [r453];
  D180():
    deopt 771 [r460];
  L536():
    goto L150();
  L539():
    doRdend8 = ld doRdend;
    check L540() else D181();
  D181():
    deopt 772 [doRdend8];
  L540():
    doRdend9 = force? doRdend8;
    checkMissing(doRdend9);
    c166 = `as.logical`(doRdend9);
    if c166 then L541() else L151();
  L151():
    frame = ldf frame;
    check L545() else D184();
  L152():
    par5 = ldf par;
    check L547() else D186();
  L541():
    plot = ldf plot;
    check L542() else D182();
  D182():
    deopt 775 [];
  D184():
    deopt 787 [];
  D186():
    deopt 790 [];
  L542():
    p102 = prom<V +>{
      ddr8 = ld ddr;
      ddr9 = force? ddr8;
      checkMissing(ddr9);
      return ddr9;
    };
    r462 = dyn plot[, horiz, axes, yaxs, leaflab](p102, TRUE, FALSE, "i", "none");
    check L543() else D183();
  L545():
    r464 = dyn frame();
    check L546() else D185();
  L547():
    p103 = prom<V +>{
      sym53 = ldf c;
      base53 = ldf c in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L5() else L6();
    L0(r466):
      return r466;
    L5():
      sym54 = ldf `is.null`;
      base54 = ldf `is.null` in base;
      guard54 = `==`.4(sym54, base54);
      if guard54 then L7() else L8();
    L6():
      r465 = dyn base53(0.0, 0.0, <lang if(`!`(is.null(main)), 1.0, 0.0)>, <lang `[`(margins, 2)>);
      goto L0(r465);
    L1(r468):
      r469 = `!`(r468);
      c168 = `as.logical`(r469);
      if c168 then L9() else L2();
    L7():
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      c167 = `==`(main4, NULL);
      goto L1(c167);
    L8():
      r467 = dyn base54(<sym main>);
      goto L1(r467);
    L2():
      goto L3(0.0);
    L3(r470):
      margins33 = ld margins;
      margins34 = force? margins33;
      checkMissing(margins34);
      c169 = `is.object`(margins34);
      if c169 then L11() else L12(margins34);
    L9():
      goto L3(1.0);
    L4(dx54):
      c170 = ldf c in base;
      r472 = dyn c170(0.0, 0.0, r470, dx54);
      goto L0(r472);
    L11():
      dr52 = tryDispatchBuiltin.1("[", margins34);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L13() else L12(dr52);
    L12(margins36):
      __29 = ldf `[` in base;
      r471 = dyn __29(margins36, 2);
      goto L4(r471);
    L13():
      dx53 = getTryDispatchBuiltinValue(dr52);
      goto L4(dx53);
    };
    r474 = dyn par5[mar](p103);
    check L548() else D187();
  D183():
    deopt 785 [r462];
  D185():
    deopt 788 [r464];
  D187():
    deopt 793 [r474];
  L543():
    goto L152();
  L546():
    goto L152();
  L548():
    doCdend4 = ld doCdend;
    check L549() else D188();
  D188():
    deopt 794 [doCdend4];
  L549():
    doCdend5 = force? doCdend4;
    checkMissing(doCdend5);
    c171 = `as.logical`(doCdend5);
    if c171 then L550() else L153();
  L153():
    sym55 = ldf `is.null`;
    base55 = ldf `is.null` in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L554() else L555();
  L154():
    sym56 = ldf `is.null`;
    base56 = ldf `is.null` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L561() else L562();
  L550():
    plot1 = ldf plot;
    check L551() else D189();
  D189():
    deopt 797 [];
  L155(r479):
    r480 = `!`(r479);
    c173 = `as.logical`(r480);
    if c173 then L557() else L156();
  L157(r483):
    r484 = `!`(r483);
    c175 = `as.logical`(r484);
    if c175 then L564() else L158();
  L551():
    p104 = prom<V +>{
      ddc4 = ld ddc;
      ddc5 = force? ddc4;
      checkMissing(ddc5);
      return ddc5;
    };
    r476 = dyn plot1[, axes, xaxs, leaflab](p104, FALSE, "i", "none");
    check L552() else D190();
  L554():
    main5 = ld main;
    check L556() else D191();
  L555():
    r478 = dyn base55(<sym main>);
    goto L155(r478);
  L561():
    main7 = ld main;
    check L563() else D194();
  L562():
    r482 = dyn base56(<sym main>);
    goto L157(r482);
  D190():
    deopt 805 [r476];
  D191():
    deopt 807 [main5];
  D194():
    deopt 817 [main7];
  L156():
    goto L154();
  L158():
    goto L159();
  L159():
    sym57 = ldf invisible;
    base57 = ldf invisible in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L570() else L571();
  L552():
    goto L154();
  L556():
    main6 = force? main5;
    checkMissing(main6);
    c172 = `==`(main6, NULL);
    goto L155(c172);
  L557():
    frame1 = ldf frame;
    check L558() else D192();
  L563():
    main8 = force? main7;
    checkMissing(main8);
    c174 = `==`(main8, NULL);
    goto L157(c174);
  L564():
    par6 = ldf par;
    check L565() else D195();
  D192():
    deopt 812 [];
  D195():
    deopt 822 [];
  L160(r497):
    popenv;
    return r497;
  L558():
    r481 = dyn frame1();
    check L559() else D193();
  L565():
    r485 = dyn par6[xpd](NA_LGL);
    check L566() else D196();
  L570():
    sym58 = ldf list;
    base58 = ldf list in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L572() else L573();
  L571():
    r496 = dyn base57(<lang list(rowInd=rowInd, colInd=colInd, Rowv=if(`&&`(keep.dendro, doRdend), ddr), Colv=if(`&&`(keep.dendro, doCdend), ddc))>);
    goto L160(r496);
  D193():
    deopt 813 [r481];
  D196():
    deopt 825 [r485];
  L161(r499):
    invisible = ldf invisible in base;
    r501 = dyn invisible(r499);
    check L591() else D208();
  L559():
    goto L154();
  L566():
    title = ldf title;
    check L567() else D197();
  L572():
    rowInd8 = ld rowInd;
    check L574() else D199();
  L573():
    r498 = dyn base58[rowInd, colInd, Rowv, Colv](<sym rowInd>, <sym colInd>, <lang if(`&&`(keep.dendro, doRdend), ddr)>, <lang if(`&&`(keep.dendro, doCdend), ddc)>);
    goto L161(r498);
  D197():
    deopt 827 [];
  D199():
    deopt 838 [rowInd8];
  D208():
    deopt 867 [r501];
  L567():
    p105 = prom<V +>{
      main9 = ld main;
      main10 = force? main9;
      checkMissing(main10);
      return main10;
    };
    p106 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      c176 = `is.object`(op1);
      if c176 then L1() else L2(1.5, op1);
    L0(r490, dx56):
      r492 = `*`(r490, dx56);
      return r492;
    L1():
      dr54 = tryDispatchBuiltin.1("[[", op1);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(1.5, dr54);
    L2(r488, op3):
      __30 = ldf `[[` in base;
      r491 = dyn __30(op3, "cex.main");
      goto L0(r488, r491);
    L3():
      dx55 = getTryDispatchBuiltinValue(dr54);
      goto L0(1.5, dx55);
    };
    r494 = dyn title[, `cex.main`](p105, p106);
    check L568() else D198();
  L574():
    rowInd9 = force? rowInd8;
    checkMissing(rowInd9);
    colInd8 = ld colInd;
    check L575() else D200();
  L591():
    goto L160(r501);
  D198():
    deopt 831 [r494];
  D200():
    deopt 841 [colInd8];
  L568():
    goto L159();
  L575():
    colInd9 = force? colInd8;
    checkMissing(colInd9);
    keep_dendro1 = ld `keep.dendro`;
    check L576() else D201();
  D201():
    deopt 844 [keep_dendro1];
  L576():
    keep_dendro2 = force? keep_dendro1;
    checkMissing(keep_dendro2);
    c177 = `as.logical`(keep_dendro2);
    if c177 then L577() else L162(c177);
  L162(c179):
    c183 = `as.logical`(c179);
    if c183 then L580() else L163();
  L577():
    doRdend10 = ld doRdend;
    check L578() else D202();
  D202():
    deopt 846 [c177, doRdend10];
  L163():
    goto L164(NULL);
  L164(ddr12):
    keep_dendro3 = ld `keep.dendro`;
    check L583() else D204();
  L578():
    doRdend11 = force? doRdend10;
    checkMissing(doRdend11);
    c180 = `as.logical`(doRdend11);
    c181 = `&&`(c177, c180);
    goto L162(c181);
  L580():
    ddr10 = ld ddr;
    check L581() else D203();
  D203():
    deopt 849 [ddr10];
  D204():
    deopt 854 [keep_dendro3];
  L581():
    ddr11 = force? ddr10;
    checkMissing(ddr11);
    goto L164(ddr11);
  L583():
    keep_dendro4 = force? keep_dendro3;
    checkMissing(keep_dendro4);
    c184 = `as.logical`(keep_dendro4);
    if c184 then L584() else L165(c184);
  L165(c186):
    c190 = `as.logical`(c186);
    if c190 then L587() else L166();
  L584():
    doCdend6 = ld doCdend;
    check L585() else D205();
  D205():
    deopt 856 [c184, doCdend6];
  L166():
    goto L167(NULL);
  L167(ddc8):
    list = ldf list in base;
    r500 = dyn list(rowInd9, colInd9, ddr12, ddc8);
    check L590() else D207();
  L585():
    doCdend7 = force? doCdend6;
    checkMissing(doCdend7);
    c187 = `as.logical`(doCdend7);
    c188 = `&&`(c184, c187);
    goto L165(c188);
  L587():
    ddc6 = ld ddc;
    check L588() else D206();
  D206():
    deopt 859 [ddc6];
  D207():
    deopt 865 [r500];
  L588():
    ddc7 = force? ddc6;
    checkMissing(ddc7);
    goto L167(ddc7);
  L590():
    goto L161(r500);
  }
}
fun inner1668500607(d, w) {
  (reg d:*, reg w:*) -+> V { var d:*, var w:*, reg reorder:cls, reg d1:*, reg d2:V, reg p:p(V +), reg w1:*, reg w2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st d = d;
    st w = w;
    reorder = ldf reorder;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      d1 = ld d;
      d2 = force? d1;
      checkMissing(d2);
      return d2;
    };
    p1 = prom<V +>{
      w1 = ld w;
      w2 = force? w1;
      checkMissing(w2);
      return w2;
    };
    r2 = dyn reorder(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner4061490079(c) {
  (reg c:*) -+> V { var c:*, reg as_dist:cls, reg c1:*, reg c2:V, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st c = c;
    as_dist = ldf `as.dist`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      c1 = ld c;
      c2 = force? c1;
      checkMissing(c2);
      r = `-`(1.0, c2);
      return r;
    };
    r2 = dyn as_dist(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}