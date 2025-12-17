fun main() {
  () -+> V { reg r:cls, reg cars:*, reg cars1:V, reg c:L, reg cars3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg cars4:*, reg cars5:V, reg c1:L, reg cars7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg plot:cls, reg Speed:*, reg Speed1:V, reg p:p(V +), reg Distance:*, reg Distance1:V, reg p1:p(V +), reg grid:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg plot1:cls, reg Speed2:*, reg Speed3:V, reg p3:p(V +), reg Distance2:*, reg Distance3:V, reg p4:p(V +), reg lines:cls, reg __:cls, reg r10:V, reg r11:cls, reg Speed4:*, reg Speed5:V, reg p5:p(V +), reg Distance4:*, reg Distance5:V, reg p6:p(V +), reg r14:V, reg p7:p(V +), reg r16:V, reg p8:p(V +), reg r18:V, reg r19:V, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:V, reg x:*, reg x1:V, reg r22:V, reg r23:V, reg par:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg c2:cls, reg r26:V, reg p9:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:R, reg r32:V, reg c3:cls, reg r33:V, reg r34:V, reg p10:p(V +), reg r36:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg c4:cls, reg r39:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x2:V, reg plot2:cls, reg __1:cls, reg r40:V, reg p11:p(V +), reg tp:*, reg tp1:V, reg p12:p(V +), reg paste0:cls, reg tp2:*, reg tp3:V, reg p13:p(V +), reg r44:V, reg p14:p(V +), reg r46:V, reg tp4:*, reg tp5:V, reg r47:V, reg c6:L, reg lines1:cls, reg x3:*, reg x4:V, reg p15:p(V +), reg y:*, reg y1:V, reg p16:p(V +), reg r50:V, reg mtext:cls, reg r51:V, reg i7:I, reg par1:cls, reg op:*, reg op1:V, reg p17:p(V +), reg r54:V, reg seq:cls, reg r55:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r56:V, reg r57:V, reg expression:cls, reg r58:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r59:V, reg r60:V, reg lx:*, reg lx1:V, reg r61:V, reg r62:V, reg r63:V, reg par2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r64:V, reg r65:V, reg c7:cls, reg r66:V, reg p18:p(V +), reg par3:cls, reg r68:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r71:V, reg r72:V, reg r73:V, reg c8:cls, reg r74:V, reg r75:V, reg p19:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r77:V, reg r78:V, reg c9:cls, reg r79:V, reg p20:p(V +), reg r81:V, reg plot3:cls, reg lx2:*, reg lx3:V, reg r82:V, reg p21:p(V +), reg y2:*, reg y3:V, reg p22:p(V +), reg yl:*, reg yl1:V, reg p23:p(V +), reg r86:V, reg plot4:cls, reg lx4:*, reg lx5:V, reg r87:V, reg p24:p(V +), reg y4:*, reg y5:V, reg p25:p(V +), reg yl2:*, reg yl3:V, reg p26:p(V +), reg r91:V, reg axis:cls, reg my_at:*, reg my_at1:V, reg p27:p(V +), reg formatC:cls, reg my_at2:*, reg my_at3:V, reg p28:p(V +), reg r94:V, reg p29:p(V +), reg r96:V, reg e_y:*, reg e_y1:V, reg r97:V, reg axis1:cls, reg at_y:*, reg at_y1:V, reg p30:p(V +), reg as_expression:cls, reg lapply:cls, reg e_y2:*, reg e_y3:V, reg p31:p(V +), reg r100:cls, reg p32:p(V +), reg r102:V, reg p33:p(V +), reg r104:V, reg p34:p(V +), reg r106:V, reg par4:cls, reg op2:*, reg op3:V, reg p35:p(V +), reg r108:V |
    mkenv;
    r = clos inner1323344340;
    st `plot.default` = r;
    cars = ld cars;
    check L8() else D0();
  D0():
    deopt 3 [cars];
  L8():
    cars1 = force? cars;
    checkMissing(cars1);
    c = `is.object`(cars1);
    if c then L10() else L11(cars1);
  L9(dx1):
    st Speed = dx1;
    cars4 = ld cars;
    check L13() else D1();
  L10():
    dr = tryDispatchBuiltin.1("$", cars1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(cars3):
    r1 = `$`(cars3, <sym speed>);
    goto L9(r1);
  D1():
    deopt 7 [cars4];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    cars5 = force? cars4;
    checkMissing(cars5);
    c1 = `is.object`(cars5);
    if c1 then L15() else L16(cars5);
  L14(dx3):
    st Distance = dx3;
    plot = ldf plot;
    check L18() else D2();
  L15():
    dr2 = tryDispatchBuiltin.1("$", cars5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dr2);
  L16(cars7):
    r2 = `$`(cars7, <sym dist>);
    goto L14(r2);
  D2():
    deopt 12 [];
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx2);
  L18():
    p = prom<V +>{
      Speed = ld Speed;
      Speed1 = force? Speed;
      checkMissing(Speed1);
      return Speed1;
    };
    p1 = prom<V +>{
      Distance = ld Distance;
      Distance1 = force? Distance;
      checkMissing(Distance1);
      return Distance1;
    };
    p2 = prom<V +>{
      grid = ldf grid;
      r5 = dyn grid(8.0, 8.0);
      return r5;
    };
    r7 = dyn plot[, , `panel.first`, pch, cex, col](p, p1, p2, 0.0, 1.2, "blue");
    check L19() else D3();
  D3():
    deopt 23 [r7];
  L19():
    plot1 = ldf plot;
    check L20() else D4();
  D4():
    deopt 25 [];
  L20():
    p3 = prom<V +>{
      Speed2 = ld Speed;
      Speed3 = force? Speed2;
      checkMissing(Speed3);
      return Speed3;
    };
    p4 = prom<V +>{
      Distance2 = ld Distance;
      Distance3 = force? Distance2;
      checkMissing(Distance3);
      return Distance3;
    };
    p8 = prom<V +>{
      lines = ldf lines;
      p7 = prom<V +>{
        __ = ldf `::`;
        r10 = dyn __("stats", "lowess");
        checkFun.0(r10);
        r11 = r10 as cls;
        p5 = prom<V +>{
          Speed4 = ld Speed;
          Speed5 = force? Speed4;
          checkMissing(Speed5);
          return Speed5;
        };
        p6 = prom<V +>{
          Distance4 = ld Distance;
          Distance5 = force? Distance4;
          checkMissing(Distance5);
          return Distance5;
        };
        r14 = dyn r11(p5, p6);
        return r14;
      };
      r16 = dyn lines[, lty](p7, "dashed");
      return r16;
    };
    r18 = dyn plot1[, , `panel.first`, pch, cex, col](p3, p4, p8, 0.0, 1.2, "blue");
    check L21() else D5();
  D5():
    deopt 36 [r18];
  L21():
    r19 = `:`(0.0, 12.0);
    st x = r19;
    sym = ldf sin;
    base = ldf sin in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L0(r21):
    st y = r21;
    par = ldf par;
    check L25() else D7();
  L22():
    x = ld x;
    check L24() else D6();
  L23():
    r20 = dyn base(<lang `*`(`/`(pi, 5.0), x)>);
    goto L0(r20);
  D6():
    deopt 44 [0.6283185307179586, x];
  D7():
    deopt 50 [];
  L24():
    x1 = force? x;
    checkMissing(x1);
    r22 = `*`(0.6283185307179586, x1);
    r23 = sin(r22);
    goto L0(r23);
  L25():
    p9 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      c2 = ldf c in base;
      r26 = dyn c2(3.0, 3.0);
      goto L0(r26);
    L2():
      r24 = dyn base1(3.0, 3.0);
      goto L0(r24);
    };
    p10 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r31, r32):
      r34 = `+`(r31, r32);
      return r34;
    L1():
      c3 = ldf c in base;
      r33 = dyn c3(2.0, 2.0, 3.0, 1.0);
      goto L0(0.1, r33);
    L2():
      r30 = dyn base2(2.0, 2.0, 3.0, 1.0);
      goto L0(0.1, r30);
    };
    r36 = dyn par[mfrow, mar](p9, p10);
    check L26() else D8();
  D8():
    deopt 55 [r36];
  L26():
    st op = r36;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L1(r38):
    s = toForSeq(r38);
    l = length(s);
    i = 0;
    goto L2(i);
  L27():
    c4 = ldf c in base;
    r39 = dyn c4("p", "l", "b", "c", "o", "h", "s", "S", "n");
    check L29() else D9();
  L28():
    r37 = dyn base3("p", "l", "b", "c", "o", "h", "s", "S", "n");
    goto L1(r37);
  D9():
    deopt 69 [r39];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L30() else L5();
  L29():
    goto L1(r39);
  L5():
    x2 = `[[`(s, i2, NULL, TRUE);
    st tp = x2;
    plot2 = ldf plot;
    check L31() else D10();
  L30():
    par1 = ldf par;
    check L40() else D17();
  D10():
    deopt 71 [i2];
  D17():
    deopt 107 [];
  L31():
    p11 = prom<V +>{
      __1 = ldf `~` in base;
      r40 = dyn __1(<sym y>, <sym x>);
      return r40;
    };
    p12 = prom<V +>{
      tp = ld tp;
      tp1 = force? tp;
      checkMissing(tp1);
      return tp1;
    };
    p14 = prom<V +>{
      paste0 = ldf paste0;
      p13 = prom<V +>{
        tp2 = ld tp;
        tp3 = force? tp2;
        checkMissing(tp3);
        return tp3;
      };
      r44 = dyn paste0("plot(*, type = \"", p13, "\")");
      return r44;
    };
    r46 = dyn plot2[, type, main](p11, p12, p14);
    check L32() else D11();
  L40():
    p17 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r54 = dyn par1(p17);
    check L41() else D18();
  D11():
    deopt 77 [i2, r46];
  D18():
    deopt 109 [r54];
  L32():
    tp4 = ld tp;
    check L33() else D12();
  L41():
    seq = ldf seq;
    check L42() else D19();
  D12():
    deopt 78 [i2, tp4];
  D19():
    deopt 111 [];
  L33():
    tp5 = force? tp4;
    checkMissing(tp5);
    r47 = `==`(tp5, "S");
    c6 = `as.logical`(r47);
    if c6 then L34() else L3();
  L42():
    r55 = dyn seq[, , `length.out`](1.0, 5.0, 41.0);
    check L43() else D20();
  D20():
    deopt 116 [r55];
  L3():
    goto L4(i2);
  L4(i7):
    goto L2(i7);
  L34():
    lines1 = ldf lines;
    check L35() else D13();
  L43():
    st lx = r55;
    sym4 = ldf expression;
    base4 = ldf expression in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D13():
    deopt 83 [i2];
  L6(r57):
    st yl = r57;
    sym5 = ldf exp;
    base5 = ldf exp in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L35():
    p15 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p16 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r50 = dyn lines1[, , type, col, lty](p15, p16, "s", "red", 2.0);
    check L36() else D14();
  L44():
    expression = ldf expression in base;
    r58 = dyn expression(<lang `^`(e, {
        `*`(`-`(frac(1.0, 2.0)), `^`({
              `[`(log, 10.0)(x)
            }, 2.0))
      })>);
    goto L6(r58);
  L45():
    r56 = dyn base4(<lang `^`(e, {
        `*`(`-`(frac(1.0, 2.0)), `^`({
              `[`(log, 10.0)(x)
            }, 2.0))
      })>);
    goto L6(r56);
  D14():
    deopt 92 [i2, r50];
  L7(r60):
    st y = r60;
    par2 = ldf par;
    check L49() else D22();
  L36():
    mtext = ldf mtext;
    check L37() else D15();
  L46():
    lx = ld lx;
    check L48() else D21();
  L47():
    r59 = dyn base5(<lang `*`(`-`(0.5), `^`(lx, 2.0))>);
    goto L7(r59);
  D15():
    deopt 94 [i2];
  D21():
    deopt 124 [-0.5, lx];
  D22():
    deopt 132 [];
  L37():
    r51 = dyn mtext[, col, cex]("lines(*, type = \"s\", ...)", "red", 0.8);
    check L38() else D16();
  L48():
    lx1 = force? lx;
    checkMissing(lx1);
    r61 = `^`(lx1, 2.0);
    r62 = `*`(-0.5, r61);
    r63 = exp(r62);
    goto L7(r63);
  L49():
    p18 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r65):
      return r65;
    L1():
      c7 = ldf c in base;
      r66 = dyn c7(2.0, 1.0);
      goto L0(r66);
    L2():
      r64 = dyn base6(2.0, 1.0);
      goto L0(r64);
    };
    p19 = prom<V +>{
      par3 = ldf par;
      r68 = dyn par3("mar");
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r72, r73):
      r75 = `-`(r72, r73);
      return r75;
    L1():
      c8 = ldf c in base;
      r74 = dyn c8(1.0, 0.0, 2.0, 0.0);
      goto L0(r68, r74);
    L2():
      r71 = dyn base7(1.0, 0.0, 2.0, 0.0);
      goto L0(r68, r71);
    };
    p20 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r78):
      return r78;
    L1():
      c9 = ldf c in base;
      r79 = dyn c9(2.0, 0.7, 0.0);
      goto L0(r79);
    L2():
      r77 = dyn base8(2.0, 0.7, 0.0);
      goto L0(r77);
    };
    r81 = dyn par2[mfrow, mar, mgp](p18, p19, p20);
    check L50() else D23();
  D16():
    deopt 100 [i2, r51];
  D23():
    deopt 139 [r81];
  L38():
    goto L4(i2);
  L50():
    st op = r81;
    plot3 = ldf plot;
    check L51() else D24();
  D24():
    deopt 142 [];
  L51():
    p21 = prom<V +>{
      lx2 = ld lx;
      lx3 = force? lx2;
      checkMissing(lx3);
      r82 = `^`(10.0, lx3);
      return r82;
    };
    p22 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p23 = prom<V +>{
      yl = ld yl;
      yl1 = force? yl;
      checkMissing(yl1);
      return yl1;
    };
    r86 = dyn plot3[, , log, type, col, main, ylab, xlab](p21, p22, "xy", "l", "purple", "Log-Log plot", p23, "x");
    check L52() else D25();
  D25():
    deopt 157 [r86];
  L52():
    plot4 = ldf plot;
    check L53() else D26();
  D26():
    deopt 159 [];
  L53():
    p24 = prom<V +>{
      lx4 = ld lx;
      lx5 = force? lx4;
      checkMissing(lx5);
      r87 = `^`(10.0, lx5);
      return r87;
    };
    p25 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p26 = prom<V +>{
      yl2 = ld yl;
      yl3 = force? yl2;
      checkMissing(yl3);
      return yl3;
    };
    r91 = dyn plot4[, , log, type, pch, col, main, ylab, xlab, axes, `frame.plot`](p24, p25, "xy", "o", ".", "forestgreen", "Log-Log plot with custom axes", p26, "x", FALSE, TRUE);
    check L54() else D27();
  D27():
    deopt 180 [r91];
  L54():
    st `my.at` = <real 10.0, 100.0, 1000.0, 10000.0, 100000.0>;
    axis = ldf axis;
    check L55() else D28();
  D28():
    deopt 185 [];
  L55():
    p27 = prom<V +>{
      my_at = ld `my.at`;
      my_at1 = force? my_at;
      checkMissing(my_at1);
      return my_at1;
    };
    p29 = prom<V +>{
      formatC = ldf formatC;
      p28 = prom<V +>{
        my_at2 = ld `my.at`;
        my_at3 = force? my_at2;
        checkMissing(my_at3);
        return my_at3;
      };
      r94 = dyn formatC[, format](p28, "fg");
      return r94;
    };
    r96 = dyn axis[, at, labels](1.0, p27, p29);
    check L56() else D29();
  D29():
    deopt 191 [r96];
  L56():
    st `e.y` = <int -5, -4, -3, -2, -1>;
    e_y = ld `e.y`;
    check L57() else D30();
  D30():
    deopt 196 [10.0, e_y];
  L57():
    e_y1 = force? e_y;
    checkMissing(e_y1);
    r97 = `^`(10.0, e_y1);
    st `at.y` = r97;
    axis1 = ldf axis;
    check L58() else D31();
  D31():
    deopt 201 [];
  L58():
    p30 = prom<V +>{
      at_y = ld `at.y`;
      at_y1 = force? at_y;
      checkMissing(at_y1);
      return at_y1;
    };
    p34 = prom<V +>{
      as_expression = ldf `as.expression`;
      p33 = prom<V +>{
        lapply = ldf lapply;
        p31 = prom<V +>{
          e_y2 = ld `e.y`;
          e_y3 = force? e_y2;
          checkMissing(e_y3);
          return e_y3;
        };
        p32 = prom<V +>{
          r100 = clos inner767881217;
          return r100;
        };
        r102 = dyn lapply(p31, p32);
        return r102;
      };
      r104 = dyn as_expression(p33);
      return r104;
    };
    r106 = dyn axis1[, at, `col.axis`, las, labels](2.0, p30, "red", 1.0, p34);
    check L59() else D32();
  D32():
    deopt 211 [r106];
  L59():
    par4 = ldf par;
    check L60() else D33();
  D33():
    deopt 213 [];
  L60():
    p35 = prom<V +>{
      op2 = ld op;
      op3 = force? op2;
      checkMissing(op3);
      return op3;
    };
    r108 = dyn par4(p35);
    check L61() else D34();
  D34():
    deopt 215 [r108];
  L61():
    popenv;
    return r108;
  }
}
fun inner1323344340(x, y, type, xlim, ylim, log, main, sub, xlab, ylab, ann, axes, `frame.plot`, `panel.first`, `panel.last`, asp, `xgap.axis`, `ygap.axis`, `...`) {
  (reg x:*, reg y:*, reg type:*, reg xlim:*, reg ylim:*, reg log:*, reg main:*, reg sub:*, reg xlab:*, reg ylab:*, reg ann:*, reg axes:*, reg frame_plot:*, reg panel_first:*, reg panel_last:*, reg asp:*, reg xgap_axis:*, reg ygap_axis:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, reg axes1:*, reg axes2:V, reg p1:p(V +), var `panel.first`:*, reg panel_first_isMissing:L, reg panel_first_orDefault:*, var `panel.last`:*, reg panel_last_isMissing:L, reg panel_last_orDefault:*, var asp:*, reg asp_isMissing:L, reg asp_orDefault:*, var `xgap.axis`:*, reg xgap_axis_isMissing:L, reg xgap_axis_orDefault:*, var `ygap.axis`:*, reg ygap_axis_isMissing:L, reg ygap_axis_orDefault:*, var `...`:dots?, reg r3:cls, reg r4:cls, reg r5:cls, reg r6:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg missing:cls, reg r9:V, reg r10:V, reg c:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg substitute:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg missing1:cls, reg r19:V, reg r20:V, reg c1:L, reg deparse2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg substitute1:cls, reg r23:V, reg p3:p(V +), reg r25:V, reg r26:V, reg xy_coords:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg y1:*, reg y2:V, reg p5:p(V +), reg xlabel:*, reg xlabel1:V, reg p6:p(V +), reg ylabel:*, reg ylabel1:V, reg p7:p(V +), reg log1:*, reg log2:V, reg p8:p(V +), reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg xlab1:*, reg xlab2:V, reg c2:V, reg c3:L, reg xy:*, reg xy1:V, reg c4:L, reg xy3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg ylab1:*, reg ylab2:V, reg c5:V, reg c6:L, reg xy4:*, reg xy5:V, reg c7:L, reg xy7:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg xlim1:*, reg xlim2:V, reg c8:V, reg c9:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg xy8:*, reg xy9:V, reg c10:L, reg xy11:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r43:V, reg c11:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg dx14:V, reg r45:V, reg xy12:*, reg xy13:V, reg c12:L, reg dx16:V, reg xy15:V, reg dr8:V, reg dc4:L, reg dx18:V, reg dx19:V, reg dx20:V, reg r46:V, reg is_finite:cls, reg r47:V, reg __:cls, reg r48:V, reg range:cls, reg r49:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r51:V, reg r52:V, reg ylim1:*, reg ylim2:V, reg c13:V, reg c14:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:V, reg xy16:*, reg xy17:V, reg c15:L, reg xy19:V, reg dr10:V, reg dc5:L, reg dx21:V, reg dx22:V, reg r55:V, reg c16:L, reg dx24:V, reg dr12:V, reg dc6:L, reg dx25:V, reg dx26:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg dx29:V, reg r57:V, reg xy20:*, reg xy21:V, reg c17:L, reg dx31:V, reg xy23:V, reg dr14:V, reg dc7:L, reg dx33:V, reg dx34:V, reg dx35:V, reg r58:V, reg is_finite1:cls, reg r59:V, reg __1:cls, reg r60:V, reg range1:cls, reg r61:V, reg dev_hold:cls, reg r63:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r64:V, reg on_exit:cls, reg r66:V, reg plot_new:cls, reg r67:V, reg localWindow:cls, reg xlim3:*, reg xlim4:V, reg p9:p(V +), reg ylim3:*, reg ylim4:V, reg p10:p(V +), reg log3:*, reg log4:V, reg p11:p(V +), reg asp1:*, reg asp2:V, reg p12:p(V +), reg ddd1:dots?, reg r72:V, reg panel_first1:*, reg panel_first2:V, reg plot_xy:cls, reg xy24:*, reg xy25:V, reg p13:p(V +), reg type1:*, reg type2:V, reg p14:p(V +), reg ddd2:dots?, reg r75:V, reg panel_last1:*, reg panel_last2:V, reg axes3:*, reg axes4:V, reg c18:L, reg localAxis:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg r77:V, reg y3:*, reg y4:V, reg c19:V, reg c20:L, reg xy26:*, reg xy27:V, reg c21:L, reg xy29:V, reg dr16:V, reg dc8:L, reg dx36:V, reg dx37:V, reg r78:V, reg x3:*, reg x4:V, reg p15:p(V +), reg xgap_axis1:*, reg xgap_axis2:V, reg p16:p(V +), reg ddd3:dots?, reg r81:V, reg localAxis1:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r82:V, reg r83:V, reg y5:*, reg y6:V, reg c22:V, reg c23:L, reg x5:*, reg x6:V, reg y7:*, reg y8:V, reg p17:p(V +), reg ygap_axis1:*, reg ygap_axis2:V, reg p18:p(V +), reg ddd4:dots?, reg r86:V, reg frame_plot1:*, reg frame_plot2:V, reg c24:L, reg localBox:cls, reg ddd5:dots?, reg r88:V, reg ann1:*, reg ann2:V, reg c25:L, reg localTitle:cls, reg main1:*, reg main2:V, reg p19:p(V +), reg sub1:*, reg sub2:V, reg p20:p(V +), reg xlab3:*, reg xlab4:V, reg p21:p(V +), reg ylab3:*, reg ylab4:V, reg p22:p(V +), reg ddd6:dots?, reg r94:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r96:V, reg r97:V, reg invisible:cls, reg r98:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1("p") else L1(type);
  L1(type_orDefault):
    st type = type_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L2(NULL) else L2(xlim);
  L2(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L3(NULL) else L3(ylim);
  L3(ylim_orDefault):
    st ylim = ylim_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L4("") else L4(log);
  L4(log_orDefault):
    st log = log_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L5(NULL) else L5(main);
  L5(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L6(NULL) else L6(sub);
  L6(sub_orDefault):
    st sub = sub_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L7(NULL) else L7(xlab);
  L7(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L8(NULL) else L8(ylab);
  L8(ylab_orDefault):
    st ylab = ylab_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L9() else L10(ann);
  L9():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("ann");
      return r;
    };
    goto L10(p);
  L10(ann_orDefault):
    st ann = ann_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L11(TRUE) else L11(axes);
  L11(axes_orDefault):
    st axes = axes_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L12() else L13(frame_plot);
  L12():
    p1 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    goto L13(p1);
  L13(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    panel_first_isMissing = missing.0(panel_first);
    if panel_first_isMissing then L14(NULL) else L14(panel_first);
  L14(panel_first_orDefault):
    st `panel.first` = panel_first_orDefault;
    panel_last_isMissing = missing.0(panel_last);
    if panel_last_isMissing then L15(NULL) else L15(panel_last);
  L15(panel_last_orDefault):
    st `panel.last` = panel_last_orDefault;
    asp_isMissing = missing.0(asp);
    if asp_isMissing then L16(NA_LGL) else L16(asp);
  L16(asp_orDefault):
    st asp = asp_orDefault;
    xgap_axis_isMissing = missing.0(xgap_axis);
    if xgap_axis_isMissing then L17(NA_LGL) else L17(xgap_axis);
  L17(xgap_axis_orDefault):
    st `xgap.axis` = xgap_axis_orDefault;
    ygap_axis_isMissing = missing.0(ygap_axis);
    if ygap_axis_isMissing then L18(NA_LGL) else L18(ygap_axis);
  L18(ygap_axis_orDefault):
    st `ygap.axis` = ygap_axis_orDefault;
    st `...` = ddd;
    r3 = clos inner3419269248;
    st localAxis = r3;
    r4 = clos inner3419269248;
    st localBox = r4;
    r5 = clos inner3419269248;
    st localWindow = r5;
    r6 = clos inner3419269248;
    st localTitle = r6;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L51() else L52();
  L19(r8):
    r10 = `!`(r8);
    c = `as.logical`(r10);
    if c then L53() else L20();
  L51():
    missing = ldf missing in base;
    r9 = dyn missing(<sym x>);
    goto L19(r9);
  L52():
    r7 = dyn base(<sym x>);
    goto L19(r7);
  L20():
    goto L21(NULL);
  L21(r16):
    st xlabel = r16;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  L53():
    deparse1 = ldf deparse1;
    check L54() else D0();
  D0():
    deopt 17 [];
  L22(r18):
    r20 = `!`(r18);
    c1 = `as.logical`(r20);
    if c1 then L59() else L23();
  L54():
    p2 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      substitute = ldf substitute in base;
      r13 = dyn substitute(<sym x>);
      goto L0(r13);
    L2():
      r11 = dyn base1(<sym x>);
      goto L0(r11);
    };
    r15 = dyn deparse1(p2);
    check L55() else D1();
  L57():
    missing1 = ldf missing in base;
    r19 = dyn missing1(<sym y>);
    goto L22(r19);
  L58():
    r17 = dyn base2(<sym y>);
    goto L22(r17);
  D1():
    deopt 19 [r15];
  L23():
    goto L24(NULL);
  L24(r26):
    st ylabel = r26;
    xy_coords = ldf `xy.coords`;
    check L63() else D4();
  L55():
    goto L21(r15);
  L59():
    deparse2 = ldf deparse1;
    check L60() else D2();
  D2():
    deopt 28 [];
  D4():
    deopt 35 [];
  L60():
    p3 = prom<V +>{
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      substitute1 = ldf substitute in base;
      r23 = dyn substitute1(<sym y>);
      goto L0(r23);
    L2():
      r21 = dyn base3(<sym y>);
      goto L0(r21);
    };
    r25 = dyn deparse2(p3);
    check L61() else D3();
  L63():
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p5 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p6 = prom<V +>{
      xlabel = ld xlabel;
      xlabel1 = force? xlabel;
      checkMissing(xlabel1);
      return xlabel1;
    };
    p7 = prom<V +>{
      ylabel = ld ylabel;
      ylabel1 = force? ylabel;
      checkMissing(ylabel1);
      return ylabel1;
    };
    p8 = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    r32 = dyn xy_coords(p4, p5, p6, p7, p8);
    check L64() else D5();
  D3():
    deopt 30 [r25];
  D5():
    deopt 41 [r32];
  L61():
    goto L24(r25);
  L64():
    st xy = r32;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L25(r34):
    c3 = `as.logical`(r34);
    if c3 then L68() else L26();
  L65():
    xlab1 = ld xlab;
    check L67() else D6();
  L66():
    r33 = dyn base4(<sym xlab>);
    goto L25(r33);
  D6():
    deopt 44 [xlab1];
  L26():
    goto L27();
  L27():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L67():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c2 = `==`(xlab2, NULL);
    goto L25(c2);
  L68():
    xy = ld xy;
    check L69() else D7();
  D7():
    deopt 47 [xy];
  L28(r37):
    c6 = `as.logical`(r37);
    if c6 then L78() else L29();
  L69():
    xy1 = force? xy;
    checkMissing(xy1);
    c4 = `is.object`(xy1);
    if c4 then L71() else L72(xy1);
  L75():
    ylab1 = ld ylab;
    check L77() else D8();
  L76():
    r36 = dyn base5(<sym ylab>);
    goto L28(r36);
  D8():
    deopt 54 [ylab1];
  L29():
    goto L30();
  L30():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L70(dx1):
    st xlab = dx1;
    goto L27();
  L71():
    dr = tryDispatchBuiltin.1("$", xy1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L73() else L72(dr);
  L72(xy3):
    r35 = `$`(xy3, <sym xlab>);
    goto L70(r35);
  L77():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c5 = `==`(ylab2, NULL);
    goto L28(c5);
  L78():
    xy4 = ld xy;
    check L79() else D9();
  D9():
    deopt 57 [xy4];
  L31(r40):
    c9 = `as.logical`(r40);
    if c9 then L88() else L32();
  L73():
    dx = getTryDispatchBuiltinValue(dr);
    goto L70(dx);
  L79():
    xy5 = force? xy4;
    checkMissing(xy5);
    c7 = `is.object`(xy5);
    if c7 then L81() else L82(xy5);
  L85():
    xlim1 = ld xlim;
    check L87() else D10();
  L86():
    r39 = dyn base6(<sym xlim>);
    goto L31(r39);
  D10():
    deopt 64 [xlim1];
  L32():
    goto L36();
  L36():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L109() else L110();
  L80(dx4):
    st ylab = dx4;
    goto L30();
  L81():
    dr2 = tryDispatchBuiltin.1("$", xy5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L83() else L82(dr2);
  L82(xy7):
    r38 = `$`(xy7, <sym ylab>);
    goto L80(r38);
  L87():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c8 = `==`(xlim2, NULL);
    goto L31(c8);
  L88():
    sym7 = ldf range;
    base7 = ldf range in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L33(r42):
    st xlim = r42;
    goto L36();
  L37(r52):
    c14 = `as.logical`(r52);
    if c14 then L112() else L38();
  L83():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L80(dx3);
  L89():
    xy8 = ld xy;
    check L91() else D11();
  L90():
    r41 = dyn base7(<lang `[`(`$`(xy, x), is.finite(`$`(xy, x)))>);
    goto L33(r41);
  L109():
    ylim1 = ld ylim;
    check L111() else D15();
  L110():
    r51 = dyn base9(<sym ylim>);
    goto L37(r51);
  D11():
    deopt 69 [xy8];
  D15():
    deopt 86 [ylim1];
  L38():
    goto L42();
  L42():
    dev_hold = ldf `dev.hold`;
    check L133() else D20();
  L91():
    xy9 = force? xy8;
    checkMissing(xy9);
    c10 = `is.object`(xy9);
    if c10 then L93() else L94(xy9);
  L111():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c13 = `==`(ylim2, NULL);
    goto L37(c13);
  L112():
    sym10 = ldf range;
    base10 = ldf range in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L113() else L114();
  D20():
    deopt 108 [];
  L39(r54):
    st ylim = r54;
    goto L42();
  L92(dx7):
    c11 = `is.object`(dx7);
    if c11 then L96() else L97(dx7);
  L93():
    dr4 = tryDispatchBuiltin.1("$", xy9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L95() else L94(dr4);
  L94(xy11):
    r43 = `$`(xy11, <sym x>);
    goto L92(r43);
  L113():
    xy16 = ld xy;
    check L115() else D16();
  L114():
    r53 = dyn base10(<lang `[`(`$`(xy, y), is.finite(`$`(xy, y)))>);
    goto L39(r53);
  L133():
    r63 = dyn dev_hold();
    check L134() else D21();
  D16():
    deopt 91 [xy16];
  D21():
    deopt 109 [r63];
  L34(dx11):
    range = ldf range in base;
    r49 = dyn range(dx11);
    check L107() else D14();
  L95():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L92(dx6);
  L96():
    dr6 = tryDispatchBuiltin.1("[", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L98() else L97(dr6);
  L97(dx9):
    sym8 = ldf `is.finite`;
    base8 = ldf `is.finite` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L115():
    xy17 = force? xy16;
    checkMissing(xy17);
    c15 = `is.object`(xy17);
    if c15 then L117() else L118(xy17);
  L134():
    sym12 = ldf `on.exit`;
    base12 = ldf `on.exit` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L135() else L136();
  D14():
    deopt 81 [r49];
  L35(dx14, r45):
    __ = ldf `[` in base;
    r48 = dyn __(dx14, r45);
    goto L34(r48);
  L43():
    plot_new = ldf `plot.new`;
    check L137() else D22();
  L98():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L34(dx10);
  L99():
    xy12 = ld xy;
    check L101() else D12();
  L100():
    r44 = dyn base8(<lang `$`(xy, x)>);
    goto L35(dx9, r44);
  L107():
    goto L33(r49);
  L116(dx22):
    c16 = `is.object`(dx22);
    if c16 then L120() else L121(dx22);
  L117():
    dr10 = tryDispatchBuiltin.1("$", xy17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L119() else L118(dr10);
  L118(xy19):
    r55 = `$`(xy19, <sym y>);
    goto L116(r55);
  L135():
    on_exit = ldf `on.exit` in base;
    r66 = dyn on_exit(<lang dev.flush()>);
    goto L43();
  L136():
    r64 = dyn base12(<lang dev.flush()>);
    goto L43();
  D12():
    deopt 74 [dx9, xy12];
  D22():
    deopt 114 [];
  L40(dx26):
    range1 = ldf range in base;
    r61 = dyn range1(dx26);
    check L131() else D19();
  L101():
    xy13 = force? xy12;
    checkMissing(xy13);
    c12 = `is.object`(xy13);
    if c12 then L103() else L104(dx9, xy13);
  L119():
    dx21 = getTryDispatchBuiltinValue(dr10);
    goto L116(dx21);
  L120():
    dr12 = tryDispatchBuiltin.1("[", dx22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L122() else L121(dr12);
  L121(dx24):
    sym11 = ldf `is.finite`;
    base11 = ldf `is.finite` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L123() else L124();
  L137():
    r67 = dyn plot_new();
    check L138() else D23();
  D19():
    deopt 103 [r61];
  D23():
    deopt 115 [r67];
  L41(dx29, r57):
    __1 = ldf `[` in base;
    r60 = dyn __1(dx29, r57);
    goto L40(r60);
  L102(dx19, dx20):
    is_finite = ldf `is.finite` in base;
    r47 = dyn is_finite(dx20);
    check L106() else D13();
  L103():
    dr8 = tryDispatchBuiltin.1("$", xy13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L105() else L104(dx9, dr8);
  L104(dx16, xy15):
    r46 = `$`(xy15, <sym x>);
    goto L102(dx16, r46);
  L122():
    dx25 = getTryDispatchBuiltinValue(dr12);
    goto L40(dx25);
  L123():
    xy20 = ld xy;
    check L125() else D17();
  L124():
    r56 = dyn base11(<lang `$`(xy, y)>);
    goto L41(dx24, r56);
  L131():
    goto L39(r61);
  L138():
    localWindow = ldf localWindow;
    check L139() else D24();
  D13():
    deopt 78 [dx19, r47];
  D17():
    deopt 96 [dx24, xy20];
  D24():
    deopt 117 [];
  L105():
    dx18 = getTryDispatchBuiltinValue(dr8);
    goto L102(dx9, dx18);
  L106():
    goto L35(dx19, r47);
  L125():
    xy21 = force? xy20;
    checkMissing(xy21);
    c17 = `is.object`(xy21);
    if c17 then L127() else L128(dx24, xy21);
  L139():
    p9 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      return xlim4;
    };
    p10 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    p11 = prom<V +>{
      log3 = ld log;
      log4 = force? log3;
      checkMissing(log4);
      return log4;
    };
    p12 = prom<V +>{
      asp1 = ld asp;
      asp2 = force? asp1;
      checkMissing(asp2);
      return asp2;
    };
    ddd1 = ld `...`;
    r72 = dyn localWindow[, , , , `...`](p9, p10, p11, p12, ddd1);
    check L140() else D25();
  D25():
    deopt 123 [r72];
  L126(dx34, dx35):
    is_finite1 = ldf `is.finite` in base;
    r59 = dyn is_finite1(dx35);
    check L130() else D18();
  L127():
    dr14 = tryDispatchBuiltin.1("$", xy21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L129() else L128(dx24, dr14);
  L128(dx31, xy23):
    r58 = `$`(xy23, <sym y>);
    goto L126(dx31, r58);
  L140():
    panel_first1 = ld `panel.first`;
    check L141() else D26();
  D18():
    deopt 100 [dx34, r59];
  D26():
    deopt 124 [panel_first1];
  L129():
    dx33 = getTryDispatchBuiltinValue(dr14);
    goto L126(dx24, dx33);
  L130():
    goto L41(dx34, r59);
  L141():
    panel_first2 = force? panel_first1;
    checkMissing(panel_first2);
    plot_xy = ldf `plot.xy`;
    check L142() else D27();
  D27():
    deopt 127 [];
  L142():
    p13 = prom<V +>{
      xy24 = ld xy;
      xy25 = force? xy24;
      checkMissing(xy25);
      return xy25;
    };
    p14 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    ddd2 = ld `...`;
    r75 = dyn plot_xy[, , `...`](p13, p14, ddd2);
    check L143() else D28();
  D28():
    deopt 131 [r75];
  L143():
    panel_last1 = ld `panel.last`;
    check L144() else D29();
  D29():
    deopt 132 [panel_last1];
  L144():
    panel_last2 = force? panel_last1;
    checkMissing(panel_last2);
    axes3 = ld axes;
    check L145() else D30();
  D30():
    deopt 134 [axes3];
  L145():
    axes4 = force? axes3;
    checkMissing(axes4);
    c18 = `as.logical`(axes4);
    if c18 then L146() else L44();
  L44():
    goto L45();
  L45():
    frame_plot1 = ld `frame.plot`;
    check L152() else D35();
  L146():
    localAxis = ldf localAxis;
    check L147() else D31();
  D31():
    deopt 137 [];
  D35():
    deopt 156 [frame_plot1];
  L147():
    p15 = prom<V +>{
      sym13 = ldf `is.null`;
      base13 = ldf `is.null` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L2() else L3();
    L0(r77):
      c20 = `as.logical`(r77);
      if c20 then L4() else L1();
    L2():
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      c19 = `==`(y4, NULL);
      goto L0(c19);
    L3():
      r76 = dyn base13(<sym y>);
      goto L0(r76);
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    L4():
      xy26 = ld xy;
      xy27 = force? xy26;
      checkMissing(xy27);
      c21 = `is.object`(xy27);
      if c21 then L6() else L7(xy27);
    L5(dx37):
      return dx37;
    L6():
      dr16 = tryDispatchBuiltin.1("$", xy27);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L8() else L7(dr16);
    L7(xy29):
      r78 = `$`(xy29, <sym x>);
      goto L5(r78);
    L8():
      dx36 = getTryDispatchBuiltinValue(dr16);
      goto L5(dx36);
    };
    p16 = prom<V +>{
      xgap_axis1 = ld `xgap.axis`;
      xgap_axis2 = force? xgap_axis1;
      checkMissing(xgap_axis2);
      return xgap_axis2;
    };
    ddd3 = ld `...`;
    r81 = dyn localAxis[, side, `gap.axis`, `...`](p15, 1.0, p16, ddd3);
    check L148() else D32();
  L152():
    frame_plot2 = force? frame_plot1;
    checkMissing(frame_plot2);
    c24 = `as.logical`(frame_plot2);
    if c24 then L153() else L46();
  D32():
    deopt 144 [r81];
  L46():
    goto L47();
  L47():
    ann1 = ld ann;
    check L157() else D38();
  L148():
    localAxis1 = ldf localAxis;
    check L149() else D33();
  L153():
    localBox = ldf localBox;
    check L154() else D36();
  D33():
    deopt 146 [];
  D36():
    deopt 159 [];
  D38():
    deopt 164 [ann1];
  L149():
    p17 = prom<V +>{
      sym14 = ldf `is.null`;
      base14 = ldf `is.null` in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r83):
      c23 = `as.logical`(r83);
      if c23 then L4() else L1();
    L2():
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      c22 = `==`(y6, NULL);
      goto L0(c22);
    L3():
      r82 = dyn base14(<sym y>);
      goto L0(r82);
    L1():
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    L4():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p18 = prom<V +>{
      ygap_axis1 = ld `ygap.axis`;
      ygap_axis2 = force? ygap_axis1;
      checkMissing(ygap_axis2);
      return ygap_axis2;
    };
    ddd4 = ld `...`;
    r86 = dyn localAxis1[, side, `gap.axis`, `...`](p17, 2.0, p18, ddd4);
    check L150() else D34();
  L154():
    ddd5 = ld `...`;
    r88 = dyn localBox[`...`](ddd5);
    check L155() else D37();
  L157():
    ann2 = force? ann1;
    checkMissing(ann2);
    c25 = `as.logical`(ann2);
    if c25 then L158() else L48();
  D34():
    deopt 153 [r86];
  D37():
    deopt 161 [r88];
  L48():
    goto L49();
  L49():
    sym15 = ldf invisible;
    base15 = ldf invisible in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L162() else L163();
  L150():
    goto L45();
  L155():
    goto L47();
  L158():
    localTitle = ldf localTitle;
    check L159() else D39();
  D39():
    deopt 167 [];
  L50(r97):
    popenv;
    return r97;
  L159():
    p19 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p20 = prom<V +>{
      sub1 = ld sub;
      sub2 = force? sub1;
      checkMissing(sub2);
      return sub2;
    };
    p21 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p22 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    ddd6 = ld `...`;
    r94 = dyn localTitle[main, sub, xlab, ylab, `...`](p19, p20, p21, p22, ddd6);
    check L160() else D40();
  L162():
    invisible = ldf invisible in base;
    r98 = dyn invisible();
    check L164() else D41();
  L163():
    r96 = dyn base15();
    goto L50(r96);
  D40():
    deopt 177 [r94];
  D41():
    deopt 183 [r98];
  L160():
    goto L49();
  L164():
    goto L50(r98);
  }
}
fun inner3419269248(`...`, col, bg, pch, cex, lty, lwd) {
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
fun inner767881217(E) {
  (reg E:*) -+> V { var E:*, reg bquote:cls, reg __:cls, reg E1:*, reg E2:V, reg p:p(V +), reg r1:V, reg r2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    st E = E;
    bquote = ldf bquote;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      __ = ldf `.`;
      p = prom<V +>{
        E1 = ld E;
        E2 = force? E1;
        checkMissing(E2);
        return E2;
      };
      r1 = dyn __(p);
      r2 = `^`(10.0, r1);
      return r2;
    };
    r4 = dyn bquote(p1);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}