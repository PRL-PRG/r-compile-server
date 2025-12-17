fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3133580570;
    st `persp.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3133580570(x, y, z, xlim, ylim, zlim, xlab, ylab, zlab, main, sub, theta, phi, r, d, scale, expand, col, border, ltheta, lphi, shade, box, axes, nticks, ticktype, `...`) {
  (reg x:*, reg y:*, reg z:*, reg xlim:*, reg ylim:*, reg zlim:*, reg xlab:*, reg ylab:*, reg zlab:*, reg main:*, reg sub:*, reg theta:*, reg phi:*, reg r:*, reg d:*, reg scale:*, reg expand:*, reg col:*, reg border:*, reg ltheta:*, reg lphi:*, reg shade:*, reg box:*, reg axes:*, reg nticks:*, reg ticktype:*, reg ddd:dots) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg seq:cls, reg nrow:cls, reg z1:*, reg z2:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), var y:*, reg y_isMissing:L, reg y_orDefault:*, reg seq1:cls, reg ncol:cls, reg z3:*, reg z4:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), var z:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg x1:*, reg x2:V, reg range:cls, reg r13:V, reg p6:p(V +), var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg y1:*, reg y2:V, reg range1:cls, reg r17:V, reg p7:p(V +), var zlim:*, reg zlim_isMissing:L, reg zlim_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg z5:*, reg z6:V, reg range2:cls, reg r21:V, reg p8:p(V +), var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var zlab:*, reg zlab_isMissing:L, reg zlab_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var theta:*, reg theta_isMissing:L, reg theta_orDefault:*, var phi:*, reg phi_isMissing:L, reg phi_orDefault:*, var r:*, reg r_isMissing:L, reg r_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg r25:V, reg p9:p(V +), var d:*, reg d_isMissing:L, reg d_orDefault:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var expand:*, reg expand_isMissing:L, reg expand_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var ltheta:*, reg ltheta_isMissing:L, reg ltheta_orDefault:*, reg p10:p(V +), var lphi:*, reg lphi_isMissing:L, reg lphi_orDefault:*, var shade:*, reg shade_isMissing:L, reg shade_orDefault:*, var box:*, reg box_isMissing:L, reg box_orDefault:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var nticks:*, reg nticks_isMissing:L, reg nticks_orDefault:*, var ticktype:*, reg ticktype_isMissing:L, reg ticktype_orDefault:*, var `...`:dots?, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg xlab1:*, reg xlab2:V, reg c:V, reg c1:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg missing:cls, reg r32:V, reg r33:V, reg c2:L, reg deparse1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg substitute:cls, reg r36:V, reg p11:p(V +), reg r38:V, reg r39:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg ylab1:*, reg ylab2:V, reg c3:V, reg c4:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg missing1:cls, reg r45:V, reg r46:V, reg c5:L, reg deparse2:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg substitute1:cls, reg r49:V, reg p12:p(V +), reg r51:V, reg r52:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg zlab1:*, reg zlab2:V, reg c6:V, reg c7:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg r57:V, reg missing2:cls, reg r58:V, reg r59:V, reg c8:L, reg deparse3:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r60:V, reg r61:V, reg substitute2:cls, reg r62:V, reg p13:p(V +), reg r64:V, reg r65:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r67:V, reg r68:V, reg missing3:cls, reg r69:V, reg c9:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r70:V, reg r71:V, reg missing4:cls, reg r72:V, reg r73:V, reg c10:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r74:V, reg r75:V, reg x3:*, reg x4:V, reg is_list:cls, reg r76:V, reg c11:L, reg x5:*, reg x6:V, reg c12:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r77:V, reg x9:*, reg x10:V, reg c13:L, reg x12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r78:V, reg x13:*, reg x14:V, reg c14:L, reg x16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r79:V, reg dx6:V, reg x17:*, reg x18:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r80:V, reg r81:V, reg nrow1:cls, reg z7:*, reg z8:V, reg p14:p(V +), reg r83:V, reg seq_int:cls, reg r84:V, reg dx7:V, reg stop:cls, reg r85:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r86:V, reg r87:V, reg x19:*, reg x20:V, reg is_list1:cls, reg r88:V, reg c15:L, reg x21:*, reg x22:V, reg c16:L, reg x24:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg r89:V, reg x25:*, reg x26:V, reg c17:L, reg x28:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg r90:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r91:V, reg r92:V, reg diff:cls, reg x29:*, reg x30:V, reg p15:p(V +), reg r94:V, reg r95:V, reg any:cls, reg r96:V, reg c18:L, reg c19:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r97:V, reg c23:L, reg r98:V, reg diff1:cls, reg y3:*, reg y4:V, reg p16:p(V +), reg r100:V, reg r101:V, reg any1:cls, reg r102:V, reg c24:L, reg c25:V, reg c27:L, reg stop1:cls, reg r103:V, reg box1:*, reg box2:V, reg c28:L, reg z9:*, reg z10:V, reg c29:L, reg z12:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r105:V, reg z15:V, reg r106:V, reg z16:*, reg z17:V, reg is_na:cls, reg r107:V, reg r108:V, reg __:cls, reg r109:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r110:V, reg r111:V, reg x31:*, reg x32:V, reg xlim1:*, reg xlim2:V, reg c30:L, reg x34:V, reg xlim4:V, reg dr12:V, reg dc6:L, reg dx15:V, reg x36:V, reg dx16:V, reg __1:cls, reg r112:V, reg r113:V, reg any2:cls, reg r114:V, reg c31:L, reg c32:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r115:V, reg c36:L, reg r116:V, reg x37:*, reg x38:V, reg xlim5:*, reg xlim6:V, reg c37:L, reg c39:L, reg x40:V, reg xlim8:V, reg dr14:V, reg dc7:L, reg dx17:V, reg c41:L, reg x42:V, reg dx18:V, reg __2:cls, reg r117:V, reg r118:V, reg any3:cls, reg r119:V, reg c42:L, reg c43:V, reg c45:L, reg c46:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r120:V, reg c50:L, reg r121:V, reg y5:*, reg y6:V, reg ylim1:*, reg ylim2:V, reg c51:L, reg c53:L, reg y8:V, reg ylim4:V, reg dr16:V, reg dc8:L, reg dx19:V, reg c55:L, reg y10:V, reg dx20:V, reg __3:cls, reg r122:V, reg r123:V, reg any4:cls, reg r124:V, reg c56:L, reg c57:V, reg c59:L, reg c60:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r125:V, reg c64:L, reg r126:V, reg y11:*, reg y12:V, reg ylim5:*, reg ylim6:V, reg c65:L, reg c67:L, reg y14:V, reg ylim8:V, reg dr18:V, reg dc9:L, reg dx21:V, reg c69:L, reg y16:V, reg dx22:V, reg __4:cls, reg r127:V, reg r128:V, reg any5:cls, reg r129:V, reg c70:L, reg c71:V, reg c73:L, reg c74:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r130:V, reg c78:L, reg r131:V, reg zz:*, reg zz1:V, reg zlim1:*, reg zlim2:V, reg c79:L, reg c81:L, reg zz3:V, reg zlim4:V, reg dr20:V, reg dc10:L, reg dx23:V, reg c83:L, reg zz5:V, reg dx24:V, reg __5:cls, reg r132:V, reg r133:V, reg any6:cls, reg r134:V, reg c84:L, reg c85:V, reg c87:L, reg c88:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r135:V, reg c92:L, reg r136:V, reg zz6:*, reg zz7:V, reg zlim5:*, reg zlim6:V, reg c93:L, reg c95:L, reg zz9:V, reg zlim8:V, reg dr22:V, reg dc11:L, reg dx25:V, reg c97:L, reg zz11:V, reg dx26:V, reg __6:cls, reg r137:V, reg r138:V, reg any7:cls, reg r139:V, reg c98:L, reg c99:V, reg c101:L, reg warning:cls, reg r140:V, reg r141:V, reg pmatch:cls, reg ticktype1:*, reg ticktype2:V, reg p17:p(V +), reg sym27:cls, reg base27:cls, reg guard27:L, reg r144:V, reg r145:V, reg c102:cls, reg r146:V, reg p18:p(V +), reg r148:V, reg plot_new:cls, reg r149:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r150:V, reg r151:V, reg _External_graphics:cls, reg C_persp:*, reg C_persp1:V, reg p19:p(V +), reg x43:*, reg x44:V, reg p20:p(V +), reg y17:*, reg y18:V, reg p21:p(V +), reg z18:*, reg z19:V, reg p22:p(V +), reg xlim9:*, reg xlim10:V, reg p23:p(V +), reg ylim9:*, reg ylim10:V, reg p24:p(V +), reg zlim9:*, reg zlim10:V, reg p25:p(V +), reg theta1:*, reg theta2:V, reg p26:p(V +), reg phi1:*, reg phi2:V, reg p27:p(V +), reg r161:*, reg r162:V, reg p28:p(V +), reg d1:*, reg d2:V, reg p29:p(V +), reg scale1:*, reg scale2:V, reg p30:p(V +), reg expand1:*, reg expand2:V, reg p31:p(V +), reg col1:*, reg col2:V, reg p32:p(V +), reg border1:*, reg border2:V, reg p33:p(V +), reg ltheta1:*, reg ltheta2:V, reg p34:p(V +), reg lphi1:*, reg lphi2:V, reg p35:p(V +), reg shade1:*, reg shade2:V, reg p36:p(V +), reg box3:*, reg box4:V, reg p37:p(V +), reg axes1:*, reg axes2:V, reg p38:p(V +), reg nticks1:*, reg nticks2:V, reg p39:p(V +), reg ticktype3:*, reg ticktype4:V, reg p40:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r176:V, reg r177:V, reg xlab3:*, reg xlab4:V, reg as_character:cls, reg r178:V, reg p41:p(V +), reg sym30:cls, reg base30:cls, reg guard30:L, reg r180:V, reg r181:V, reg ylab3:*, reg ylab4:V, reg as_character1:cls, reg r182:V, reg p42:p(V +), reg sym31:cls, reg base31:cls, reg guard31:L, reg r184:V, reg r185:V, reg zlab3:*, reg zlab4:V, reg as_character2:cls, reg r186:V, reg p43:p(V +), reg ddd1:dots?, reg r188:V, reg getHook:cls, reg r189:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c103:L, reg x45:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r190:V, reg i7:I, reg r191:V, reg fun:*, reg fun1:V, reg c104:L, reg c105:L, reg get:cls, reg fun2:*, reg fun3:V, reg p44:p(V +), reg r193:V, reg i10:I, reg try:cls, reg fun4:cls, reg r195:V, reg p45:p(V +), reg r197:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r198:V, reg r199:V, reg main1:*, reg main2:V, reg c106:V, reg r200:V, reg c107:L, reg c108:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r201:V, reg c112:L, reg r202:V, reg sub1:*, reg sub2:V, reg c113:V, reg r203:V, reg c114:L, reg c115:V, reg c117:L, reg title:cls, reg main3:*, reg main4:V, reg p46:p(V +), reg sub3:*, reg sub4:V, reg p47:p(V +), reg ddd2:dots?, reg r206:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r208:V, reg r209:V, reg r210:*, reg r211:V, reg invisible:cls, reg r212:V |
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
        r2 = dyn nrow(p);
        return r2;
      };
      r4 = dyn seq[, , `length.out`](0.0, 1.0, p1);
      return r4;
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
        r7 = dyn ncol(p3);
        return r7;
      };
      r9 = dyn seq1[, , `length.out`](0.0, 1.0, p4);
      return r9;
    };
    goto L3(p5);
  L3(y_orDefault):
    st y = y_orDefault;
    st z = z;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L4() else L5(xlim);
  L4():
    p6 = prom<V +>{
      sym = ldf range;
      base = ldf range in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r12):
      return r12;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      range = ldf range in base;
      r13 = dyn range(x2);
      goto L0(r13);
    L2():
      r11 = dyn base(<sym x>);
      goto L0(r11);
    };
    goto L5(p6);
  L5(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L6() else L7(ylim);
  L6():
    p7 = prom<V +>{
      sym1 = ldf range;
      base1 = ldf range in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      range1 = ldf range in base;
      r17 = dyn range1(y2);
      goto L0(r17);
    L2():
      r15 = dyn base1(<sym y>);
      goto L0(r15);
    };
    goto L7(p7);
  L7(ylim_orDefault):
    st ylim = ylim_orDefault;
    zlim_isMissing = missing.0(zlim);
    if zlim_isMissing then L8() else L9(zlim);
  L8():
    p8 = prom<V +>{
      sym2 = ldf range;
      base2 = ldf range in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      z5 = ld z;
      z6 = force? z5;
      checkMissing(z6);
      range2 = ldf range in base;
      r21 = dyn range2(z6, TRUE);
      goto L0(r21);
    L2():
      r19 = dyn base2[, `na.rm`](<sym z>, TRUE);
      goto L0(r19);
    };
    goto L9(p8);
  L9(zlim_orDefault):
    st zlim = zlim_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L10(NULL) else L10(xlab);
  L10(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L11(NULL) else L11(ylab);
  L11(ylab_orDefault):
    st ylab = ylab_orDefault;
    zlab_isMissing = missing.0(zlab);
    if zlab_isMissing then L12(NULL) else L12(zlab);
  L12(zlab_orDefault):
    st zlab = zlab_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L13(NULL) else L13(main);
  L13(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L14(NULL) else L14(sub);
  L14(sub_orDefault):
    st sub = sub_orDefault;
    theta_isMissing = missing.0(theta);
    if theta_isMissing then L15(0.0) else L15(theta);
  L15(theta_orDefault):
    st theta = theta_orDefault;
    phi_isMissing = missing.0(phi);
    if phi_isMissing then L16(15.0) else L16(phi);
  L16(phi_orDefault):
    st phi = phi_orDefault;
    r_isMissing = missing.0(r);
    if r_isMissing then L17() else L18(r);
  L17():
    p9 = prom<V +>{
      sym3 = ldf sqrt;
      base3 = ldf sqrt in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      r25 = sqrt(3.0);
      goto L0(r25);
    L2():
      r23 = dyn base3(3.0);
      goto L0(r23);
    };
    goto L18(p9);
  L18(r_orDefault):
    st r = r_orDefault;
    d_isMissing = missing.0(d);
    if d_isMissing then L19(1.0) else L19(d);
  L19(d_orDefault):
    st d = d_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L20(TRUE) else L20(scale);
  L20(scale_orDefault):
    st scale = scale_orDefault;
    expand_isMissing = missing.0(expand);
    if expand_isMissing then L21(1.0) else L21(expand);
  L21(expand_orDefault):
    st expand = expand_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L22("white") else L22(col);
  L22(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L23(NULL) else L23(border);
  L23(border_orDefault):
    st border = border_orDefault;
    ltheta_isMissing = missing.0(ltheta);
    if ltheta_isMissing then L24() else L25(ltheta);
  L24():
    p10 = prom<V +>{
      return -135.0;
    };
    goto L25(p10);
  L25(ltheta_orDefault):
    st ltheta = ltheta_orDefault;
    lphi_isMissing = missing.0(lphi);
    if lphi_isMissing then L26(0.0) else L26(lphi);
  L26(lphi_orDefault):
    st lphi = lphi_orDefault;
    shade_isMissing = missing.0(shade);
    if shade_isMissing then L27(NA_LGL) else L27(shade);
  L27(shade_orDefault):
    st shade = shade_orDefault;
    box_isMissing = missing.0(box);
    if box_isMissing then L28(TRUE) else L28(box);
  L28(box_orDefault):
    st box = box_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L29(TRUE) else L29(axes);
  L29(axes_orDefault):
    st axes = axes_orDefault;
    nticks_isMissing = missing.0(nticks);
    if nticks_isMissing then L30(5.0) else L30(nticks);
  L30(nticks_orDefault):
    st nticks = nticks_orDefault;
    ticktype_isMissing = missing.0(ticktype);
    if ticktype_isMissing then L31("simple") else L31(ticktype);
  L31(ticktype_orDefault):
    st ticktype = ticktype_orDefault;
    st `...` = ddd;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L102() else L103();
  L32(r29):
    c1 = `as.logical`(r29);
    if c1 then L105() else L33();
  L102():
    xlab1 = ld xlab;
    check L104() else D0();
  L103():
    r28 = dyn base4(<sym xlab>);
    goto L32(r28);
  D0():
    deopt 1 [xlab1];
  L33():
    goto L37();
  L37():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L113() else L114();
  L104():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c = `==`(xlab2, NULL);
    goto L32(c);
  L105():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L106() else L107();
  L34(r31):
    r33 = `!`(r31);
    c2 = `as.logical`(r33);
    if c2 then L108() else L35();
  L38(r42):
    c4 = `as.logical`(r42);
    if c4 then L116() else L39();
  L106():
    missing = ldf missing in base;
    r32 = dyn missing(<sym x>);
    goto L34(r32);
  L107():
    r30 = dyn base5(<sym x>);
    goto L34(r30);
  L113():
    ylab1 = ld ylab;
    check L115() else D3();
  L114():
    r41 = dyn base7(<sym ylab>);
    goto L38(r41);
  D3():
    deopt 18 [ylab1];
  L35():
    goto L36("X");
  L36(r39):
    st xlab = r39;
    goto L37();
  L39():
    goto L43();
  L43():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L124() else L125();
  L108():
    deparse1 = ldf deparse1;
    check L109() else D1();
  L115():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c3 = `==`(ylab2, NULL);
    goto L38(c3);
  L116():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L117() else L118();
  D1():
    deopt 9 [];
  L40(r44):
    r46 = `!`(r44);
    c5 = `as.logical`(r46);
    if c5 then L119() else L41();
  L44(r55):
    c7 = `as.logical`(r55);
    if c7 then L127() else L45();
  L109():
    p11 = prom<V +>{
      sym6 = ldf substitute;
      base6 = ldf substitute in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      substitute = ldf substitute in base;
      r36 = dyn substitute(<sym x>);
      goto L0(r36);
    L2():
      r34 = dyn base6(<sym x>);
      goto L0(r34);
    };
    r38 = dyn deparse1(p11);
    check L110() else D2();
  L117():
    missing1 = ldf missing in base;
    r45 = dyn missing1(<sym y>);
    goto L40(r45);
  L118():
    r43 = dyn base8(<sym y>);
    goto L40(r43);
  L124():
    zlab1 = ld zlab;
    check L126() else D6();
  L125():
    r54 = dyn base10(<sym zlab>);
    goto L44(r54);
  D2():
    deopt 11 [r38];
  D6():
    deopt 35 [zlab1];
  L41():
    goto L42("Y");
  L42(r52):
    st ylab = r52;
    goto L43();
  L45():
    goto L49();
  L49():
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L135() else L136();
  L110():
    goto L36(r38);
  L119():
    deparse2 = ldf deparse1;
    check L120() else D4();
  L126():
    zlab2 = force? zlab1;
    checkMissing(zlab2);
    c6 = `==`(zlab2, NULL);
    goto L44(c6);
  L127():
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L128() else L129();
  D4():
    deopt 26 [];
  L46(r57):
    r59 = `!`(r57);
    c8 = `as.logical`(r59);
    if c8 then L130() else L47();
  L50(r68):
    c9 = `as.logical`(r68);
    if c9 then L137() else L51();
  L120():
    p12 = prom<V +>{
      sym9 = ldf substitute;
      base9 = ldf substitute in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      substitute1 = ldf substitute in base;
      r49 = dyn substitute1(<sym y>);
      goto L0(r49);
    L2():
      r47 = dyn base9(<sym y>);
      goto L0(r47);
    };
    r51 = dyn deparse2(p12);
    check L121() else D5();
  L128():
    missing2 = ldf missing in base;
    r58 = dyn missing2(<sym z>);
    goto L46(r58);
  L129():
    r56 = dyn base11(<sym z>);
    goto L46(r56);
  L135():
    missing3 = ldf missing in base;
    r69 = dyn missing3(<sym z>);
    goto L50(r69);
  L136():
    r67 = dyn base13(<sym z>);
    goto L50(r67);
  D5():
    deopt 28 [r51];
  L47():
    goto L48("Z");
  L48(r65):
    st zlab = r65;
    goto L49();
  L51():
    sym17 = ldf `is.list`;
    base17 = ldf `is.list` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L172() else L173();
  L59():
    sym18 = ldf any;
    base18 = ldf any in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L188() else L189();
  L121():
    goto L42(r51);
  L130():
    deparse3 = ldf deparse1;
    check L131() else D7();
  L137():
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L138() else L139();
  D7():
    deopt 43 [];
  L52(r71):
    r73 = `!`(r71);
    c10 = `as.logical`(r73);
    if c10 then L140() else L53();
  L60(r87):
    c15 = `as.logical`(r87);
    if c15 then L176() else L61();
  L62(r92):
    c18 = `as.logical`(r92);
    if c18 then L63(c18) else L193();
  L131():
    p13 = prom<V +>{
      sym12 = ldf substitute;
      base12 = ldf substitute in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      substitute2 = ldf substitute in base;
      r62 = dyn substitute2(<sym z>);
      goto L0(r62);
    L2():
      r60 = dyn base12(<sym z>);
      goto L0(r60);
    };
    r64 = dyn deparse3(p13);
    check L132() else D8();
  L138():
    missing4 = ldf missing in base;
    r72 = dyn missing4(<sym x>);
    goto L52(r72);
  L139():
    r70 = dyn base14(<sym x>);
    goto L52(r70);
  L172():
    x19 = ld x;
    check L174() else D20();
  L173():
    r86 = dyn base17(<sym x>);
    goto L60(r86);
  L188():
    diff = ldf diff;
    check L190() else D24();
  L189():
    r91 = dyn base18(<lang `<=`(diff(x), 0.0)>);
    goto L62(r91);
  D8():
    deopt 45 [r64];
  D20():
    deopt 97 [x19];
  D24():
    deopt 114 [];
  L53():
    stop = ldf stop;
    check L169() else D18();
  L58(dx7):
    goto L59();
  L61():
    goto L59();
  L63(c19):
    c27 = `as.logical`(c19);
    if c27 then L200() else L65();
  L132():
    goto L48(r64);
  L140():
    sym15 = ldf `is.list`;
    base15 = ldf `is.list` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L141() else L142();
  L174():
    x20 = force? x19;
    checkMissing(x20);
    is_list1 = ldf `is.list` in base;
    r88 = dyn is_list1(x20);
    check L175() else D21();
  L176():
    x21 = ld x;
    check L177() else D22();
  L190():
    p15 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    r94 = dyn diff(p15);
    check L191() else D25();
  L193():
    sym19 = ldf any;
    base19 = ldf any in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L194() else L195();
  D18():
    deopt 92 [];
  D21():
    deopt 100 [r88];
  D22():
    deopt 101 [x21];
  D25():
    deopt 116 [r94];
  L54(r75):
    c11 = `as.logical`(r75);
    if c11 then L145() else L55();
  L64(c23, r98):
    c24 = `as.logical`(r98);
    c25 = `||`(c23, c24);
    goto L63(c25);
  L65():
    goto L66();
  L66():
    box1 = ld box;
    check L204() else D32();
  L141():
    x3 = ld x;
    check L143() else D9();
  L142():
    r74 = dyn base15(<sym x>);
    goto L54(r74);
  L169():
    r85 = dyn stop("no 'z' matrix specified");
    check L170() else D19();
  L175():
    goto L60(r88);
  L177():
    x22 = force? x21;
    checkMissing(x22);
    c16 = `is.object`(x22);
    if c16 then L179() else L180(x22);
  L191():
    r95 = `<=`(r94, 0.0);
    any = ldf any in base;
    r96 = dyn any(r95);
    check L192() else D26();
  L194():
    diff1 = ldf diff;
    check L196() else D27();
  L195():
    r97 = dyn base19(<lang `<=`(diff(y), 0.0)>);
    goto L64(c18, r97);
  L200():
    stop1 = ldf stop;
    check L201() else D30();
  D9():
    deopt 60 [x3];
  D19():
    deopt 94 [r85];
  D26():
    deopt 120 [r96];
  D27():
    deopt 124 [c18];
  D30():
    deopt 133 [];
  D32():
    deopt 138 [box1];
  L55():
    x17 = ld x;
    check L162() else D14();
  L56(dx6):
    goto L58(dx6);
  L143():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r76 = dyn is_list(x4);
    check L144() else D10();
  L145():
    x5 = ld x;
    check L146() else D11();
  L170():
    goto L58(r85);
  L178(dx10):
    st y = dx10;
    x25 = ld x;
    check L182() else D23();
  L179():
    dr6 = tryDispatchBuiltin.1("$", x22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L181() else L180(dr6);
  L180(x24):
    r89 = `$`(x24, <sym y>);
    goto L178(r89);
  L192():
    goto L62(r96);
  L196():
    p16 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r100 = dyn diff1(p16);
    check L197() else D28();
  L201():
    r103 = dyn stop1("increasing 'x' and 'y' values expected");
    check L202() else D31();
  L204():
    box2 = force? box1;
    checkMissing(box2);
    c28 = `as.logical`(box2);
    if c28 then L205() else L67();
  D10():
    deopt 63 [r76];
  D11():
    deopt 64 [x5];
  D14():
    deopt 76 [x17];
  D23():
    deopt 105 [x25];
  D28():
    deopt 126 [c18, r100];
  D31():
    deopt 135 [r103];
  L67():
    goto L89();
  L89():
    pmatch = ldf pmatch;
    check L277() else D56();
  L144():
    goto L54(r76);
  L146():
    x6 = force? x5;
    checkMissing(x6);
    c12 = `is.object`(x6);
    if c12 then L148() else L149(x6);
  L162():
    x18 = force? x17;
    checkMissing(x18);
    st z = x18;
    sym16 = ldf `seq.int`;
    base16 = ldf `seq.int` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L163() else L164();
  L181():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L178(dx9);
  L182():
    x26 = force? x25;
    checkMissing(x26);
    c17 = `is.object`(x26);
    if c17 then L184() else L185(x26);
  L197():
    r101 = `<=`(r100, 0.0);
    any1 = ldf any in base;
    r102 = dyn any1(r101);
    check L198() else D29();
  L202():
    goto L66();
  L205():
    z9 = ld z;
    check L206() else D33();
  D29():
    deopt 130 [c18, r102];
  D33():
    deopt 140 [z9];
  D56():
    deopt 231 [];
  L57(r81):
    st x = r81;
    goto L56(r81);
  L147(dx1):
    st z = dx1;
    x9 = ld x;
    check L151() else D12();
  L148():
    dr = tryDispatchBuiltin.1("$", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L150() else L149(dr);
  L149(x8):
    r77 = `$`(x8, <sym z>);
    goto L147(r77);
  L163():
    nrow1 = ldf nrow;
    check L165() else D15();
  L164():
    r80 = dyn base16[, , `length.out`](0.0, 1.0, <lang nrow(z)>);
    goto L57(r80);
  L183(dx12):
    st x = dx12;
    goto L59();
  L184():
    dr8 = tryDispatchBuiltin.1("$", x26);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L186() else L185(dr8);
  L185(x28):
    r90 = `$`(x28, <sym x>);
    goto L183(r90);
  L198():
    goto L64(c18, r102);
  L206():
    z10 = force? z9;
    checkMissing(z10);
    c29 = `is.object`(z10);
    if c29 then L207() else L208(z10);
  L277():
    p17 = prom<V +>{
      ticktype1 = ld ticktype;
      ticktype2 = force? ticktype1;
      checkMissing(ticktype2);
      return ticktype2;
    };
    p18 = prom<V +>{
      sym27 = ldf c;
      base27 = ldf c in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r145):
      return r145;
    L1():
      c102 = ldf c in base;
      r146 = dyn c102("simple", "detailed");
      goto L0(r146);
    L2():
      r144 = dyn base27("simple", "detailed");
      goto L0(r144);
    };
    r148 = dyn pmatch(p17, p18);
    check L278() else D57();
  D12():
    deopt 68 [x9];
  D15():
    deopt 84 [];
  D57():
    deopt 234 [r148];
  L68(dx14):
    st zz = dx14;
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L214() else L215();
  L150():
    dx = getTryDispatchBuiltinValue(dr);
    goto L147(dx);
  L151():
    x10 = force? x9;
    checkMissing(x10);
    c13 = `is.object`(x10);
    if c13 then L153() else L154(x10);
  L165():
    p14 = prom<V +>{
      z7 = ld z;
      z8 = force? z7;
      checkMissing(z8);
      return z8;
    };
    r83 = dyn nrow1(p14);
    check L166() else D16();
  L186():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L183(dx11);
  L207():
    dr10 = tryDispatchBuiltin.1("[", z10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L209() else L208(dr10);
  L208(z12):
    sym20 = ldf `is.na`;
    base20 = ldf `is.na` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L210() else L211();
  L278():
    st ticktype = r148;
    plot_new = ldf `plot.new`;
    check L279() else D58();
  D16():
    deopt 86 [r83];
  D58():
    deopt 237 [];
  L69(z15, r106):
    r108 = `!`(r106);
    __ = ldf `[` in base;
    r109 = dyn __(z15, r108);
    goto L68(r109);
  L70(r111):
    c31 = `as.logical`(r111);
    if c31 then L72(c31) else L222();
  L152(dx3):
    st y = dx3;
    x13 = ld x;
    check L156() else D13();
  L153():
    dr2 = tryDispatchBuiltin.1("$", x10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L155() else L154(dr2);
  L154(x12):
    r78 = `$`(x12, <sym y>);
    goto L152(r78);
  L166():
    seq_int = ldf `seq.int` in base;
    r84 = dyn seq_int(0.0, 1.0, r83);
    check L167() else D17();
  L209():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L68(dx13);
  L210():
    z16 = ld z;
    check L212() else D34();
  L211():
    r105 = dyn base20(<sym z>);
    goto L69(z12, r105);
  L214():
    x31 = ld x;
    check L216() else D36();
  L215():
    r110 = dyn base21(<lang `<`(x, `[`(xlim, 1.0))>);
    goto L70(r110);
  L279():
    r149 = dyn plot_new();
    check L280() else D59();
  D13():
    deopt 72 [x13];
  D17():
    deopt 89 [r84];
  D34():
    deopt 144 [z12, z16];
  D36():
    deopt 153 [x31];
  D59():
    deopt 238 [r149];
  L72(c32):
    c45 = `as.logical`(c32);
    if c45 then L75(c45) else L232();
  L155():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L152(dx2);
  L156():
    x14 = force? x13;
    checkMissing(x14);
    c14 = `is.object`(x14);
    if c14 then L158() else L159(x14);
  L167():
    goto L57(r84);
  L212():
    z17 = force? z16;
    checkMissing(z17);
    is_na = ldf `is.na` in base;
    r107 = dyn is_na(z17);
    check L213() else D35();
  L216():
    x32 = force? x31;
    checkMissing(x32);
    xlim1 = ld xlim;
    check L217() else D37();
  L222():
    sym22 = ldf any;
    base22 = ldf any in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L223() else L224();
  L280():
    sym28 = ldf `.External.graphics`;
    base28 = ldf `.External.graphics` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L281() else L282();
  D35():
    deopt 147 [z12, r107];
  D37():
    deopt 154 [x32, xlim1];
  L73(c36, r116):
    c42 = `as.logical`(r116);
    c43 = `||`(c36, c42);
    goto L72(c43);
  L75(c46):
    c59 = `as.logical`(c46);
    if c59 then L78(c59) else L242();
  L90(r151):
    st r = r151;
    getHook = ldf getHook;
    check L285() else D62();
  L157(dx5):
    st x = dx5;
    goto L56(dx5);
  L158():
    dr4 = tryDispatchBuiltin.1("$", x14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L160() else L159(dr4);
  L159(x16):
    r79 = `$`(x16, <sym x>);
    goto L157(r79);
  L213():
    goto L69(z12, r107);
  L217():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c30 = `is.object`(xlim2);
    if c30 then L218() else L219(x32, xlim2);
  L223():
    x37 = ld x;
    check L225() else D39();
  L224():
    r115 = dyn base22(<lang `>`(x, `[`(xlim, 2.0))>);
    goto L73(c31, r115);
  L232():
    sym23 = ldf any;
    base23 = ldf any in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L233() else L234();
  L281():
    _External_graphics = ldf `.External.graphics`;
    check L283() else D60();
  L282():
    r150 = dyn base28(<sym C_persp>, <sym x>, <sym y>, <sym z>, <sym xlim>, <sym ylim>, <sym zlim>, <sym theta>, <sym phi>, <sym r>, <sym d>, <sym scale>, <sym expand>, <sym col>, <sym border>, <sym ltheta>, <sym lphi>, <sym shade>, <sym box>, <sym axes>, <sym nticks>, <sym ticktype>, <lang as.character(xlab)>, <lang as.character(ylab)>, <lang as.character(zlab)>, <sym ...>);
    goto L90(r150);
  D39():
    deopt 164 [c31, x37];
  D60():
    deopt 241 [];
  D62():
    deopt 271 [];
  L71(x36, dx16):
    r113 = `<`(x36, dx16);
    any2 = ldf any in base;
    r114 = dyn any2(r113);
    check L221() else D38();
  L76(c50, r121):
    c56 = `as.logical`(r121);
    c57 = `||`(c50, c56);
    goto L75(c57);
  L78(c60):
    c73 = `as.logical`(c60);
    if c73 then L81(c73) else L252();
  L160():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L157(dx4);
  L218():
    dr12 = tryDispatchBuiltin.1("[", xlim2);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L220() else L219(x32, dr12);
  L219(x34, xlim4):
    __1 = ldf `[` in base;
    r112 = dyn __1(xlim4, 1.0);
    goto L71(x34, r112);
  L225():
    x38 = force? x37;
    checkMissing(x38);
    xlim5 = ld xlim;
    check L226() else D40();
  L233():
    y5 = ld y;
    check L235() else D42();
  L234():
    r120 = dyn base23(<lang `<`(y, `[`(ylim, 1.0))>);
    goto L76(c45, r120);
  L242():
    sym24 = ldf any;
    base24 = ldf any in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L243() else L244();
  L283():
    p19 = prom<V +>{
      C_persp = ld C_persp;
      C_persp1 = force? C_persp;
      checkMissing(C_persp1);
      return C_persp1;
    };
    p20 = prom<V +>{
      x43 = ld x;
      x44 = force? x43;
      checkMissing(x44);
      return x44;
    };
    p21 = prom<V +>{
      y17 = ld y;
      y18 = force? y17;
      checkMissing(y18);
      return y18;
    };
    p22 = prom<V +>{
      z18 = ld z;
      z19 = force? z18;
      checkMissing(z19);
      return z19;
    };
    p23 = prom<V +>{
      xlim9 = ld xlim;
      xlim10 = force? xlim9;
      checkMissing(xlim10);
      return xlim10;
    };
    p24 = prom<V +>{
      ylim9 = ld ylim;
      ylim10 = force? ylim9;
      checkMissing(ylim10);
      return ylim10;
    };
    p25 = prom<V +>{
      zlim9 = ld zlim;
      zlim10 = force? zlim9;
      checkMissing(zlim10);
      return zlim10;
    };
    p26 = prom<V +>{
      theta1 = ld theta;
      theta2 = force? theta1;
      checkMissing(theta2);
      return theta2;
    };
    p27 = prom<V +>{
      phi1 = ld phi;
      phi2 = force? phi1;
      checkMissing(phi2);
      return phi2;
    };
    p28 = prom<V +>{
      r161 = ld r;
      r162 = force? r161;
      checkMissing(r162);
      return r162;
    };
    p29 = prom<V +>{
      d1 = ld d;
      d2 = force? d1;
      checkMissing(d2);
      return d2;
    };
    p30 = prom<V +>{
      scale1 = ld scale;
      scale2 = force? scale1;
      checkMissing(scale2);
      return scale2;
    };
    p31 = prom<V +>{
      expand1 = ld expand;
      expand2 = force? expand1;
      checkMissing(expand2);
      return expand2;
    };
    p32 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p33 = prom<V +>{
      border1 = ld border;
      border2 = force? border1;
      checkMissing(border2);
      return border2;
    };
    p34 = prom<V +>{
      ltheta1 = ld ltheta;
      ltheta2 = force? ltheta1;
      checkMissing(ltheta2);
      return ltheta2;
    };
    p35 = prom<V +>{
      lphi1 = ld lphi;
      lphi2 = force? lphi1;
      checkMissing(lphi2);
      return lphi2;
    };
    p36 = prom<V +>{
      shade1 = ld shade;
      shade2 = force? shade1;
      checkMissing(shade2);
      return shade2;
    };
    p37 = prom<V +>{
      box3 = ld box;
      box4 = force? box3;
      checkMissing(box4);
      return box4;
    };
    p38 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    p39 = prom<V +>{
      nticks1 = ld nticks;
      nticks2 = force? nticks1;
      checkMissing(nticks2);
      return nticks2;
    };
    p40 = prom<V +>{
      ticktype3 = ld ticktype;
      ticktype4 = force? ticktype3;
      checkMissing(ticktype4);
      return ticktype4;
    };
    p41 = prom<V +>{
      sym29 = ldf `as.character`;
      base29 = ldf `as.character` in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r177):
      return r177;
    L1():
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      as_character = ldf `as.character` in base;
      r178 = dyn as_character(xlab4);
      goto L0(r178);
    L2():
      r176 = dyn base29(<sym xlab>);
      goto L0(r176);
    };
    p42 = prom<V +>{
      sym30 = ldf `as.character`;
      base30 = ldf `as.character` in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L1() else L2();
    L0(r181):
      return r181;
    L1():
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      as_character1 = ldf `as.character` in base;
      r182 = dyn as_character1(ylab4);
      goto L0(r182);
    L2():
      r180 = dyn base30(<sym ylab>);
      goto L0(r180);
    };
    p43 = prom<V +>{
      sym31 = ldf `as.character`;
      base31 = ldf `as.character` in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L1() else L2();
    L0(r185):
      return r185;
    L1():
      zlab3 = ld zlab;
      zlab4 = force? zlab3;
      checkMissing(zlab4);
      as_character2 = ldf `as.character` in base;
      r186 = dyn as_character2(zlab4);
      goto L0(r186);
    L2():
      r184 = dyn base31(<sym zlab>);
      goto L0(r184);
    };
    ddd1 = ld `...`;
    r188 = dyn _External_graphics[, , , , , , , , , , , , , , , , , , , , , , , , , `...`](p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, ddd1);
    check L284() else D61();
  L285():
    r189 = dyn getHook("persp");
    check L286() else D63();
  D38():
    deopt 161 [r114];
  D40():
    deopt 165 [c31, x38, xlim5];
  D42():
    deopt 176 [c45, y5];
  D61():
    deopt 268 [r188];
  D63():
    deopt 273 [r189];
  L79(c64, r126):
    c70 = `as.logical`(r126);
    c71 = `||`(c64, c70);
    goto L78(c71);
  L81(c74):
    c87 = `as.logical`(c74);
    if c87 then L84(c87) else L262();
  L220():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L71(x32, dx15);
  L221():
    goto L70(r114);
  L226():
    xlim6 = force? xlim5;
    checkMissing(xlim6);
    c37 = `is.object`(xlim6);
    if c37 then L227() else L228(c31, x38, xlim6);
  L235():
    y6 = force? y5;
    checkMissing(y6);
    ylim1 = ld ylim;
    check L236() else D43();
  L243():
    y11 = ld y;
    check L245() else D45();
  L244():
    r125 = dyn base24(<lang `>`(y, `[`(ylim, 2.0))>);
    goto L79(c59, r125);
  L252():
    sym25 = ldf any;
    base25 = ldf any in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L253() else L254();
  L284():
    goto L90(r188);
  L286():
    s = toForSeq(r189);
    l = length(s);
    i = 0;
    goto L91(i);
  D43():
    deopt 177 [c45, y6, ylim1];
  D45():
    deopt 188 [c59, y11];
  L74(c41, x42, dx18):
    r118 = `>`(x42, dx18);
    any3 = ldf any in base;
    r119 = dyn any3(r118);
    check L230() else D41();
  L82(c78, r131):
    c84 = `as.logical`(r131);
    c85 = `||`(c78, c84);
    goto L81(c85);
  L84(c88):
    c101 = `as.logical`(c88);
    if c101 then L272() else L87();
  L91(i1):
    i2 = `+`.1(i1, 1);
    c103 = `<`.1(l, i2);
    if c103 then L287() else L95();
  L227():
    dr14 = tryDispatchBuiltin.1("[", xlim6);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L229() else L228(c31, x38, dr14);
  L228(c39, x40, xlim8):
    __2 = ldf `[` in base;
    r117 = dyn __2(xlim8, 2.0);
    goto L74(c39, x40, r117);
  L236():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c51 = `is.object`(ylim2);
    if c51 then L237() else L238(c45, y6, ylim2);
  L245():
    y12 = force? y11;
    checkMissing(y12);
    ylim5 = ld ylim;
    check L246() else D46();
  L253():
    zz = ld zz;
    check L255() else D48();
  L254():
    r130 = dyn base25(<lang `<`(zz, `[`(zlim, 1.0))>);
    goto L82(c73, r130);
  L262():
    sym26 = ldf any;
    base26 = ldf any in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L263() else L264();
  D41():
    deopt 172 [c41, r119];
  D46():
    deopt 189 [c59, y12, ylim5];
  D48():
    deopt 200 [c73, zz];
  L77(c55, y10, dx20):
    r123 = `<`(y10, dx20);
    any4 = ldf any in base;
    r124 = dyn any4(r123);
    check L240() else D44();
  L85(c92, r136):
    c98 = `as.logical`(r136);
    c99 = `||`(c92, c98);
    goto L84(c99);
  L87():
    goto L88(NULL);
  L88(r141):
    goto L89();
  L95():
    x45 = `[[`(s, i2, NULL, TRUE);
    st fun = x45;
    sym32 = ldf `is.character`;
    base32 = ldf `is.character` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L288() else L289();
  L229():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L74(c31, x38, dx17);
  L230():
    goto L73(c41, r119);
  L237():
    dr16 = tryDispatchBuiltin.1("[", ylim2);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L239() else L238(c45, y6, dr16);
  L238(c53, y8, ylim4):
    __3 = ldf `[` in base;
    r122 = dyn __3(ylim4, 1.0);
    goto L77(c53, y8, r122);
  L246():
    ylim6 = force? ylim5;
    checkMissing(ylim6);
    c65 = `is.object`(ylim6);
    if c65 then L247() else L248(c59, y12, ylim6);
  L255():
    zz1 = force? zz;
    checkMissing(zz1);
    zlim1 = ld zlim;
    check L256() else D49();
  L263():
    zz6 = ld zz;
    check L265() else D51();
  L264():
    r135 = dyn base26(<lang `>`(zz, `[`(zlim, 2.0))>);
    goto L85(c87, r135);
  L272():
    warning = ldf warning;
    check L273() else D54();
  L287():
    sym33 = ldf `is.null`;
    base33 = ldf `is.null` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L297() else L298();
  D44():
    deopt 184 [c55, r124];
  D49():
    deopt 201 [c73, zz1, zlim1];
  D51():
    deopt 212 [c87, zz6];
  D54():
    deopt 223 [];
  L80(c69, y16, dx22):
    r128 = `>`(y16, dx22);
    any5 = ldf any in base;
    r129 = dyn any5(r128);
    check L250() else D47();
  L92(i7, r191):
    c105 = `as.logical`(r191);
    if c105 then L291() else L93();
  L96(r199):
    r200 = `!`(r199);
    c107 = `as.logical`(r200);
    if c107 then L97(c107) else L300();
  L239():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L77(c45, y6, dx19);
  L240():
    goto L76(c55, r124);
  L247():
    dr18 = tryDispatchBuiltin.1("[", ylim6);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L249() else L248(c59, y12, dr18);
  L248(c67, y14, ylim8):
    __4 = ldf `[` in base;
    r127 = dyn __4(ylim8, 2.0);
    goto L80(c67, y14, r127);
  L256():
    zlim2 = force? zlim1;
    checkMissing(zlim2);
    c79 = `is.object`(zlim2);
    if c79 then L257() else L258(c73, zz1, zlim2);
  L265():
    zz7 = force? zz6;
    checkMissing(zz7);
    zlim5 = ld zlim;
    check L266() else D52();
  L273():
    r140 = dyn warning("surface extends beyond the box");
    check L274() else D55();
  L288():
    fun = ld fun;
    check L290() else D64();
  L289():
    r190 = dyn base32(<sym fun>);
    goto L92(i2, r190);
  L297():
    main1 = ld main;
    check L299() else D69();
  L298():
    r198 = dyn base33(<sym main>);
    goto L96(r198);
  D47():
    deopt 196 [c69, r129];
  D52():
    deopt 213 [c87, zz7, zlim5];
  D55():
    deopt 225 [r140];
  D64():
    deopt 275 [i2, fun];
  D69():
    deopt 293 [main1];
  L83(c83, zz5, dx24):
    r133 = `<`(zz5, dx24);
    any6 = ldf any in base;
    r134 = dyn any6(r133);
    check L260() else D50();
  L93():
    goto L94(i7);
  L94(i10):
    try = ldf try;
    check L295() else D67();
  L97(c108):
    c117 = `as.logical`(c108);
    if c117 then L305() else L99();
  L249():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L80(c59, y12, dx21);
  L250():
    goto L79(c69, r129);
  L257():
    dr20 = tryDispatchBuiltin.1("[", zlim2);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L259() else L258(c73, zz1, dr20);
  L258(c81, zz3, zlim4):
    __5 = ldf `[` in base;
    r132 = dyn __5(zlim4, 1.0);
    goto L83(c81, zz3, r132);
  L266():
    zlim6 = force? zlim5;
    checkMissing(zlim6);
    c93 = `is.object`(zlim6);
    if c93 then L267() else L268(c87, zz7, zlim6);
  L274():
    goto L88(r140);
  L290():
    fun1 = force? fun;
    checkMissing(fun1);
    c104 = `is.character`(fun1);
    goto L92(i2, c104);
  L291():
    get = ldf get;
    check L292() else D65();
  L299():
    main2 = force? main1;
    checkMissing(main2);
    c106 = `==`(main2, NULL);
    goto L96(c106);
  L300():
    sym34 = ldf `is.null`;
    base34 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L301() else L302();
  D50():
    deopt 208 [c83, r134];
  D65():
    deopt 279 [i7];
  D67():
    deopt 286 [i10];
  L86(c97, zz11, dx26):
    r138 = `>`(zz11, dx26);
    any7 = ldf any in base;
    r139 = dyn any7(r138);
    check L270() else D53();
  L98(c112, r202):
    r203 = `!`(r202);
    c114 = `as.logical`(r203);
    c115 = `||`(c112, c114);
    goto L97(c115);
  L99():
    goto L100();
  L100():
    sym35 = ldf invisible;
    base35 = ldf invisible in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L309() else L310();
  L259():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L83(c73, zz1, dx23);
  L260():
    goto L82(c83, r134);
  L267():
    dr22 = tryDispatchBuiltin.1("[", zlim6);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L269() else L268(c87, zz7, dr22);
  L268(c95, zz9, zlim8):
    __6 = ldf `[` in base;
    r137 = dyn __6(zlim8, 2.0);
    goto L86(c95, zz9, r137);
  L292():
    p44 = prom<V +>{
      fun2 = ld fun;
      fun3 = force? fun2;
      checkMissing(fun3);
      return fun3;
    };
    r193 = dyn get(p44);
    check L293() else D66();
  L295():
    p45 = prom<V +>{
      fun4 = ldf fun;
      r195 = dyn fun4();
      return r195;
    };
    r197 = dyn try(p45);
    check L296() else D68();
  L301():
    sub1 = ld sub;
    check L303() else D70();
  L302():
    r201 = dyn base34(<sym sub>);
    goto L98(c107, r201);
  L305():
    title = ldf title;
    check L306() else D71();
  D53():
    deopt 220 [c97, r139];
  D66():
    deopt 281 [i7, r193];
  D68():
    deopt 288 [i10, r197];
  D70():
    deopt 298 [c107, sub1];
  D71():
    deopt 304 [];
  L101(r209):
    popenv;
    return r209;
  L269():
    dx25 = getTryDispatchBuiltinValue(dr22);
    goto L86(c87, zz7, dx25);
  L270():
    goto L85(c97, r139);
  L293():
    st fun = r193;
    goto L94(i7);
  L296():
    goto L91(i10);
  L303():
    sub2 = force? sub1;
    checkMissing(sub2);
    c113 = `==`(sub2, NULL);
    goto L98(c107, c113);
  L306():
    p46 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    p47 = prom<V +>{
      sub3 = ld sub;
      sub4 = force? sub3;
      checkMissing(sub4);
      return sub4;
    };
    ddd2 = ld `...`;
    r206 = dyn title[main, sub, `...`](p46, p47, ddd2);
    check L307() else D72();
  L309():
    r210 = ld r;
    check L311() else D73();
  L310():
    r208 = dyn base35(<sym r>);
    goto L101(r208);
  D72():
    deopt 310 [r206];
  D73():
    deopt 315 [r210];
  L307():
    goto L100();
  L311():
    r211 = force? r210;
    checkMissing(r211);
    invisible = ldf invisible in base;
    r212 = dyn invisible(r211);
    check L312() else D74();
  D74():
    deopt 318 [r212];
  L312():
    goto L101(r212);
  }
}