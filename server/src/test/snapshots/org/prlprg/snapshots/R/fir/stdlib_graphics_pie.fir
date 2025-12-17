fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg grDevices:*, reg grDevices1:V, reg p:p(V +), reg r4:V, reg pie:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg rep:cls, reg r7:V, reg p1:p(V +), reg rainbow:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg c:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg c1:cls, reg r17:V, reg l:*, reg names__:cls, reg r18:V, reg pie1:cls, reg pie_sales:*, reg pie_sales1:V, reg p3:p(V +), reg r20:V, reg pie2:cls, reg pie_sales2:*, reg pie_sales3:V, reg p4:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg c2:cls, reg r24:V, reg p5:p(V +), reg r26:V, reg pie3:cls, reg pie_sales4:*, reg pie_sales5:V, reg p6:p(V +), reg gray:cls, reg seq:cls, reg r28:V, reg p7:p(V +), reg r30:V, reg p8:p(V +), reg r32:V, reg pie4:cls, reg pie_sales6:*, reg pie_sales7:V, reg p9:p(V +), reg p10:p(V +), reg r35:V, reg pie5:cls, reg pie_sales8:*, reg pie_sales9:V, reg p11:p(V +), reg r37:V, reg segments:cls, reg r38:V, reg text:cls, reg r39:V, reg pie6:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg rep1:cls, reg r42:V, reg p12:p(V +), reg rainbow1:cls, reg n:*, reg n1:V, reg p13:p(V +), reg r45:V, reg p14:p(V +), reg r47:V, reg pie7:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg c3:cls, reg r50:V, reg p15:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg c4:cls, reg r54:V, reg p16:p(V +), reg r56:V |
    mkenv;
    r = clos inner2461435457;
    st pie = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    pie = ldf pie;
    check L7() else D2();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym grDevices>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L5():
    p = prom<V +>{
      grDevices = ld grDevices;
      grDevices1 = force? grDevices;
      checkMissing(grDevices1);
      return grDevices1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    p1 = prom<V +>{
      sym1 = ldf rep;
      base1 = ldf rep in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      rep = ldf rep in base;
      r7 = dyn rep(1.0, 24.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(1.0, 24.0);
      goto L0(r5);
    };
    p2 = prom<V +>{
      rainbow = ldf rainbow;
      r9 = dyn rainbow(24.0);
      return r9;
    };
    r11 = dyn pie[, col, radius](p1, p2, 0.9);
    check L8() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 15 [r11];
  L6():
    goto L0();
  L8():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L9() else L10();
  L1(r13):
    st `pie.sales` = r13;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L12() else L13();
  L9():
    c = ldf c in base;
    r14 = dyn c(0.12, 0.3, 0.26, 0.16, 0.04, 0.12);
    check L11() else D4();
  L10():
    r12 = dyn base2(0.12, 0.3, 0.26, 0.16, 0.04, 0.12);
    goto L1(r12);
  D4():
    deopt 25 [r14];
  L2(r16):
    l = ld `pie.sales`;
    names__ = ldf `names<-`;
    check L15() else D6();
  L11():
    goto L1(r14);
  L12():
    c1 = ldf c in base;
    r17 = dyn c1("Blueberry", "Cherry", "Apple", "Boston Cream", "Other", "Vanilla Cream");
    check L14() else D5();
  L13():
    r15 = dyn base3("Blueberry", "Cherry", "Apple", "Boston Cream", "Other", "Vanilla Cream");
    goto L2(r15);
  D5():
    deopt 36 [r17];
  D6():
    deopt 38 [r16, l, r16];
  L14():
    goto L2(r17);
  L15():
    r18 = dyn names__(l, NULL, r16);
    check L16() else D7();
  D7():
    deopt 40 [r16, r18];
  L16():
    st `pie.sales` = r18;
    pie1 = ldf pie;
    check L17() else D8();
  D8():
    deopt 43 [];
  L17():
    p3 = prom<V +>{
      pie_sales = ld `pie.sales`;
      pie_sales1 = force? pie_sales;
      checkMissing(pie_sales1);
      return pie_sales1;
    };
    r20 = dyn pie1(p3);
    check L18() else D9();
  D9():
    deopt 45 [r20];
  L18():
    pie2 = ldf pie;
    check L19() else D10();
  D10():
    deopt 47 [];
  L19():
    p4 = prom<V +>{
      pie_sales2 = ld `pie.sales`;
      pie_sales3 = force? pie_sales2;
      checkMissing(pie_sales3);
      return pie_sales3;
    };
    p5 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c2 = ldf c in base;
      r24 = dyn c2("purple", "violetred1", "green3", "cornsilk", "cyan", "white");
      goto L0(r24);
    L2():
      r22 = dyn base4("purple", "violetred1", "green3", "cornsilk", "cyan", "white");
      goto L0(r22);
    };
    r26 = dyn pie2[, col](p4, p5);
    check L20() else D11();
  D11():
    deopt 51 [r26];
  L20():
    pie3 = ldf pie;
    check L21() else D12();
  D12():
    deopt 53 [];
  L21():
    p6 = prom<V +>{
      pie_sales4 = ld `pie.sales`;
      pie_sales5 = force? pie_sales4;
      checkMissing(pie_sales5);
      return pie_sales5;
    };
    p8 = prom<V +>{
      gray = ldf gray;
      p7 = prom<V +>{
        seq = ldf seq;
        r28 = dyn seq[, , `length.out`](0.4, 1.0, 6.0);
        return r28;
      };
      r30 = dyn gray(p7);
      return r30;
    };
    r32 = dyn pie3[, col](p6, p8);
    check L22() else D13();
  D13():
    deopt 57 [r32];
  L22():
    pie4 = ldf pie;
    check L23() else D14();
  D14():
    deopt 59 [];
  L23():
    p9 = prom<V +>{
      pie_sales6 = ld `pie.sales`;
      pie_sales7 = force? pie_sales6;
      checkMissing(pie_sales7);
      return pie_sales7;
    };
    p10 = prom<V +>{
      return <real 25.0, 35.0, 45.0, 55.0, 65.0, 75.0>;
    };
    r35 = dyn pie4[, density, angle](p9, 10.0, p10);
    check L24() else D15();
  D15():
    deopt 65 [r35];
  L24():
    pie5 = ldf pie;
    check L25() else D16();
  D16():
    deopt 67 [];
  L25():
    p11 = prom<V +>{
      pie_sales8 = ld `pie.sales`;
      pie_sales9 = force? pie_sales8;
      checkMissing(pie_sales9);
      return pie_sales9;
    };
    r37 = dyn pie5[, clockwise, main](p11, TRUE, "pie(*, clockwise = TRUE)");
    check L26() else D17();
  D17():
    deopt 73 [r37];
  L26():
    segments = ldf segments;
    check L27() else D18();
  D18():
    deopt 75 [];
  L27():
    r38 = dyn segments[, , , , col, lwd](0.0, 0.0, 0.0, 1.0, "red", 2.0);
    check L28() else D19();
  D19():
    deopt 84 [r38];
  L28():
    text = ldf text;
    check L29() else D20();
  D20():
    deopt 86 [];
  L29():
    r39 = dyn text[, , , col](0.0, 1.0, "init.angle = 90", "red");
    check L30() else D21();
  D21():
    deopt 92 [r39];
  L30():
    st n = 200.0;
    pie6 = ldf pie;
    check L31() else D22();
  D22():
    deopt 97 [];
  L31():
    p12 = prom<V +>{
      sym5 = ldf rep;
      base5 = ldf rep in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      rep1 = ldf rep in base;
      r42 = dyn rep1(1.0, <sym n>);
      goto L0(r42);
    L2():
      r40 = dyn base5(1.0, <sym n>);
      goto L0(r40);
    };
    p14 = prom<V +>{
      rainbow1 = ldf rainbow;
      p13 = prom<V +>{
        n = ld n;
        n1 = force? n;
        checkMissing(n1);
        return n1;
      };
      r45 = dyn rainbow1(p13);
      return r45;
    };
    r47 = dyn pie6[, labels, col, border, main](p12, "", p14, NA_LGL, "pie(*, labels=\"\", col=rainbow(n), border=NA,..");
    check L32() else D23();
  D23():
    deopt 107 [r47];
  L32():
    pie7 = ldf pie;
    check L33() else D24();
  D24():
    deopt 109 [];
  L33():
    p15 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      c3 = ldf c in base;
      r50 = dyn c3(78.0, 17.0, 5.0);
      goto L0(r50);
    L2():
      r48 = dyn base6[Sky, `Sunny side of pyramid`, `Shady side of pyramid`](78.0, 17.0, 5.0);
      goto L0(r48);
    };
    p16 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      c4 = ldf c in base;
      r54 = dyn c4("deepskyblue", "yellow", "yellow3");
      goto L0(r54);
    L2():
      r52 = dyn base7("deepskyblue", "yellow", "yellow3");
      goto L0(r52);
    };
    r56 = dyn pie7[, `init.angle`, col, border](p15, 315.0, p16, FALSE);
    check L34() else D25();
  D25():
    deopt 117 [r56];
  L34():
    popenv;
    return r56;
  }
}
fun inner2461435457(x, labels, edges, radius, clockwise, `init.angle`, density, angle, col, border, lty, main, `...`) {
  (reg x:*, reg labels:*, reg edges:*, reg radius:*, reg clockwise:*, reg init_angle:*, reg density:*, reg angle:*, reg col:*, reg border:*, reg lty:*, reg main:*, reg ddd:dots) -+> V { var x:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg p:p(V +), var edges:*, reg edges_isMissing:L, reg edges_orDefault:*, var radius:*, reg radius_isMissing:L, reg radius_orDefault:*, var clockwise:*, reg clockwise_isMissing:L, reg clockwise_orDefault:*, var `init.angle`:*, reg init_angle_isMissing:L, reg init_angle_orDefault:*, reg clockwise1:*, reg clockwise2:V, reg c:L, reg p1:p(V +), var density:*, reg density_isMissing:L, reg density_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r7:V, reg r8:V, reg c1:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c6:L, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c9:L, reg r12:V, reg x5:*, reg x6:V, reg is_na:cls, reg r13:V, reg x7:*, reg x8:V, reg r14:V, reg r15:V, reg any:cls, reg r16:V, reg c10:L, reg c11:V, reg c13:L, reg stop:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg labels1:*, reg labels2:V, reg c14:V, reg c15:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r23:V, reg r24:V, reg x9:*, reg x10:V, reg r25:I, reg as_character:cls, reg r26:V, reg as_graphicsAnnot:cls, reg labels3:*, reg labels4:V, reg p2:p(V +), reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg x11:*, reg x12:V, reg cumsum:cls, reg r34:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg r39:V, reg x13:*, reg x14:V, reg sum:cls, reg r40:V, reg r41:V, reg c16:cls, reg r42:V, reg diff:cls, reg x15:*, reg x16:V, reg p3:p(V +), reg r44:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg dx:*, reg dx1:V, reg length:cls, reg r47:V, reg plot_new:cls, reg r48:V, reg par:cls, reg r49:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r50:V, reg r51:V, reg c17:cls, reg r52:V, reg pin:*, reg pin1:V, reg c18:L, reg pin3:V, reg dr:V, reg dc:L, reg dx2:V, reg dx3:V, reg __:cls, reg r53:V, reg pin4:*, reg pin5:V, reg c19:L, reg dx5:V, reg pin7:V, reg dr2:V, reg dc1:L, reg dx7:V, reg dx8:V, reg dx9:V, reg __1:cls, reg r54:V, reg r55:V, reg c20:L, reg pin8:*, reg pin9:V, reg c21:L, reg pin11:V, reg dr4:V, reg dc2:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r56:V, reg pin12:*, reg pin13:V, reg c22:L, reg dx13:V, reg pin15:V, reg dr6:V, reg dc3:L, reg dx15:V, reg dx16:V, reg dx17:V, reg __3:cls, reg r57:V, reg r58:V, reg xlim:*, reg xlim1:V, reg r59:V, reg pin16:*, reg pin17:V, reg c23:L, reg pin19:V, reg dr8:V, reg dc4:L, reg dx18:V, reg dx19:V, reg __4:cls, reg r61:V, reg pin20:*, reg pin21:V, reg c24:L, reg dx21:V, reg pin23:V, reg dr10:V, reg dc5:L, reg dx23:V, reg dx24:V, reg dx25:V, reg __5:cls, reg r62:V, reg r63:V, reg ylim:*, reg ylim1:V, reg r64:V, reg dev_hold:cls, reg r65:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r66:V, reg on_exit:cls, reg r68:V, reg plot_window:cls, reg xlim2:*, reg xlim3:V, reg p4:p(V +), reg ylim2:*, reg ylim3:V, reg p5:p(V +), reg r71:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r72:V, reg r73:V, reg col1:*, reg col2:V, reg c25:V, reg c26:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r74:V, reg r75:V, reg density1:*, reg density2:V, reg c27:V, reg c28:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r76:V, reg r77:V, reg c29:cls, reg r78:V, reg r79:V, reg par1:cls, reg r80:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r82:V, reg r83:V, reg col3:*, reg col4:V, reg c30:V, reg r84:V, reg c31:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r85:V, reg r86:V, reg col5:*, reg col6:V, reg nx:*, reg nx1:V, reg rep_len:cls, reg r87:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r89:V, reg r90:V, reg border1:*, reg border2:V, reg c32:V, reg r91:V, reg c33:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r92:V, reg r93:V, reg border3:*, reg border4:V, reg nx2:*, reg nx3:V, reg rep_len1:cls, reg r94:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r96:V, reg r97:V, reg lty1:*, reg lty2:V, reg c34:V, reg r98:V, reg c35:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r99:V, reg r100:V, reg lty3:*, reg lty4:V, reg nx4:*, reg nx5:V, reg rep_len2:cls, reg r101:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r103:V, reg r104:V, reg rep:cls, reg r105:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r106:V, reg r107:V, reg density3:*, reg density4:V, reg c36:V, reg r108:V, reg c37:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r109:V, reg r110:V, reg density5:*, reg density6:V, reg nx6:*, reg nx7:V, reg rep_len3:cls, reg r111:V, reg clockwise3:*, reg clockwise4:V, reg c38:L, reg r113:R, reg r114:cls, reg nx8:*, reg nx9:V, reg r115:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c39:L, reg x17:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r116:V, reg i7:I, reg r117:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r118:V, reg i10:I, reg r119:V, reg edges1:*, reg edges2:V, reg dx26:*, reg dx27:V, reg c40:L, reg i12:I, reg edges4:V, reg dx29:V, reg dr12:V, reg dc6:L, reg dx30:V, reg i14:I, reg edges6:V, reg dx31:V, reg i15:*, reg i16:V, reg __6:cls, reg r120:V, reg r121:V, reg r122:V, reg max:cls, reg r123:V, reg t2xy:cls, reg sym27:cls, reg base27:cls, reg guard27:L, reg r124:V, reg r125:V, reg x18:*, reg x19:V, reg c41:L, reg x21:V, reg dr14:V, reg dc7:L, reg dx32:V, reg dx33:V, reg i17:*, reg i18:V, reg __7:cls, reg r126:V, reg x22:*, reg x23:V, reg c42:L, reg x25:V, reg dr16:V, reg dc8:L, reg dx34:V, reg dx35:V, reg i19:*, reg i20:V, reg r127:V, reg __8:cls, reg r128:V, reg n:*, reg n1:V, reg seq_int:cls, reg r129:V, reg p6:p(V +), reg r131:V, reg polygon:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r132:V, reg r133:V, reg P:*, reg P1:V, reg c43:L, reg P3:V, reg dr18:V, reg dc9:L, reg dx36:V, reg dx37:V, reg r134:V, reg c44:cls, reg r135:V, reg p7:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r137:V, reg r138:V, reg P4:*, reg P5:V, reg c45:L, reg P7:V, reg dr20:V, reg dc10:L, reg dx38:V, reg dx39:V, reg r139:V, reg c46:cls, reg r140:V, reg p8:p(V +), reg density7:*, reg density8:V, reg c47:L, reg density10:V, reg dr22:V, reg dc11:L, reg dx40:V, reg dx41:V, reg i21:*, reg i22:V, reg __9:cls, reg r142:V, reg p9:p(V +), reg angle1:*, reg angle2:V, reg c48:L, reg angle4:V, reg dr24:V, reg dc12:L, reg dx42:V, reg dx43:V, reg i23:*, reg i24:V, reg __10:cls, reg r144:V, reg p10:p(V +), reg border5:*, reg border6:V, reg c49:L, reg border8:V, reg dr26:V, reg dc13:L, reg dx44:V, reg dx45:V, reg i25:*, reg i26:V, reg __11:cls, reg r146:V, reg p11:p(V +), reg col7:*, reg col8:V, reg c50:L, reg col10:V, reg dr28:V, reg dc14:L, reg dx46:V, reg dx47:V, reg i27:*, reg i28:V, reg __12:cls, reg r148:V, reg p12:p(V +), reg lty5:*, reg lty6:V, reg c51:L, reg lty8:V, reg dr30:V, reg dc15:L, reg dx48:V, reg dx49:V, reg i29:*, reg i30:V, reg __13:cls, reg r150:V, reg p13:p(V +), reg r152:V, reg t2xy1:cls, reg mean:cls, reg x26:*, reg x27:V, reg c52:L, reg x29:V, reg dr32:V, reg dc16:L, reg dx50:V, reg dx51:V, reg i31:*, reg i32:V, reg r153:V, reg __14:cls, reg r154:V, reg p14:p(V +), reg r156:V, reg p15:p(V +), reg r158:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r159:V, reg i35:I, reg r160:V, reg labels5:*, reg labels6:V, reg c53:L, reg i37:I, reg labels8:V, reg dr34:V, reg dc17:L, reg dx52:V, reg i39:I, reg dx53:V, reg i40:*, reg i41:V, reg __15:cls, reg r161:V, reg as_character1:cls, reg r162:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r163:V, reg i44:I, reg r164:V, reg lab:*, reg lab1:V, reg is_na1:cls, reg r165:V, reg r166:V, reg c54:L, reg i46:I, reg c56:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r167:V, reg i49:I, reg c59:L, reg r168:V, reg lab2:*, reg lab3:V, reg nzchar:cls, reg r169:V, reg c60:L, reg c61:V, reg c63:L, reg lines:cls, reg sym33:cls, reg base33:cls, reg guard33:L, reg r170:V, reg r171:V, reg c64:cls, reg r172:V, reg P8:*, reg P9:V, reg c65:L, reg r174:V, reg P11:V, reg dr36:V, reg dc18:L, reg dx54:V, reg r176:V, reg dx55:V, reg r177:V, reg r178:V, reg p16:p(V +), reg sym34:cls, reg base34:cls, reg guard34:L, reg r180:V, reg r181:V, reg c66:cls, reg r182:V, reg P12:*, reg P13:V, reg c67:L, reg r184:V, reg P15:V, reg dr38:V, reg dc19:L, reg dx56:V, reg r186:V, reg dx57:V, reg r187:V, reg r188:V, reg p17:p(V +), reg r190:V, reg text:cls, reg P16:*, reg P17:V, reg c68:L, reg r192:R, reg P19:V, reg dr40:V, reg dc20:L, reg dx58:V, reg r194:R, reg dx59:V, reg r195:V, reg r196:V, reg p18:p(V +), reg P20:*, reg P21:V, reg c69:L, reg r199:R, reg P23:V, reg dr42:V, reg dc21:L, reg dx60:V, reg r201:R, reg dx61:V, reg r202:V, reg r203:V, reg p19:p(V +), reg labels9:*, reg labels10:V, reg c70:L, reg labels12:V, reg dr44:V, reg dc22:L, reg dx62:V, reg dx63:V, reg i53:*, reg i54:V, reg __16:cls, reg r205:V, reg p20:p(V +), reg ifelse:cls, reg P24:*, reg P25:V, reg c71:L, reg P27:V, reg dr46:V, reg dc23:L, reg dx64:V, reg dx65:V, reg r207:V, reg r208:V, reg p21:p(V +), reg r210:V, reg p22:p(V +), reg ddd1:dots?, reg r212:V, reg i55:I, reg title:cls, reg main1:*, reg main2:V, reg p23:p(V +), reg ddd2:dots?, reg r215:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r216:V, reg r217:V, reg invisible:cls, reg r218:V |
    mkenv;
    st x = x;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0() else L1(labels);
  L0():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      names = ldf names in base;
      r2 = dyn names(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L1(p);
  L1(labels_orDefault):
    st labels = labels_orDefault;
    edges_isMissing = missing.0(edges);
    if edges_isMissing then L2(200.0) else L2(edges);
  L2(edges_orDefault):
    st edges = edges_orDefault;
    radius_isMissing = missing.0(radius);
    if radius_isMissing then L3(0.8) else L3(radius);
  L3(radius_orDefault):
    st radius = radius_orDefault;
    clockwise_isMissing = missing.0(clockwise);
    if clockwise_isMissing then L4(FALSE) else L4(clockwise);
  L4(clockwise_orDefault):
    st clockwise = clockwise_orDefault;
    init_angle_isMissing = missing.0(init_angle);
    if init_angle_isMissing then L5() else L6(init_angle);
  L5():
    p1 = prom<V +>{
      clockwise1 = ld clockwise;
      clockwise2 = force? clockwise1;
      checkMissing(clockwise2);
      c = `as.logical`(clockwise2);
      if c then L1() else L0();
    L0():
      return 0.0;
    L1():
      return 90.0;
    };
    goto L6(p1);
  L6(init_angle_orDefault):
    st `init.angle` = init_angle_orDefault;
    density_isMissing = missing.0(density);
    if density_isMissing then L7(NULL) else L7(density);
  L7(density_orDefault):
    st density = density_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L8(45.0) else L8(angle);
  L8(angle_orDefault):
    st angle = angle_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L9(NULL) else L9(col);
  L9(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L10(NULL) else L10(border);
  L10(border_orDefault):
    st border = border_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L11(NULL) else L11(lty);
  L11(lty_orDefault):
    st lty = lty_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L12(NULL) else L12(main);
  L12(main_orDefault):
    st main = main_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L77() else L78();
  L13(r6):
    r8 = `!`(r6);
    c1 = `as.logical`(r8);
    if c1 then L14(c1) else L81();
  L77():
    x3 = ld x;
    check L79() else D0();
  L78():
    r5 = dyn base1(<sym x>);
    goto L13(r5);
  D0():
    deopt 2 [x3];
  L14(c2):
    c13 = `as.logical`(c2);
    if c13 then L91() else L17();
  L79():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r7 = dyn is_numeric(x4);
    check L80() else D1();
  L81():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L82() else L83();
  D1():
    deopt 5 [r7];
  L15(c6, r10):
    c10 = `as.logical`(r10);
    c11 = `||`(c6, c10);
    goto L14(c11);
  L17():
    goto L18();
  L18():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L95() else L96();
  L80():
    goto L13(r7);
  L82():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L84() else L85();
  L83():
    r9 = dyn base2(<lang `|`(is.na(x), `<`(x, 0.0))>);
    goto L15(c1, r9);
  L91():
    stop = ldf stop;
    check L92() else D6();
  D6():
    deopt 23 [];
  L16(c9, r12):
    x7 = ld x;
    check L88() else D4();
  L19(r20):
    c15 = `as.logical`(r20);
    if c15 then L98() else L20();
  L84():
    x5 = ld x;
    check L86() else D2();
  L85():
    r11 = dyn base3(<sym x>);
    goto L16(c1, r11);
  L92():
    r17 = dyn stop("'x' values must be positive.");
    check L93() else D7();
  L95():
    labels1 = ld labels;
    check L97() else D8();
  L96():
    r19 = dyn base4(<sym labels>);
    goto L19(r19);
  D2():
    deopt 11 [c1, x5];
  D4():
    deopt 14 [c9, r12, x7];
  D7():
    deopt 25 [r17];
  D8():
    deopt 29 [labels1];
  L20():
    as_graphicsAnnot = ldf `as.graphicsAnnot`;
    check L106() else D11();
  L23():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L108() else L109();
  L86():
    x6 = force? x5;
    checkMissing(x6);
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(x6);
    check L87() else D3();
  L88():
    x8 = force? x7;
    checkMissing(x8);
    r14 = `<`(x8, 0.0);
    r15 = `||`(r12, r14);
    any = ldf any in base;
    r16 = dyn any(r15);
    check L89() else D5();
  L93():
    goto L18();
  L97():
    labels2 = force? labels1;
    checkMissing(labels2);
    c14 = `==`(labels2, NULL);
    goto L19(c14);
  L98():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  D3():
    deopt 14 [c1, r13];
  D5():
    deopt 20 [c9, r16];
  D11():
    deopt 42 [];
  L21(r22):
    st labels = r22;
    goto L23();
  L24(r31):
    st x = r31;
    diff = ldf diff;
    check L119() else D18();
  L87():
    goto L16(c1, r13);
  L89():
    goto L15(c9, r16);
  L99():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L101() else L102();
  L100():
    r21 = dyn base5(<lang seq_along(x)>);
    goto L21(r21);
  L106():
    p2 = prom<V +>{
      labels3 = ld labels;
      labels4 = force? labels3;
      checkMissing(labels4);
      return labels4;
    };
    r29 = dyn as_graphicsAnnot(p2);
    check L107() else D12();
  L108():
    sym8 = ldf cumsum;
    base8 = ldf cumsum in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L110() else L111();
  L109():
    r30 = dyn base7(0.0, <lang `/`(cumsum(x), sum(x))>);
    goto L24(r30);
  D12():
    deopt 44 [r29];
  D18():
    deopt 65 [];
  L22(r24):
    as_character = ldf `as.character` in base;
    r26 = dyn as_character(r24);
    check L104() else D10();
  L25(r33):
    sym9 = ldf sum;
    base9 = ldf sum in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L114() else L115();
  L101():
    x9 = ld x;
    check L103() else D9();
  L102():
    r23 = dyn base6(<sym x>);
    goto L22(r23);
  L107():
    st labels = r29;
    goto L23();
  L110():
    x11 = ld x;
    check L112() else D13();
  L111():
    r32 = dyn base8(<sym x>);
    goto L25(r32);
  L119():
    p3 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r44 = dyn diff(p3);
    check L120() else D19();
  D9():
    deopt 35 [x9];
  D10():
    deopt 39 [r26];
  D13():
    deopt 51 [x11];
  D19():
    deopt 67 [r44];
  L26(r38, r39):
    r41 = `/`(r38, r39);
    c16 = ldf c in base;
    r42 = dyn c16(0.0, r41);
    check L118() else D17();
  L103():
    x10 = force? x9;
    checkMissing(x10);
    r25 = seq_along(x10);
    goto L22(r25);
  L104():
    goto L21(r26);
  L112():
    x12 = force? x11;
    checkMissing(x12);
    cumsum = ldf cumsum in base;
    r34 = dyn cumsum(x12);
    check L113() else D14();
  L114():
    x13 = ld x;
    check L116() else D15();
  L115():
    r37 = dyn base9(<sym x>);
    goto L26(r33, r37);
  L120():
    st dx = r44;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L121() else L122();
  D14():
    deopt 54 [r34];
  D15():
    deopt 56 [r33, x13];
  D17():
    deopt 62 [r42];
  L27(r46):
    st nx = r46;
    plot_new = ldf `plot.new`;
    check L125() else D22();
  L113():
    goto L25(r34);
  L116():
    x14 = force? x13;
    checkMissing(x14);
    sum = ldf sum in base;
    r40 = dyn sum(x14);
    check L117() else D16();
  L118():
    goto L24(r42);
  L121():
    dx = ld dx;
    check L123() else D20();
  L122():
    r45 = dyn base10(<sym dx>);
    goto L27(r45);
  D16():
    deopt 59 [r33, r40];
  D20():
    deopt 71 [dx];
  D22():
    deopt 77 [];
  L117():
    goto L26(r33, r40);
  L123():
    dx1 = force? dx;
    checkMissing(dx1);
    length = ldf length in base;
    r47 = dyn length(dx1);
    check L124() else D21();
  L125():
    r48 = dyn plot_new();
    check L126() else D23();
  D21():
    deopt 74 [r47];
  D23():
    deopt 78 [r48];
  L124():
    goto L27(r47);
  L126():
    par = ldf par;
    check L127() else D24();
  D24():
    deopt 80 [];
  L127():
    r49 = dyn par("pin");
    check L128() else D25();
  D25():
    deopt 82 [r49];
  L128():
    st pin = r49;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L129() else L130();
  L28(r51):
    st ylim = r51;
    st xlim = r51;
    pin = ld pin;
    check L132() else D27();
  L129():
    c17 = ldf c in base;
    r52 = dyn c17(-1.0, 1.0);
    check L131() else D26();
  L130():
    r50 = dyn base11(<lang `-`(1.0)>, 1.0);
    goto L28(r50);
  D26():
    deopt 90 [r52];
  D27():
    deopt 93 [pin];
  L131():
    goto L28(r52);
  L132():
    pin1 = force? pin;
    checkMissing(pin1);
    c18 = `is.object`(pin1);
    if c18 then L133() else L134(pin1);
  L29(dx3):
    pin4 = ld pin;
    check L136() else D28();
  L133():
    dr = tryDispatchBuiltin.1("[", pin1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L135() else L134(dr);
  L134(pin3):
    __ = ldf `[` in base;
    r53 = dyn __(pin3, 1);
    goto L29(r53);
  D28():
    deopt 97 [dx3, pin4];
  L135():
    dx2 = getTryDispatchBuiltinValue(dr);
    goto L29(dx2);
  L136():
    pin5 = force? pin4;
    checkMissing(pin5);
    c19 = `is.object`(pin5);
    if c19 then L137() else L138(dx3, pin5);
  L30(dx8, dx9):
    r55 = `>`(dx8, dx9);
    c20 = `as.logical`(r55);
    if c20 then L140() else L31();
  L137():
    dr2 = tryDispatchBuiltin.1("[", pin5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L139() else L138(dx3, dr2);
  L138(dx5, pin7):
    __1 = ldf `[` in base;
    r54 = dyn __1(pin7, 2);
    goto L30(dx5, r54);
  L31():
    pin16 = ld pin;
    check L151() else D32();
  L34():
    dev_hold = ldf `dev.hold`;
    check L160() else D35();
  L139():
    dx7 = getTryDispatchBuiltinValue(dr2);
    goto L30(dx3, dx7);
  L140():
    pin8 = ld pin;
    check L141() else D29();
  D29():
    deopt 103 [pin8];
  D32():
    deopt 116 [pin16];
  D35():
    deopt 130 [];
  L141():
    pin9 = force? pin8;
    checkMissing(pin9);
    c21 = `is.object`(pin9);
    if c21 then L142() else L143(pin9);
  L151():
    pin17 = force? pin16;
    checkMissing(pin17);
    c23 = `is.object`(pin17);
    if c23 then L152() else L153(pin17);
  L160():
    r65 = dyn dev_hold();
    check L161() else D36();
  D36():
    deopt 131 [r65];
  L32(dx11):
    pin12 = ld pin;
    check L145() else D30();
  L35(dx19):
    pin20 = ld pin;
    check L155() else D33();
  L142():
    dr4 = tryDispatchBuiltin.1("[", pin9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L144() else L143(dr4);
  L143(pin11):
    __2 = ldf `[` in base;
    r56 = dyn __2(pin11, 1);
    goto L32(r56);
  L152():
    dr8 = tryDispatchBuiltin.1("[", pin17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L154() else L153(dr8);
  L153(pin19):
    __4 = ldf `[` in base;
    r61 = dyn __4(pin19, 2);
    goto L35(r61);
  L161():
    sym12 = ldf `on.exit`;
    base12 = ldf `on.exit` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L162() else L163();
  D30():
    deopt 107 [dx11, pin12];
  D33():
    deopt 120 [dx19, pin20];
  L37():
    plot_window = ldf `plot.window`;
    check L164() else D37();
  L144():
    dx10 = getTryDispatchBuiltinValue(dr4);
    goto L32(dx10);
  L145():
    pin13 = force? pin12;
    checkMissing(pin13);
    c22 = `is.object`(pin13);
    if c22 then L146() else L147(dx11, pin13);
  L154():
    dx18 = getTryDispatchBuiltinValue(dr8);
    goto L35(dx18);
  L155():
    pin21 = force? pin20;
    checkMissing(pin21);
    c24 = `is.object`(pin21);
    if c24 then L156() else L157(dx19, pin21);
  L162():
    on_exit = ldf `on.exit` in base;
    r68 = dyn on_exit(<lang dev.flush()>);
    goto L37();
  L163():
    r66 = dyn base12(<lang dev.flush()>);
    goto L37();
  D37():
    deopt 136 [];
  L33(dx16, dx17):
    r58 = `/`(dx16, dx17);
    xlim = ld xlim;
    check L149() else D31();
  L36(dx24, dx25):
    r63 = `/`(dx24, dx25);
    ylim = ld ylim;
    check L159() else D34();
  L146():
    dr6 = tryDispatchBuiltin.1("[", pin13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L148() else L147(dx11, dr6);
  L147(dx13, pin15):
    __3 = ldf `[` in base;
    r57 = dyn __3(pin15, 2);
    goto L33(dx13, r57);
  L156():
    dr10 = tryDispatchBuiltin.1("[", pin21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L158() else L157(dx19, dr10);
  L157(dx21, pin23):
    __5 = ldf `[` in base;
    r62 = dyn __5(pin23, 1);
    goto L36(dx21, r62);
  L164():
    p4 = prom<V +>{
      xlim2 = ld xlim;
      xlim3 = force? xlim2;
      checkMissing(xlim3);
      return xlim3;
    };
    p5 = prom<V +>{
      ylim2 = ld ylim;
      ylim3 = force? ylim2;
      checkMissing(ylim3);
      return ylim3;
    };
    r71 = dyn plot_window[, , , asp](p4, p5, "", 1.0);
    check L165() else D38();
  D31():
    deopt 112 [r58, xlim];
  D34():
    deopt 125 [r63, ylim];
  D38():
    deopt 142 [r71];
  L148():
    dx15 = getTryDispatchBuiltinValue(dr6);
    goto L33(dx11, dx15);
  L149():
    xlim1 = force? xlim;
    checkMissing(xlim1);
    r59 = `*`(r58, xlim1);
    st xlim = r59;
    goto L34();
  L158():
    dx23 = getTryDispatchBuiltinValue(dr10);
    goto L36(dx19, dx23);
  L159():
    ylim1 = force? ylim;
    checkMissing(ylim1);
    r64 = `*`(r63, ylim1);
    st ylim = r64;
    goto L34();
  L165():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L166() else L167();
  L38(r73):
    c26 = `as.logical`(r73);
    if c26 then L169() else L39();
  L166():
    col1 = ld col;
    check L168() else D39();
  L167():
    r72 = dyn base13(<sym col>);
    goto L38(r72);
  D39():
    deopt 144 [col1];
  L39():
    goto L44();
  L44():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L181() else L182();
  L168():
    col2 = force? col1;
    checkMissing(col2);
    c25 = `==`(col2, NULL);
    goto L38(c25);
  L169():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L170() else L171();
  L40(r75):
    c28 = `as.logical`(r75);
    if c28 then L173() else L41();
  L45(r83):
    r84 = `!`(r83);
    c31 = `as.logical`(r84);
    if c31 then L184() else L46();
  L170():
    density1 = ld density;
    check L172() else D40();
  L171():
    r74 = dyn base14(<sym density>);
    goto L40(r74);
  L181():
    col3 = ld col;
    check L183() else D44();
  L182():
    r82 = dyn base16(<sym col>);
    goto L45(r82);
  D40():
    deopt 148 [density1];
  D44():
    deopt 169 [col3];
  L41():
    par1 = ldf par;
    check L178() else D42();
  L43(r79):
    st col = r79;
    goto L44();
  L46():
    goto L48();
  L48():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L191() else L192();
  L172():
    density2 = force? density1;
    checkMissing(density2);
    c27 = `==`(density2, NULL);
    goto L40(c27);
  L173():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L174() else L175();
  L183():
    col4 = force? col3;
    checkMissing(col4);
    c30 = `==`(col4, NULL);
    goto L45(c30);
  L184():
    sym17 = ldf rep_len;
    base17 = ldf rep_len in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L185() else L186();
  D42():
    deopt 162 [];
  L42(r77):
    goto L43(r77);
  L47(r86):
    st col = r86;
    goto L48();
  L49(r90):
    r91 = `!`(r90);
    c33 = `as.logical`(r91);
    if c33 then L194() else L50();
  L174():
    c29 = ldf c in base;
    r78 = dyn c29("white", "lightblue", "mistyrose", "lightcyan", "lavender", "cornsilk");
    check L176() else D41();
  L175():
    r76 = dyn base15("white", "lightblue", "mistyrose", "lightcyan", "lavender", "cornsilk");
    goto L42(r76);
  L178():
    r80 = dyn par1("fg");
    check L179() else D43();
  L185():
    col5 = ld col;
    check L187() else D45();
  L186():
    r85 = dyn base17(<sym col>, <sym nx>);
    goto L47(r85);
  L191():
    border1 = ld border;
    check L193() else D48();
  L192():
    r89 = dyn base18(<sym border>);
    goto L49(r89);
  D41():
    deopt 160 [r78];
  D43():
    deopt 164 [r80];
  D45():
    deopt 175 [col5];
  D48():
    deopt 185 [border1];
  L50():
    goto L52();
  L52():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L201() else L202();
  L176():
    goto L42(r78);
  L179():
    goto L43(r80);
  L187():
    col6 = force? col5;
    checkMissing(col6);
    nx = ld nx;
    check L188() else D46();
  L193():
    border2 = force? border1;
    checkMissing(border2);
    c32 = `==`(border2, NULL);
    goto L49(c32);
  L194():
    sym19 = ldf rep_len;
    base19 = ldf rep_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L195() else L196();
  D46():
    deopt 177 [nx];
  L51(r93):
    st border = r93;
    goto L52();
  L53(r97):
    r98 = `!`(r97);
    c35 = `as.logical`(r98);
    if c35 then L204() else L54();
  L188():
    nx1 = force? nx;
    checkMissing(nx1);
    rep_len = ldf rep_len in base;
    r87 = dyn rep_len(col6, nx1);
    check L189() else D47();
  L195():
    border3 = ld border;
    check L197() else D49();
  L196():
    r92 = dyn base19(<sym border>, <sym nx>);
    goto L51(r92);
  L201():
    lty1 = ld lty;
    check L203() else D52();
  L202():
    r96 = dyn base20(<sym lty>);
    goto L53(r96);
  D47():
    deopt 180 [r87];
  D49():
    deopt 191 [border3];
  D52():
    deopt 201 [lty1];
  L54():
    goto L56();
  L56():
    sym22 = ldf rep;
    base22 = ldf rep in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L211() else L212();
  L189():
    goto L47(r87);
  L197():
    border4 = force? border3;
    checkMissing(border4);
    nx2 = ld nx;
    check L198() else D50();
  L203():
    lty2 = force? lty1;
    checkMissing(lty2);
    c34 = `==`(lty2, NULL);
    goto L53(c34);
  L204():
    sym21 = ldf rep_len;
    base21 = ldf rep_len in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L205() else L206();
  D50():
    deopt 193 [nx2];
  L55(r100):
    st lty = r100;
    goto L56();
  L57(r104):
    st angle = r104;
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L213() else L214();
  L198():
    nx3 = force? nx2;
    checkMissing(nx3);
    rep_len1 = ldf rep_len in base;
    r94 = dyn rep_len1(border4, nx3);
    check L199() else D51();
  L205():
    lty3 = ld lty;
    check L207() else D53();
  L206():
    r99 = dyn base21(<sym lty>, <sym nx>);
    goto L55(r99);
  L211():
    rep = ldf rep in base;
    r105 = dyn rep(<sym angle>, <sym nx>);
    goto L57(r105);
  L212():
    r103 = dyn base22(<sym angle>, <sym nx>);
    goto L57(r103);
  D51():
    deopt 196 [r94];
  D53():
    deopt 207 [lty3];
  L58(r107):
    r108 = `!`(r107);
    c37 = `as.logical`(r108);
    if c37 then L216() else L59();
  L199():
    goto L51(r94);
  L207():
    lty4 = force? lty3;
    checkMissing(lty4);
    nx4 = ld nx;
    check L208() else D54();
  L213():
    density3 = ld density;
    check L215() else D56();
  L214():
    r106 = dyn base23(<sym density>);
    goto L58(r106);
  D54():
    deopt 209 [nx4];
  D56():
    deopt 221 [density3];
  L59():
    goto L61();
  L61():
    clockwise3 = ld clockwise;
    check L223() else D60();
  L208():
    nx5 = force? nx4;
    checkMissing(nx5);
    rep_len2 = ldf rep_len in base;
    r101 = dyn rep_len2(lty4, nx5);
    check L209() else D55();
  L215():
    density4 = force? density3;
    checkMissing(density4);
    c36 = `==`(density4, NULL);
    goto L58(c36);
  L216():
    sym24 = ldf rep_len;
    base24 = ldf rep_len in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L217() else L218();
  D55():
    deopt 212 [r101];
  D60():
    deopt 236 [clockwise3];
  L60(r110):
    st density = r110;
    goto L61();
  L209():
    goto L55(r101);
  L217():
    density5 = ld density;
    check L219() else D57();
  L218():
    r109 = dyn base24(<sym density>, <sym nx>);
    goto L60(r109);
  L223():
    clockwise4 = force? clockwise3;
    checkMissing(clockwise4);
    c38 = `as.logical`(clockwise4);
    if c38 then L224() else L62();
  D57():
    deopt 227 [density5];
  L62():
    goto L63(6.283185307179586);
  L63(r113):
    st twopi = r113;
    r114 = clos inner3207722480;
    st t2xy = r114;
    nx8 = ld nx;
    check L226() else D61();
  L219():
    density6 = force? density5;
    checkMissing(density6);
    nx6 = ld nx;
    check L220() else D58();
  L224():
    goto L63(-6.283185307179586);
  D58():
    deopt 229 [nx6];
  D61():
    deopt 247 [1, nx8];
  L220():
    nx7 = force? nx6;
    checkMissing(nx7);
    rep_len3 = ldf rep_len in base;
    r111 = dyn rep_len3(density6, nx7);
    check L221() else D59();
  L226():
    nx9 = force? nx8;
    checkMissing(nx9);
    r115 = `:`(1, nx9);
    s = toForSeq(r115);
    l = length(s);
    i = 0;
    goto L64(i);
  D59():
    deopt 232 [r111];
  L64(i1):
    i2 = `+`.1(i1, 1);
    c39 = `<`.1(l, i2);
    if c39 then L227() else L75();
  L221():
    goto L60(r111);
  L75():
    x17 = `[[`(s, i2, NULL, TRUE);
    st i = x17;
    sym25 = ldf max;
    base25 = ldf max in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L228() else L229();
  L227():
    title = ldf title;
    check L269() else D83();
  D83():
    deopt 336 [];
  L65(i7, r117):
    st n = r117;
    t2xy = ldf t2xy;
    check L239() else D66();
  L228():
    sym26 = ldf floor;
    base26 = ldf floor in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L230() else L231();
  L229():
    r116 = dyn base25(2.0, <lang floor(`*`(edges, `[`(dx, i)))>);
    goto L65(i2, r116);
  L269():
    p23 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    ddd2 = ld `...`;
    r215 = dyn title[main, `...`](p23, ddd2);
    check L270() else D84();
  D66():
    deopt 266 [i7];
  D84():
    deopt 340 [r215];
  L66(i10, r119):
    max = ldf max in base;
    r123 = dyn max(2.0, r119);
    check L238() else D65();
  L230():
    edges1 = ld edges;
    check L232() else D62();
  L231():
    r118 = dyn base26(<lang `*`(edges, `[`(dx, i))>);
    goto L66(i2, r118);
  L239():
    p6 = prom<V +>{
      sym27 = ldf `seq.int`;
      base27 = ldf `seq.int` in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L3() else L4();
    L0(r125):
      return r125;
    L3():
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      c41 = `is.object`(x19);
      if c41 then L5() else L6(x19);
    L4():
      r124 = dyn base27[, , `length.out`](<lang `[`(x, i)>, <lang `[`(x, `+`(i, 1.0))>, <sym n>);
      goto L0(r124);
    L1(dx33):
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      c42 = `is.object`(x23);
      if c42 then L8() else L9(x23);
    L5():
      dr14 = tryDispatchBuiltin.1("[", x19);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(x21):
      i17 = ld i;
      i18 = force? i17;
      __7 = ldf `[` in base;
      r126 = dyn __7(x21, i18);
      goto L1(r126);
    L2(dx35):
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      seq_int = ldf `seq.int` in base;
      r129 = dyn seq_int(dx33, dx35, n1);
      goto L0(r129);
    L7():
      dx32 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx32);
    L8():
      dr16 = tryDispatchBuiltin.1("[", x23);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L10() else L9(dr16);
    L9(x25):
      i19 = ld i;
      i20 = force? i19;
      checkMissing(i20);
      r127 = `+`(i20, 1.0);
      __8 = ldf `[` in base;
      r128 = dyn __8(x25, r127);
      goto L2(r128);
    L10():
      dx34 = getTryDispatchBuiltinValue(dr16);
      goto L2(dx34);
    };
    r131 = dyn t2xy(p6);
    check L240() else D67();
  L270():
    sym35 = ldf invisible;
    base35 = ldf invisible in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L271() else L272();
  D62():
    deopt 254 [i2, edges1];
  D65():
    deopt 263 [i10, r123];
  D67():
    deopt 268 [i7, r131];
  L76(r217):
    popenv;
    return r217;
  L232():
    edges2 = force? edges1;
    checkMissing(edges2);
    dx26 = ld dx;
    check L233() else D63();
  L238():
    goto L65(i10, r123);
  L240():
    st P = r131;
    polygon = ldf polygon;
    check L241() else D68();
  L271():
    invisible = ldf invisible in base;
    r218 = dyn invisible(NULL);
    check L273() else D85();
  L272():
    r216 = dyn base35(NULL);
    goto L76(r216);
  D63():
    deopt 255 [i2, edges2, dx26];
  D68():
    deopt 271 [i7];
  D85():
    deopt 345 [r218];
  L233():
    dx27 = force? dx26;
    checkMissing(dx27);
    c40 = `is.object`(dx27);
    if c40 then L234() else L235(i2, edges2, dx27);
  L241():
    p7 = prom<V +>{
      sym28 = ldf c;
      base28 = ldf c in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L1() else L2();
    L0(r133):
      return r133;
    L1():
      P = ld P;
      P1 = force? P;
      checkMissing(P1);
      c43 = `is.object`(P1);
      if c43 then L4() else L5(P1);
    L2():
      r132 = dyn base28(<lang `$`(P, x)>, 0.0);
      goto L0(r132);
    L3(dx37):
      c44 = ldf c in base;
      r135 = dyn c44(dx37, 0.0);
      goto L0(r135);
    L4():
      dr18 = tryDispatchBuiltin.1("$", P1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L6() else L5(dr18);
    L5(P3):
      r134 = `$`(P3, <sym x>);
      goto L3(r134);
    L6():
      dx36 = getTryDispatchBuiltinValue(dr18);
      goto L3(dx36);
    };
    p8 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r138):
      return r138;
    L1():
      P4 = ld P;
      P5 = force? P4;
      checkMissing(P5);
      c45 = `is.object`(P5);
      if c45 then L4() else L5(P5);
    L2():
      r137 = dyn base29(<lang `$`(P, y)>, 0.0);
      goto L0(r137);
    L3(dx39):
      c46 = ldf c in base;
      r140 = dyn c46(dx39, 0.0);
      goto L0(r140);
    L4():
      dr20 = tryDispatchBuiltin.1("$", P5);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L6() else L5(dr20);
    L5(P7):
      r139 = `$`(P7, <sym y>);
      goto L3(r139);
    L6():
      dx38 = getTryDispatchBuiltinValue(dr20);
      goto L3(dx38);
    };
    p9 = prom<V +>{
      density7 = ld density;
      density8 = force? density7;
      checkMissing(density8);
      c47 = `is.object`(density8);
      if c47 then L1() else L2(density8);
    L0(dx41):
      return dx41;
    L1():
      dr22 = tryDispatchBuiltin.1("[", density8);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(density10):
      i21 = ld i;
      i22 = force? i21;
      __9 = ldf `[` in base;
      r142 = dyn __9(density10, i22);
      goto L0(r142);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx40);
    };
    p10 = prom<V +>{
      angle1 = ld angle;
      angle2 = force? angle1;
      checkMissing(angle2);
      c48 = `is.object`(angle2);
      if c48 then L1() else L2(angle2);
    L0(dx43):
      return dx43;
    L1():
      dr24 = tryDispatchBuiltin.1("[", angle2);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(angle4):
      i23 = ld i;
      i24 = force? i23;
      __10 = ldf `[` in base;
      r144 = dyn __10(angle4, i24);
      goto L0(r144);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx42);
    };
    p11 = prom<V +>{
      border5 = ld border;
      border6 = force? border5;
      checkMissing(border6);
      c49 = `is.object`(border6);
      if c49 then L1() else L2(border6);
    L0(dx45):
      return dx45;
    L1():
      dr26 = tryDispatchBuiltin.1("[", border6);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(border8):
      i25 = ld i;
      i26 = force? i25;
      __11 = ldf `[` in base;
      r146 = dyn __11(border8, i26);
      goto L0(r146);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx44);
    };
    p12 = prom<V +>{
      col7 = ld col;
      col8 = force? col7;
      checkMissing(col8);
      c50 = `is.object`(col8);
      if c50 then L1() else L2(col8);
    L0(dx47):
      return dx47;
    L1():
      dr28 = tryDispatchBuiltin.1("[", col8);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(col10):
      i27 = ld i;
      i28 = force? i27;
      __12 = ldf `[` in base;
      r148 = dyn __12(col10, i28);
      goto L0(r148);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx46);
    };
    p13 = prom<V +>{
      lty5 = ld lty;
      lty6 = force? lty5;
      checkMissing(lty6);
      c51 = `is.object`(lty6);
      if c51 then L1() else L2(lty6);
    L0(dx49):
      return dx49;
    L1():
      dr30 = tryDispatchBuiltin.1("[", lty6);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(lty8):
      i29 = ld i;
      i30 = force? i29;
      __13 = ldf `[` in base;
      r150 = dyn __13(lty8, i30);
      goto L0(r150);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx48);
    };
    r152 = dyn polygon[, , density, angle, border, col, lty](p7, p8, p9, p10, p11, p12, p13);
    check L242() else D69();
  L273():
    goto L76(r218);
  D69():
    deopt 284 [i7, r152];
  L67(i14, edges6, dx31):
    r121 = `*`(edges6, dx31);
    r122 = floor(r121);
    goto L66(i14, r122);
  L234():
    dr12 = tryDispatchBuiltin.1("[", dx27);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L236() else L235(i2, edges2, dr12);
  L235(i12, edges4, dx29):
    i15 = ld i;
    check L237() else D64();
  L242():
    t2xy1 = ldf t2xy;
    check L243() else D70();
  D64():
    deopt 257 [i12, edges4, dx29, i15];
  D70():
    deopt 286 [i7];
  L236():
    dx30 = getTryDispatchBuiltinValue(dr12);
    goto L67(i2, edges2, dx30);
  L237():
    i16 = force? i15;
    __6 = ldf `[` in base;
    r120 = dyn __6(dx29, i16);
    goto L67(i12, edges4, r120);
  L243():
    p15 = prom<V +>{
      mean = ldf mean;
      p14 = prom<V +>{
        x26 = ld x;
        x27 = force? x26;
        checkMissing(x27);
        c52 = `is.object`(x27);
        if c52 then L1() else L2(x27);
      L0(dx51):
        return dx51;
      L1():
        dr32 = tryDispatchBuiltin.1("[", x27);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L3() else L2(dr32);
      L2(x29):
        i31 = ld i;
        i32 = force? i31;
        checkMissing(i32);
        r153 = `+`(i32, <int 0, 1>);
        __14 = ldf `[` in base;
        r154 = dyn __14(x29, r153);
        goto L0(r154);
      L3():
        dx50 = getTryDispatchBuiltinValue(dr32);
        goto L0(dx50);
      };
      r156 = dyn mean(p14);
      return r156;
    };
    r158 = dyn t2xy1(p15);
    check L244() else D71();
  D71():
    deopt 288 [i7, r158];
  L244():
    st P = r158;
    sym30 = ldf `as.character`;
    base30 = ldf `as.character` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L245() else L246();
  L68(i35, r160):
    st lab = r160;
    sym31 = ldf `is.na`;
    base31 = ldf `is.na` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L253() else L254();
  L245():
    labels5 = ld labels;
    check L247() else D72();
  L246():
    r159 = dyn base30(<lang `[`(labels, i)>);
    goto L68(i7, r159);
  D72():
    deopt 292 [i7, labels5];
  L70(i44, r164):
    r166 = `!`(r164);
    c54 = `as.logical`(r166);
    if c54 then L257() else L71(i44, c54);
  L247():
    labels6 = force? labels5;
    checkMissing(labels6);
    c53 = `is.object`(labels6);
    if c53 then L248() else L249(i7, labels6);
  L253():
    lab = ld lab;
    check L255() else D75();
  L254():
    r163 = dyn base31(<sym lab>);
    goto L70(i35, r163);
  D75():
    deopt 302 [i35, lab];
  L69(i39, dx53):
    as_character1 = ldf `as.character` in base;
    r162 = dyn as_character1(dx53);
    check L252() else D74();
  L71(i46, c56):
    c63 = `as.logical`(c56);
    if c63 then L263() else L73();
  L248():
    dr34 = tryDispatchBuiltin.1("[", labels6);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L250() else L249(i7, dr34);
  L249(i37, labels8):
    i40 = ld i;
    check L251() else D73();
  L255():
    lab1 = force? lab;
    checkMissing(lab1);
    is_na1 = ldf `is.na` in base;
    r165 = dyn is_na1(lab1);
    check L256() else D76();
  L257():
    sym32 = ldf nzchar;
    base32 = ldf nzchar in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L258() else L259();
  D73():
    deopt 294 [i37, labels8, i40];
  D74():
    deopt 298 [i39, r162];
  D76():
    deopt 305 [i35, r165];
  L72(i49, c59, r168):
    c60 = `as.logical`(r168);
    c61 = `&&`(c59, c60);
    goto L71(i49, c61);
  L73():
    goto L74(i46);
  L74(i55):
    goto L64(i55);
  L250():
    dx52 = getTryDispatchBuiltinValue(dr34);
    goto L69(i7, dx52);
  L251():
    i41 = force? i40;
    __15 = ldf `[` in base;
    r161 = dyn __15(labels8, i41);
    goto L69(i37, r161);
  L252():
    goto L68(i39, r162);
  L256():
    goto L70(i35, r165);
  L258():
    lab2 = ld lab;
    check L260() else D77();
  L259():
    r167 = dyn base32(<sym lab>);
    goto L72(i44, c54, r167);
  L263():
    lines = ldf lines;
    check L264() else D79();
  D77():
    deopt 309 [i44, c54, lab2];
  D79():
    deopt 315 [i46];
  L260():
    lab3 = force? lab2;
    checkMissing(lab3);
    nzchar = ldf nzchar in base;
    r169 = dyn nzchar(lab3);
    check L261() else D78();
  L264():
    p16 = prom<V +>{
      sym33 = ldf c;
      base33 = ldf c in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L1() else L2();
    L0(r171):
      P8 = ld P;
      P9 = force? P8;
      checkMissing(P9);
      c65 = `is.object`(P9);
      if c65 then L4() else L5(r171, P9);
    L1():
      c64 = ldf c in base;
      r172 = dyn c64(1.0, 1.05);
      goto L0(r172);
    L2():
      r170 = dyn base33(1.0, 1.05);
      goto L0(r170);
    L3(r176, dx55):
      r178 = `*`(r176, dx55);
      return r178;
    L4():
      dr36 = tryDispatchBuiltin.1("$", P9);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L6() else L5(r171, dr36);
    L5(r174, P11):
      r177 = `$`(P11, <sym x>);
      goto L3(r174, r177);
    L6():
      dx54 = getTryDispatchBuiltinValue(dr36);
      goto L3(r171, dx54);
    };
    p17 = prom<V +>{
      sym34 = ldf c;
      base34 = ldf c in base;
      guard34 = `==`.4(sym34, base34);
      if guard34 then L1() else L2();
    L0(r181):
      P12 = ld P;
      P13 = force? P12;
      checkMissing(P13);
      c67 = `is.object`(P13);
      if c67 then L4() else L5(r181, P13);
    L1():
      c66 = ldf c in base;
      r182 = dyn c66(1.0, 1.05);
      goto L0(r182);
    L2():
      r180 = dyn base34(1.0, 1.05);
      goto L0(r180);
    L3(r186, dx57):
      r188 = `*`(r186, dx57);
      return r188;
    L4():
      dr38 = tryDispatchBuiltin.1("$", P13);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L6() else L5(r181, dr38);
    L5(r184, P15):
      r187 = `$`(P15, <sym y>);
      goto L3(r184, r187);
    L6():
      dx56 = getTryDispatchBuiltinValue(dr38);
      goto L3(r181, dx56);
    };
    r190 = dyn lines(p16, p17);
    check L265() else D80();
  D78():
    deopt 312 [i44, c54, r169];
  D80():
    deopt 318 [i46, r190];
  L261():
    goto L72(i44, c54, r169);
  L265():
    text = ldf text;
    check L266() else D81();
  D81():
    deopt 320 [i46];
  L266():
    p18 = prom<V +>{
      P16 = ld P;
      P17 = force? P16;
      checkMissing(P17);
      c68 = `is.object`(P17);
      if c68 then L1() else L2(1.1, P17);
    L0(r194, dx59):
      r196 = `*`(r194, dx59);
      return r196;
    L1():
      dr40 = tryDispatchBuiltin.1("$", P17);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(1.1, dr40);
    L2(r192, P19):
      r195 = `$`(P19, <sym x>);
      goto L0(r192, r195);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr40);
      goto L0(1.1, dx58);
    };
    p19 = prom<V +>{
      P20 = ld P;
      P21 = force? P20;
      checkMissing(P21);
      c69 = `is.object`(P21);
      if c69 then L1() else L2(1.1, P21);
    L0(r201, dx61):
      r203 = `*`(r201, dx61);
      return r203;
    L1():
      dr42 = tryDispatchBuiltin.1("$", P21);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(1.1, dr42);
    L2(r199, P23):
      r202 = `$`(P23, <sym y>);
      goto L0(r199, r202);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr42);
      goto L0(1.1, dx60);
    };
    p20 = prom<V +>{
      labels9 = ld labels;
      labels10 = force? labels9;
      checkMissing(labels10);
      c70 = `is.object`(labels10);
      if c70 then L1() else L2(labels10);
    L0(dx63):
      return dx63;
    L1():
      dr44 = tryDispatchBuiltin.1("[", labels10);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(labels12):
      i53 = ld i;
      i54 = force? i53;
      __16 = ldf `[` in base;
      r205 = dyn __16(labels12, i54);
      goto L0(r205);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx62);
    };
    p22 = prom<V +>{
      ifelse = ldf ifelse;
      p21 = prom<V +>{
        P24 = ld P;
        P25 = force? P24;
        checkMissing(P25);
        c71 = `is.object`(P25);
        if c71 then L1() else L2(P25);
      L0(dx65):
        r208 = `<`(dx65, 0.0);
        return r208;
      L1():
        dr46 = tryDispatchBuiltin.1("$", P25);
        dc23 = getTryDispatchBuiltinDispatched(dr46);
        if dc23 then L3() else L2(dr46);
      L2(P27):
        r207 = `$`(P27, <sym x>);
        goto L0(r207);
      L3():
        dx64 = getTryDispatchBuiltinValue(dr46);
        goto L0(dx64);
      };
      r210 = dyn ifelse(p21, 1.0, 0.0);
      return r210;
    };
    ddd1 = ld `...`;
    r212 = dyn text[, , , xpd, adj, `...`](p18, p19, p20, TRUE, p22, ddd1);
    check L267() else D82();
  D82():
    deopt 329 [i46, r212];
  L267():
    goto L74(i46);
  }
}
fun inner3207722480(t) {
  (reg t:*) -+> V { var t:*, reg twopi:*, reg twopi1:V, reg t1:*, reg t2:V, reg r:V, reg init_angle:*, reg init_angle1:V, reg r1:V, reg r2:V, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg radius:*, reg radius1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg radius4:V, reg r7:V, reg t2p:*, reg t2p1:V, reg r8:V, reg r9:V, reg radius5:*, reg radius6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg radius9:V, reg r11:V, reg t2p2:*, reg t2p3:V, reg r12:V, reg r13:V, reg list:cls, reg r14:V |
    mkenv;
    st t = t;
    twopi = ld twopi;
    check L3() else D0();
  D0():
    deopt 0 [twopi];
  L3():
    twopi1 = force? twopi;
    checkMissing(twopi1);
    t1 = ld t;
    check L4() else D1();
  D1():
    deopt 1 [twopi1, t1];
  L4():
    t2 = force? t1;
    checkMissing(t2);
    r = `*`(twopi1, t2);
    init_angle = ld `init.angle`;
    check L5() else D2();
  D2():
    deopt 3 [r, init_angle];
  L5():
    init_angle1 = force? init_angle;
    checkMissing(init_angle1);
    r1 = `*`(init_angle1, 3.141592653589793);
    r2 = `/`(r1, 180.0);
    r3 = `+`(r, r2);
    st t2p = r3;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r5):
    popenv;
    return r5;
  L6():
    radius = ld radius;
    check L8() else D3();
  L7():
    r4 = dyn base[x, y](<lang `*`(radius, cos(t2p))>, <lang `*`(radius, sin(t2p))>);
    goto L0(r4);
  D3():
    deopt 13 [radius];
  L8():
    radius1 = force? radius;
    checkMissing(radius1);
    sym1 = ldf cos;
    base1 = ldf cos in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L1(radius4, r7):
    r9 = `*`(radius4, r7);
    radius5 = ld radius;
    check L12() else D5();
  L9():
    t2p = ld t2p;
    check L11() else D4();
  L10():
    r6 = dyn base1(<sym t2p>);
    goto L1(radius1, r6);
  D4():
    deopt 15 [radius1, t2p];
  D5():
    deopt 20 [radius5];
  L11():
    t2p1 = force? t2p;
    checkMissing(t2p1);
    r8 = cos(t2p1);
    goto L1(radius1, r8);
  L12():
    radius6 = force? radius5;
    checkMissing(radius6);
    sym2 = ldf sin;
    base2 = ldf sin in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L2(radius9, r11):
    r13 = `*`(radius9, r11);
    list = ldf list in base;
    r14 = dyn list(r9, r13);
    check L16() else D7();
  L13():
    t2p2 = ld t2p;
    check L15() else D6();
  L14():
    r10 = dyn base2(<sym t2p>);
    goto L2(radius6, r10);
  D6():
    deopt 22 [radius6, t2p2];
  D7():
    deopt 28 [r14];
  L15():
    t2p3 = force? t2p2;
    checkMissing(t2p3);
    r12 = sin(t2p3);
    goto L2(radius6, r12);
  L16():
    goto L0(r14);
  }
}