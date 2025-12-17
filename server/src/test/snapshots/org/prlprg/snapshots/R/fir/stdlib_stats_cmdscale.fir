fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg cmdscale:cls, reg eurodist:*, reg eurodist1:V, reg p1:p(V +), reg r6:V, reg loc:*, reg loc1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg loc4:*, reg loc5:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r8:V, reg r9:V, reg plot:cls, reg x:*, reg x1:V, reg p2:p(V +), reg y:*, reg y1:V, reg p3:p(V +), reg r12:V, reg text:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg y2:*, reg y3:V, reg p5:p(V +), reg rownames:cls, reg loc8:*, reg loc9:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V |
    mkenv;
    r = clos inner2392447545;
    st cmdscale = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    cmdscale = ldf cmdscale;
    check L7() else D2();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    p1 = prom<V +>{
      eurodist = ld eurodist;
      eurodist1 = force? eurodist;
      checkMissing(eurodist1);
      return eurodist1;
    };
    r6 = dyn cmdscale(p1);
    check L8() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L6():
    goto L0();
  L8():
    st loc = r6;
    loc = ld loc;
    check L9() else D4();
  D4():
    deopt 13 [loc];
  L9():
    loc1 = force? loc;
    checkMissing(loc1);
    c = `is.object`(loc1);
    if c then L10() else L11();
  L1(dx1):
    st x = dx1;
    loc4 = ld loc;
    check L13() else D5();
  L10():
    dr = tryDispatchBuiltin.1("[", loc1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11();
  L11():
    __ = ldf `[` in base;
    r7 = dyn __(loc1, <missing>, 1.0);
    goto L1(r7);
  D5():
    deopt 20 [loc4];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    loc5 = force? loc4;
    checkMissing(loc5);
    c1 = `is.object`(loc5);
    if c1 then L14() else L15();
  L2(dx3):
    r9 = `-`(<missing>, dx3);
    st y = r9;
    plot = ldf plot;
    check L17() else D6();
  L14():
    dr2 = tryDispatchBuiltin.1("[", loc5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15();
  L15():
    __1 = ldf `[` in base;
    r8 = dyn __1(loc5, <missing>, 2.0);
    goto L2(r8);
  D6():
    deopt 29 [];
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L17():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p3 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r12 = dyn plot[, , type, xlab, ylab, asp, axes, main](p2, p3, "n", "", "", 1.0, FALSE, "cmdscale(eurodist)");
    check L18() else D7();
  D7():
    deopt 44 [r12];
  L18():
    text = ldf text;
    check L19() else D8();
  D8():
    deopt 46 [];
  L19():
    p4 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p5 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p7 = prom<V +>{
      rownames = ldf rownames;
      p6 = prom<V +>{
        loc8 = ld loc;
        loc9 = force? loc8;
        checkMissing(loc9);
        return loc9;
      };
      r16 = dyn rownames(p6);
      return r16;
    };
    r18 = dyn text[, , , cex](p4, p5, p7, 0.6);
    check L20() else D9();
  D9():
    deopt 52 [r18];
  L20():
    popenv;
    return r18;
  }
}
fun inner2392447545(d, k, eig, add, `x.ret`, `list.`) {
  (reg d:*, reg k:*, reg eig:*, reg add:*, reg x_ret:*, reg list_:*) -+> V { var d:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var eig:*, reg eig_isMissing:L, reg eig_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var `x.ret`:*, reg x_ret_isMissing:L, reg x_ret_orDefault:*, var `list.`:*, reg list__isMissing:L, reg list__orDefault:*, reg eig1:*, reg eig2:V, reg c:L, reg c1:V, reg add1:*, reg add2:V, reg c3:L, reg c4:V, reg c6:L, reg c7:V, reg x_ret1:*, reg x_ret2:V, reg c9:L, reg c10:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg d1:*, reg d2:V, reg anyNA:cls, reg r3:V, reg c12:L, reg stop:cls, reg r4:V, reg list_1:*, reg list_2:V, reg r6:V, reg c13:L, reg eig3:*, reg eig4:V, reg c14:L, reg warning:cls, reg r7:V, reg x_ret3:*, reg x_ret4:V, reg c15:L, reg warning1:cls, reg r9:V, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg d3:*, reg d4:V, reg attr:cls, reg r16:V, reg c16:V, reg c17:L, reg add3:*, reg add4:V, reg c18:L, reg as_matrix:cls, reg d5:*, reg d6:V, reg p1:p(V +), reg r18:V, reg as_matrix1:cls, reg d7:*, reg d8:V, reg r20:V, reg p2:p(V +), reg r22:V, reg l:*, reg storage_mode__:cls, reg r23:V, reg nrow:cls, reg x:*, reg x1:V, reg p3:p(V +), reg r25:V, reg ncol:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg r27:V, reg r28:V, reg c19:L, reg stop1:cls, reg r29:V, reg rownames:cls, reg x4:*, reg x5:V, reg p5:p(V +), reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg d9:*, reg d10:V, reg attr1:cls, reg r36:V, reg matrix:cls, reg n:*, reg n1:V, reg p6:p(V +), reg n2:*, reg n3:V, reg p7:p(V +), reg r39:V, reg add5:*, reg add6:V, reg c20:L, reg x6:*, reg x7:V, reg d11:*, reg d12:V, reg r40:V, reg l1:*, reg c21:L, reg r42:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg row:cls, reg x9:*, reg x10:V, reg p8:p(V +), reg r46:V, reg col:cls, reg x11:*, reg x12:V, reg p9:p(V +), reg r48:V, reg r49:V, reg ___:cls, reg r50:V, reg x13:*, reg x14:V, reg t:cls, reg x15:*, reg x16:V, reg p10:p(V +), reg r52:V, reg r53:V, reg add7:*, reg add8:V, reg c22:L, reg d13:*, reg d14:V, reg l4:*, reg c23:L, reg d16:V, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg row1:cls, reg x17:*, reg x18:V, reg p11:p(V +), reg r55:V, reg col1:cls, reg x19:*, reg x20:V, reg p12:p(V +), reg r57:V, reg r58:V, reg ___1:cls, reg r59:V, reg d19:*, reg d20:V, reg t1:cls, reg d21:*, reg d22:V, reg p13:p(V +), reg r61:V, reg r62:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r63:V, reg r64:V, reg n4:*, reg n5:V, reg as_integer:cls, reg r65:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r66:V, reg r67:V, reg n6:*, reg n7:V, reg is_na:cls, reg r68:V, reg c24:L, reg c25:V, reg n8:*, reg n9:V, reg r69:V, reg c27:L, reg c28:V, reg c30:L, reg stop2:cls, reg gettextf:cls, reg r70:V, reg p14:p(V +), reg r72:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg r75:V, reg k1:*, reg k2:V, reg as_integer1:cls, reg r76:V, reg n10:*, reg n11:V, reg r77:V, reg r78:V, reg c31:L, reg c32:V, reg k3:*, reg k4:V, reg r79:V, reg c34:L, reg c35:V, reg c37:L, reg stop3:cls, reg r80:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r82:V, reg r83:V, reg C_DoubleCentre:*, reg C_DoubleCentre1:V, reg x21:*, reg x22:V, reg vargs:dots, reg r84:V, reg add9:*, reg add10:V, reg c38:L, reg n12:*, reg n13:V, reg n14:*, reg n15:V, reg r85:V, reg r86:V, reg matrix1:cls, reg n16:*, reg n17:V, reg r87:V, reg p15:p(V +), reg n18:*, reg n19:V, reg r89:V, reg p16:p(V +), reg r91:V, reg l7:*, reg c39:L, reg r93:R, reg l9:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg cbind:cls, reg i2:*, reg i3:V, reg p17:p(V +), reg i4:*, reg i5:V, reg p18:p(V +), reg r98:V, reg ___2:cls, reg r99:V, reg x23:*, reg x24:V, reg r100:V, reg l10:*, reg c40:L, reg r102:V, reg l12:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i6:*, reg i7:V, reg i8:*, reg i9:V, reg ___3:cls, reg r105:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r106:V, reg r107:V, reg C_DoubleCentre2:*, reg C_DoubleCentre3:V, reg d23:*, reg d24:V, reg r108:V, reg vargs1:dots, reg r109:V, reg l13:*, reg c41:L, reg r111:V, reg l15:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i10:*, reg i11:V, reg i12:*, reg i13:V, reg ___4:cls, reg r114:V, reg eigen:cls, reg Z:*, reg Z1:V, reg p19:p(V +), reg r116:V, reg c42:L, reg r118:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r119:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r120:V, reg r121:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r122:V, reg r123:V, reg e:*, reg e1:V, reg Re:cls, reg r124:V, reg max:cls, reg r125:V, reg matrix2:cls, reg double:cls, reg n20:*, reg n21:V, reg n22:*, reg n23:V, reg r126:V, reg p20:p(V +), reg r128:V, reg p21:p(V +), reg n24:*, reg n25:V, reg p22:p(V +), reg n26:*, reg n27:V, reg p23:p(V +), reg r132:V, reg row2:cls, reg d25:*, reg d26:V, reg p24:p(V +), reg r134:V, reg col2:cls, reg d27:*, reg d28:V, reg p25:p(V +), reg r136:V, reg r137:V, reg d29:*, reg d30:V, reg c43:L, reg d32:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg non_diag:*, reg non_diag1:V, reg __:cls, reg r138:V, reg add_c:*, reg add_c1:V, reg r139:V, reg r140:V, reg l16:*, reg c44:L, reg r142:V, reg l18:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg non_diag2:*, reg non_diag3:V, reg ___5:cls, reg r145:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r146:V, reg r147:V, reg C_DoubleCentre4:*, reg C_DoubleCentre5:V, reg x25:*, reg x26:V, reg vargs2:dots, reg r148:V, reg eigen1:cls, reg x27:*, reg x28:V, reg r150:V, reg r151:V, reg p26:p(V +), reg r153:V, reg e2:*, reg e3:V, reg c45:L, reg e5:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r154:V, reg c46:L, reg dx19:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r155:V, reg dx24:V, reg r156:V, reg k5:*, reg k6:V, reg r157:I, reg __1:cls, reg r158:V, reg e6:*, reg e7:V, reg c47:L, reg e9:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg r159:V, reg c48:L, reg dx28:V, reg dr22:V, reg dc11:L, reg dx29:V, reg dx30:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r160:V, reg r161:V, reg k7:*, reg k8:V, reg r162:I, reg __2:cls, reg r163:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r164:V, reg r165:V, reg ev:*, reg ev1:V, reg r166:V, reg sum:cls, reg r167:V, reg k9:*, reg k10:V, reg k11:*, reg k12:V, reg r168:V, reg c49:L, reg warning2:cls, reg gettextf1:cls, reg k13:*, reg k14:V, reg p27:p(V +), reg k15:*, reg k16:V, reg p28:p(V +), reg r171:V, reg p29:p(V +), reg r173:V, reg evec:*, reg evec1:V, reg c50:L, reg evec3:V, reg dr24:V, reg dc12:L, reg dx34:V, reg dx35:V, reg ev2:*, reg ev3:V, reg r174:V, reg __3:cls, reg r175:V, reg ev4:*, reg ev5:V, reg c51:L, reg ev7:V, reg dr26:V, reg dc13:L, reg dx36:V, reg dx37:V, reg ev8:*, reg ev9:V, reg r176:V, reg __4:cls, reg r177:V, reg evec4:*, reg evec5:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r178:V, reg evec8:V, reg r179:V, reg rep:cls, reg r180:V, reg r181:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r182:V, reg r183:V, reg rn:*, reg rn1:V, reg list:cls, reg r184:V, reg l19:*, reg dimnames__:cls, reg r185:V, reg list_3:*, reg list_4:V, reg c52:L, reg e10:*, reg e11:V, reg c53:L, reg e13:V, reg dr28:V, reg dc14:L, reg dx39:V, reg dx40:V, reg r186:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r187:V, reg r188:V, reg points:*, reg points1:V, reg eig5:*, reg eig6:V, reg c54:L, reg evalus:*, reg evalus1:V, reg evalus2:V, reg x_ret5:*, reg x_ret6:V, reg c55:L, reg x29:*, reg x30:V, reg x31:V, reg add11:*, reg add12:V, reg c56:L, reg add_c2:*, reg add_c3:V, reg add_c4:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r189:V, reg r190:V, reg ev10:*, reg ev11:V, reg sum1:cls, reg r191:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r194:V, reg r195:V, reg r196:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r199:V, reg r200:V, reg r201:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r204:V, reg r205:V, reg r206:V, reg evalus3:*, reg evalus4:V, reg abs:cls, reg r207:V, reg sum2:cls, reg r208:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r211:V, reg r212:V, reg r213:V, reg pmax:cls, reg evalus5:*, reg evalus6:V, reg p30:p(V +), reg r215:V, reg sum3:cls, reg r216:V, reg c57:cls, reg r217:V, reg r218:V, reg list1:cls, reg r219:V, reg points2:*, reg points3:V |
    mkenv;
    st d = d;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(2.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    eig_isMissing = missing.0(eig);
    if eig_isMissing then L1(FALSE) else L1(eig);
  L1(eig_orDefault):
    st eig = eig_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L2(FALSE) else L2(add);
  L2(add_orDefault):
    st add = add_orDefault;
    x_ret_isMissing = missing.0(x_ret);
    if x_ret_isMissing then L3(FALSE) else L3(x_ret);
  L3(x_ret_orDefault):
    st `x.ret` = x_ret_orDefault;
    list__isMissing = missing.0(list_);
    if list__isMissing then L4() else L5(list_);
  L4():
    p = prom<V +>{
      eig1 = ld eig;
      eig2 = force? eig1;
      checkMissing(eig2);
      c = `as.logical`(eig2);
      if c then L0(c) else L2();
    L0(c1):
      c6 = `as.logical`(c1);
      if c6 then L1(c6) else L4();
    L2():
      add1 = ld add;
      add2 = force? add1;
      checkMissing(add2);
      c3 = `as.logical`(add2);
      c4 = `||`(c, c3);
      goto L0(c4);
    L1(c7):
      return c7;
    L4():
      x_ret1 = ld `x.ret`;
      x_ret2 = force? x_ret1;
      checkMissing(x_ret2);
      c9 = `as.logical`(x_ret2);
      c10 = `||`(c6, c9);
      goto L1(c10);
    };
    goto L5(p);
  L5(list__orDefault):
    st `list.` = list__orDefault;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L74() else L75();
  L6(r2):
    c12 = `as.logical`(r2);
    if c12 then L78() else L7();
  L74():
    d1 = ld d;
    check L76() else D0();
  L75():
    r1 = dyn base(<sym d>);
    goto L6(r1);
  D0():
    deopt 2 [d1];
  L7():
    goto L8();
  L8():
    list_1 = ld `list.`;
    check L82() else D4();
  L76():
    d2 = force? d1;
    checkMissing(d2);
    anyNA = ldf anyNA in base;
    r3 = dyn anyNA(d2);
    check L77() else D1();
  L78():
    stop = ldf stop;
    check L79() else D2();
  D1():
    deopt 5 [r3];
  D2():
    deopt 7 [];
  D4():
    deopt 12 [list_1];
  L77():
    goto L6(r3);
  L79():
    r4 = dyn stop("NA values not allowed in 'd'");
    check L80() else D3();
  L82():
    list_2 = force? list_1;
    checkMissing(list_2);
    r6 = `!`(list_2);
    c13 = `as.logical`(r6);
    if c13 then L83() else L9();
  D3():
    deopt 9 [r4];
  L9():
    goto L14();
  L14():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L95() else L96();
  L80():
    goto L8();
  L83():
    eig3 = ld eig;
    check L84() else D5();
  D5():
    deopt 15 [eig3];
  L15(r13):
    c17 = `as.logical`(r13);
    if c17 then L101() else L17();
  L84():
    eig4 = force? eig3;
    checkMissing(eig4);
    c14 = `as.logical`(eig4);
    if c14 then L85() else L10();
  L95():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L97() else L98();
  L96():
    r12 = dyn base1(<lang `<-`(n, attr(d, "Size"))>);
    goto L15(r12);
  L10():
    goto L11();
  L11():
    x_ret3 = ld `x.ret`;
    check L89() else D8();
  L16(r15):
    st n = r15;
    c16 = `==`(r15, NULL);
    goto L15(c16);
  L17():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L122() else L123();
  L22():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L157() else L158();
  L85():
    warning = ldf warning;
    check L86() else D6();
  L97():
    d3 = ld d;
    check L99() else D11();
  L98():
    r14 = dyn base2(<sym d>, "Size");
    goto L16(r14);
  L101():
    add3 = ld add;
    check L102() else D13();
  D6():
    deopt 18 [];
  D8():
    deopt 23 [x_ret3];
  D11():
    deopt 36 [d3];
  D13():
    deopt 43 [add3];
  L23(r35):
    st rn = r35;
    matrix = ldf matrix;
    check L126() else D30();
  L29(r64):
    st n = r64;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L161() else L162();
  L86():
    r7 = dyn warning("eig=TRUE is disregarded when list.=FALSE");
    check L87() else D7();
  L89():
    x_ret4 = force? x_ret3;
    checkMissing(x_ret4);
    c15 = `as.logical`(x_ret4);
    if c15 then L90() else L12();
  L99():
    d4 = force? d3;
    checkMissing(d4);
    attr = ldf attr in base;
    r16 = dyn attr(d4, "Size");
    check L100() else D12();
  L102():
    add4 = force? add3;
    checkMissing(add4);
    c18 = `as.logical`(add4);
    if c18 then L103() else L18();
  L122():
    d9 = ld d;
    check L124() else D28();
  L123():
    r34 = dyn base3(<sym d>, "Labels");
    goto L23(r34);
  L157():
    n4 = ld n;
    check L159() else D51();
  L158():
    r63 = dyn base4(<sym n>);
    goto L29(r63);
  D7():
    deopt 20 [r7];
  D12():
    deopt 40 [r16];
  D28():
    deopt 86 [d9];
  D30():
    deopt 93 [];
  D51():
    deopt 154 [n4];
  L12():
    goto L13(NULL);
  L13(r10):
    goto L14();
  L18():
    goto L19();
  L19():
    as_matrix1 = ldf `as.matrix`;
    check L107() else D16();
  L30(r67):
    c24 = `as.logical`(r67);
    if c24 then L31(c24) else L165();
  L87():
    goto L11();
  L90():
    warning1 = ldf warning;
    check L91() else D9();
  L100():
    goto L16(r16);
  L103():
    as_matrix = ldf `as.matrix`;
    check L104() else D14();
  L124():
    d10 = force? d9;
    checkMissing(d10);
    attr1 = ldf attr in base;
    r36 = dyn attr1(d10, "Labels");
    check L125() else D29();
  L126():
    p6 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    p7 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      return n3;
    };
    r39 = dyn matrix(0.0, p6, p7);
    check L127() else D31();
  L159():
    n5 = force? n4;
    checkMissing(n5);
    as_integer = ldf `as.integer` in base;
    r65 = dyn as_integer(n5);
    check L160() else D52();
  L161():
    n6 = ld n;
    check L163() else D53();
  L162():
    r66 = dyn base5(<sym n>);
    goto L30(r66);
  D9():
    deopt 26 [];
  D14():
    deopt 46 [];
  D16():
    deopt 53 [];
  D29():
    deopt 90 [r36];
  D31():
    deopt 97 [r39];
  D52():
    deopt 157 [r65];
  D53():
    deopt 161 [n6];
  L31(c25):
    c30 = `as.logical`(c25);
    if c30 then L168() else L32();
  L91():
    r9 = dyn warning1("x.ret=TRUE is disregarded when list.=FALSE");
    check L92() else D10();
  L104():
    p1 = prom<V +>{
      d5 = ld d;
      d6 = force? d5;
      checkMissing(d6);
      return d6;
    };
    r18 = dyn as_matrix(p1);
    check L105() else D15();
  L107():
    p2 = prom<V +>{
      d7 = ld d;
      d8 = force? d7;
      checkMissing(d8);
      r20 = `^`(d8, 2.0);
      return r20;
    };
    r22 = dyn as_matrix1(p2);
    check L108() else D17();
  L125():
    goto L23(r36);
  L127():
    st x = r39;
    add5 = ld add;
    check L128() else D32();
  L160():
    goto L29(r65);
  L163():
    n7 = force? n6;
    checkMissing(n7);
    is_na = ldf `is.na` in base;
    r68 = dyn is_na(n7);
    check L164() else D54();
  L165():
    n8 = ld n;
    check L166() else D55();
  D10():
    deopt 28 [r9];
  D15():
    deopt 48 [r18];
  D17():
    deopt 55 [r22];
  D32():
    deopt 99 [add5];
  D54():
    deopt 164 [r68];
  D55():
    deopt 165 [c24, n8];
  L32():
    goto L33();
  L33():
    sym6 = ldf `as.integer`;
    base6 = ldf `as.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L172() else L173();
  L92():
    goto L13(r9);
  L105():
    st d = r18;
    goto L19();
  L108():
    st x = r22;
    l = ld x;
    storage_mode__ = ldf `storage.mode<-`;
    check L109() else D18();
  L128():
    add6 = force? add5;
    checkMissing(add6);
    c20 = `as.logical`(add6);
    if c20 then L129() else L24();
  L164():
    goto L30(r68);
  L166():
    n9 = force? n8;
    checkMissing(n9);
    r69 = `>`(n9, 46340.0);
    c27 = `as.logical`(r69);
    c28 = `||`(c24, c27);
    goto L31(c28);
  L168():
    stop2 = ldf stop;
    check L169() else D56();
  D18():
    deopt 60 ["double", l, "double"];
  D56():
    deopt 171 [];
  L24():
    goto L25();
  L25():
    d11 = ld d;
    check L132() else D34();
  L34(r75):
    st k = r75;
    n10 = ld n;
    check L176() else D60();
  L109():
    r23 = dyn storage_mode__(l, NULL, "double");
    check L110() else D19();
  L129():
    x6 = ld x;
    check L130() else D33();
  L169():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      r70 = dyn gettextf("invalid value of %s", "'n'");
      return r70;
    };
    r72 = dyn stop2[, domain](p14, NA_LGL);
    check L170() else D57();
  L172():
    k1 = ld k;
    check L174() else D58();
  L173():
    r74 = dyn base6(<sym k>);
    goto L34(r74);
  D19():
    deopt 62 ["double", r23];
  D33():
    deopt 101 [x6];
  D34():
    deopt 106 [d11];
  D57():
    deopt 175 [r72];
  D58():
    deopt 180 [k1];
  D60():
    deopt 184 [r75, n10];
  L110():
    st x = r23;
    nrow = ldf nrow;
    check L111() else D20();
  L130():
    x7 = force? x6;
    checkMissing(x7);
    st d0 = x7;
    goto L25();
  L132():
    d12 = force? d11;
    checkMissing(d12);
    r40 = `^`(d12, 2.0);
    l1 = ld x;
    c21 = `is.object`(l1);
    if c21 then L133() else L134(r40, l1);
  L170():
    goto L33();
  L174():
    k2 = force? k1;
    checkMissing(k2);
    as_integer1 = ldf `as.integer` in base;
    r76 = dyn as_integer1(k2);
    check L175() else D59();
  L176():
    n11 = force? n10;
    checkMissing(n11);
    r77 = `-`(n11, 1.0);
    r78 = `>`(r75, r77);
    c31 = `as.logical`(r78);
    if c31 then L35(c31) else L177();
  D20():
    deopt 65 [];
  D59():
    deopt 183 [r76];
  L26(dx1):
    st x = dx1;
    x13 = ld x;
    check L140() else D39();
  L35(c32):
    c37 = `as.logical`(c32);
    if c37 then L180() else L36();
  L111():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r25 = dyn nrow(p3);
    check L112() else D21();
  L133():
    dr = tryDispatchBuiltin.0("[<-", l1, r40);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L135() else L134(r40, dr);
  L134(r42, l3):
    row = ldf row;
    check L136() else D35();
  L175():
    goto L34(r76);
  L177():
    k3 = ld k;
    check L178() else D61();
  D21():
    deopt 67 [r25];
  D35():
    deopt 112 [r42, l3, r40];
  D39():
    deopt 121 [x13];
  D61():
    deopt 189 [c31, k3];
  L36():
    goto L37();
  L37():
    sym7 = ldf `.Call`;
    base7 = ldf `.Call` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L184() else L185();
  L112():
    st n = r25;
    ncol = ldf ncol;
    check L113() else D22();
  L135():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(dx);
  L136():
    p8 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r46 = dyn row(p8);
    check L137() else D36();
  L140():
    x14 = force? x13;
    checkMissing(x14);
    t = ldf t;
    check L141() else D40();
  L178():
    k4 = force? k3;
    checkMissing(k4);
    r79 = `<`(k4, 1.0);
    c34 = `as.logical`(r79);
    c35 = `||`(c31, c34);
    goto L35(c35);
  L180():
    stop3 = ldf stop;
    check L181() else D62();
  D22():
    deopt 69 [r25];
  D36():
    deopt 114 [r42, l3, r40, r46];
  D40():
    deopt 123 [x14];
  D62():
    deopt 195 [];
  L38(r83):
    st x = r83;
    add9 = ld add;
    check L188() else D66();
  L113():
    p4 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r27 = dyn ncol(p4);
    check L114() else D23();
  L137():
    col = ldf col;
    check L138() else D37();
  L141():
    p10 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r52 = dyn t(p10);
    check L142() else D41();
  L181():
    r80 = dyn stop3("'k' must be in {1, 2, ..  n - 1}");
    check L182() else D63();
  L184():
    C_DoubleCentre = ld C_DoubleCentre;
    check L186() else D64();
  L185():
    r82 = dyn base7(<sym C_DoubleCentre>, <sym x>);
    goto L38(r82);
  D23():
    deopt 71 [r25, r27];
  D37():
    deopt 115 [r42, l3, r40, r46];
  D41():
    deopt 125 [x14, r52];
  D63():
    deopt 197 [r80];
  D64():
    deopt 201 [C_DoubleCentre];
  D66():
    deopt 206 [add9];
  L114():
    r28 = `!=`(r25, r27);
    c19 = `as.logical`(r28);
    if c19 then L115() else L20();
  L138():
    p9 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r48 = dyn col(p9);
    check L139() else D38();
  L142():
    r53 = `+`(x14, r52);
    st x = r53;
    add7 = ld add;
    check L143() else D42();
  L182():
    goto L37();
  L186():
    C_DoubleCentre1 = force? C_DoubleCentre;
    checkMissing(C_DoubleCentre1);
    x21 = ld x;
    check L187() else D65();
  L188():
    add10 = force? add9;
    checkMissing(add10);
    c38 = `as.logical`(add10);
    if c38 then L189() else L39();
  D38():
    deopt 117 [r42, l3, r40, r46, r48];
  D42():
    deopt 128 [add7];
  D65():
    deopt 202 [C_DoubleCentre1, x21];
  L20():
    goto L21();
  L21():
    rownames = ldf rownames;
    check L119() else D26();
  L39():
    goto L49();
  L49():
    eigen1 = ldf eigen;
    check L248() else D97();
  L115():
    stop1 = ldf stop;
    check L116() else D24();
  L139():
    r49 = `>`(r46, r48);
    ___ = ldf `[<-` in base;
    r50 = dyn ___(l3, r40, r49);
    goto L26(r50);
  L143():
    add8 = force? add7;
    checkMissing(add8);
    c22 = `as.logical`(add8);
    if c22 then L144() else L27();
  L187():
    x22 = force? x21;
    checkMissing(x22);
    vargs = dots[x22];
    r84 = `.Call`(C_DoubleCentre1, vargs, <missing>);
    goto L38(r84);
  L189():
    n12 = ld n;
    check L190() else D67();
  D24():
    deopt 74 [];
  D26():
    deopt 80 [];
  D67():
    deopt 208 [n12];
  D97():
    deopt 315 [];
  L27():
    goto L22();
  L116():
    r29 = dyn stop1("distances must be result of 'dist' or a square matrix");
    check L117() else D25();
  L119():
    p5 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r32 = dyn rownames(p5);
    check L120() else D27();
  L144():
    d13 = ld d;
    check L145() else D43();
  L190():
    n13 = force? n12;
    checkMissing(n13);
    n14 = ld n;
    check L191() else D68();
  L248():
    p26 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      r150 = `-`(<missing>, x28);
      r151 = `/`(r150, 2.0);
      return r151;
    };
    r153 = dyn eigen1[, symmetric](p26, TRUE);
    check L249() else D98();
  D25():
    deopt 76 [r29];
  D27():
    deopt 82 [r32];
  D43():
    deopt 130 [d13];
  D68():
    deopt 210 [n13, 1, n14];
  D98():
    deopt 319 [r153];
  L117():
    goto L21();
  L120():
    st rn = r32;
    goto L22();
  L145():
    d14 = force? d13;
    checkMissing(d14);
    l4 = ld d0;
    c23 = `is.object`(l4);
    if c23 then L146() else L147(d14, l4);
  L191():
    n15 = force? n14;
    checkMissing(n15);
    r85 = `:`(1, n15);
    st i = r85;
    r86 = `+`(n13, r85);
    st i2 = r86;
    matrix1 = ldf matrix;
    check L192() else D69();
  L249():
    st e = r153;
    e2 = ld e;
    check L250() else D99();
  D69():
    deopt 217 [];
  D99():
    deopt 321 [e2];
  L28(dx3):
    st d0 = dx3;
    d19 = ld d0;
    check L153() else D48();
  L146():
    dr2 = tryDispatchBuiltin.0("[<-", l4, d14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L148() else L147(d14, dr2);
  L147(d16, l6):
    row1 = ldf row;
    check L149() else D44();
  L192():
    p15 = prom<V +>{
      n16 = ld n;
      n17 = force? n16;
      checkMissing(n17);
      r87 = `*`(2, n17);
      return r87;
    };
    p16 = prom<V +>{
      n18 = ld n;
      n19 = force? n18;
      checkMissing(n19);
      r89 = `*`(2, n19);
      return r89;
    };
    r91 = dyn matrix1(0.0, p15, p16);
    check L193() else D70();
  L250():
    e3 = force? e2;
    checkMissing(e3);
    c45 = `is.object`(e3);
    if c45 then L252() else L253(e3);
  D44():
    deopt 134 [d16, l6, d14];
  D48():
    deopt 143 [d19];
  D70():
    deopt 221 [r91];
  L148():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx2);
  L149():
    p11 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r55 = dyn row1(p11);
    check L150() else D45();
  L153():
    d20 = force? d19;
    checkMissing(d20);
    t1 = ldf t;
    check L154() else D49();
  L193():
    st Z = r91;
    l7 = ld Z;
    c39 = `is.object`(l7);
    if c39 then L194() else L195(-1.0, l7);
  L251(dx17):
    c46 = `is.object`(dx17);
    if c46 then L255() else L256(dx17);
  L252():
    dr16 = tryDispatchBuiltin.1("$", e3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L254() else L253(dr16);
  L253(e5):
    r154 = `$`(e5, <sym values>);
    goto L251(r154);
  D45():
    deopt 136 [d16, l6, d14, r55];
  D49():
    deopt 145 [d20];
  L40(dx5):
    st Z = dx5;
    x23 = ld x;
    check L199() else D73();
  L50(dx21):
    st ev = dx21;
    e6 = ld e;
    check L261() else D101();
  L150():
    col1 = ldf col;
    check L151() else D46();
  L154():
    p13 = prom<V +>{
      d21 = ld d0;
      d22 = force? d21;
      checkMissing(d22);
      return d22;
    };
    r61 = dyn t1(p13);
    check L155() else D50();
  L194():
    dr4 = tryDispatchBuiltin.0("[<-", l7, -1.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L196() else L195(-1.0, dr4);
  L195(r93, l9):
    cbind = ldf cbind;
    check L197() else D71();
  L254():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L251(dx16);
  L255():
    dr18 = tryDispatchBuiltin.1("[", dx17);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L257() else L256(dr18);
  L256(dx19):
    sym12 = ldf seq_len;
    base12 = ldf seq_len in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L258() else L259();
  D46():
    deopt 137 [d16, l6, d14, r55];
  D50():
    deopt 147 [d20, r61];
  D71():
    deopt 227 [r93, l9, -1.0];
  D73():
    deopt 233 [x23];
  D101():
    deopt 330 [e6];
  L51(dx24, r156):
    __1 = ldf `[` in base;
    r158 = dyn __1(dx24, r156);
    goto L50(r158);
  L151():
    p12 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r57 = dyn col1(p12);
    check L152() else D47();
  L155():
    r62 = `+`(d20, r61);
    st d = r62;
    goto L22();
  L196():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L40(dx4);
  L197():
    p17 = prom<V +>{
      i2 = ld i2;
      i3 = force? i2;
      checkMissing(i3);
      return i3;
    };
    p18 = prom<V +>{
      i4 = ld i;
      i5 = force? i4;
      checkMissing(i5);
      return i5;
    };
    r98 = dyn cbind(p17, p18);
    check L198() else D72();
  L199():
    x24 = force? x23;
    checkMissing(x24);
    r100 = `-`(<missing>, x24);
    l10 = ld Z;
    c40 = `is.object`(l10);
    if c40 then L200() else L201(r100, l10);
  L257():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L50(dx20);
  L258():
    k5 = ld k;
    check L260() else D100();
  L259():
    r155 = dyn base12(<sym k>);
    goto L51(dx19, r155);
  L261():
    e7 = force? e6;
    checkMissing(e7);
    c47 = `is.object`(e7);
    if c47 then L263() else L264(e7);
  D47():
    deopt 139 [d16, l6, d14, r55, r57];
  D72():
    deopt 230 [r93, l9, -1.0, r98];
  D100():
    deopt 325 [dx19, k5];
  L41(dx7):
    st Z = dx7;
    sym8 = ldf `.Call`;
    base8 = ldf `.Call` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L205() else L206();
  L152():
    r58 = `>`(r55, r57);
    ___1 = ldf `[<-` in base;
    r59 = dyn ___1(l6, d14, r58);
    goto L28(r59);
  L198():
    ___2 = ldf `[<-` in base;
    r99 = dyn ___2(l9, -1.0, r98);
    goto L40(r99);
  L200():
    dr6 = tryDispatchBuiltin.0("[<-", l10, r100);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L202() else L201(r100, dr6);
  L201(r102, l12):
    i6 = ld i;
    check L203() else D74();
  L260():
    k6 = force? k5;
    checkMissing(k6);
    r157 = seq_len(k6);
    goto L51(dx19, r157);
  L262(dx26):
    c48 = `is.object`(dx26);
    if c48 then L266() else L267(dx26);
  L263():
    dr20 = tryDispatchBuiltin.1("$", e7);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L265() else L264(dr20);
  L264(e9):
    r159 = `$`(e9, <sym vectors>);
    goto L262(r159);
  D74():
    deopt 237 [r102, l12, r100, i6];
  L42(r107):
    l13 = ld Z;
    c41 = `is.object`(l13);
    if c41 then L209() else L210(r107, l13);
  L52(dx30):
    st evec = dx30;
    sym14 = ldf sum;
    base14 = ldf sum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L272() else L273();
  L202():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L41(dx6);
  L203():
    i7 = force? i6;
    i8 = ld i2;
    check L204() else D75();
  L205():
    C_DoubleCentre2 = ld C_DoubleCentre;
    check L207() else D76();
  L206():
    r106 = dyn base8(<sym C_DoubleCentre>, <lang `*`(2.0, d)>);
    goto L42(r106);
  L265():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L262(dx25);
  L266():
    dr22 = tryDispatchBuiltin.1("[", dx26);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L268() else L267(dr22);
  L267(dx28):
    sym13 = ldf seq_len;
    base13 = ldf seq_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L269() else L270();
  D75():
    deopt 238 [r102, l12, r100, i7, i8];
  D76():
    deopt 243 [C_DoubleCentre2];
  L43(dx9):
    st Z = dx9;
    eigen = ldf eigen;
    check L214() else D80();
  L53(r161):
    __2 = ldf `[` in base;
    r163 = dyn __2(dx26, <missing>, r161, FALSE);
    goto L52(r163);
  L54(r165):
    st k1 = r165;
    k9 = ld k1;
    check L276() else D105();
  L204():
    i9 = force? i8;
    ___3 = ldf `[<-` in base;
    r105 = dyn ___3(l12, r100, i7, i9);
    goto L41(r105);
  L207():
    C_DoubleCentre3 = force? C_DoubleCentre2;
    checkMissing(C_DoubleCentre3);
    d23 = ld d;
    check L208() else D77();
  L209():
    dr8 = tryDispatchBuiltin.0("[<-", l13, r107);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L211() else L210(r107, dr8);
  L210(r111, l15):
    i10 = ld i2;
    check L212() else D78();
  L268():
    dx29 = getTryDispatchBuiltinValue(dr22);
    goto L52(dx29);
  L269():
    k7 = ld k;
    check L271() else D102();
  L270():
    r160 = dyn base13(<sym k>);
    goto L53(r160);
  L272():
    ev = ld ev;
    check L274() else D103();
  L273():
    r164 = dyn base14(<lang `>`(ev, 0.0)>);
    goto L54(r164);
  D77():
    deopt 245 [C_DoubleCentre3, 2.0, d23];
  D78():
    deopt 250 [r111, l15, r107, i10];
  D80():
    deopt 256 [];
  D102():
    deopt 335 [dx28, k7];
  D103():
    deopt 345 [ev];
  D105():
    deopt 352 [k9];
  L208():
    d24 = force? d23;
    checkMissing(d24);
    r108 = `*`(2.0, d24);
    vargs1 = dots[r108];
    r109 = `.Call`(C_DoubleCentre3, vargs1, <missing>);
    goto L42(r109);
  L211():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L43(dx8);
  L212():
    i11 = force? i10;
    i12 = ld i2;
    check L213() else D79();
  L214():
    p19 = prom<V +>{
      Z = ld Z;
      Z1 = force? Z;
      checkMissing(Z1);
      return Z1;
    };
    r116 = dyn eigen[, symmetric, `only.values`](p19, FALSE, TRUE);
    check L215() else D81();
  L271():
    k8 = force? k7;
    checkMissing(k8);
    r162 = seq_len(k8);
    goto L53(r162);
  L274():
    ev1 = force? ev;
    checkMissing(ev1);
    r166 = `>`(ev1, 0.0);
    sum = ldf sum in base;
    r167 = dyn sum(r166);
    check L275() else D104();
  L276():
    k10 = force? k9;
    checkMissing(k10);
    k11 = ld k;
    check L277() else D106();
  D79():
    deopt 251 [r111, l15, r107, i11, i12];
  D81():
    deopt 262 [r116];
  D104():
    deopt 350 [r167];
  D106():
    deopt 353 [k10, k11];
  L213():
    i13 = force? i12;
    ___4 = ldf `[<-` in base;
    r114 = dyn ___4(l15, r107, i11, i13);
    goto L43(r114);
  L215():
    c42 = `is.object`(r116);
    if c42 then L217() else L218(r116);
  L275():
    goto L54(r167);
  L277():
    k12 = force? k11;
    checkMissing(k12);
    r168 = `<`(k10, k12);
    c49 = `as.logical`(r168);
    if c49 then L278() else L55();
  L55():
    goto L58();
  L58():
    evec4 = ld evec;
    check L292() else D113();
  L216(dx11):
    st e = dx11;
    sym9 = ldf max;
    base9 = ldf max in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L220() else L221();
  L217():
    dr10 = tryDispatchBuiltin.1("$", r116);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L219() else L218(dr10);
  L218(r118):
    r119 = `$`(r118, <sym values>);
    goto L216(r119);
  L278():
    warning2 = ldf warning;
    check L279() else D107();
  D107():
    deopt 357 [];
  D113():
    deopt 384 [evec4];
  L44(r121):
    st `add.c` = r121;
    matrix2 = ldf matrix;
    check L227() else D85();
  L219():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L216(dx10);
  L220():
    sym10 = ldf Re;
    base10 = ldf Re in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L222() else L223();
  L221():
    r120 = dyn base9(<lang Re(e)>);
    goto L44(r120);
  L279():
    p29 = prom<V +>{
      gettextf1 = ldf gettextf;
      p27 = prom<V +>{
        k13 = ld k1;
        k14 = force? k13;
        checkMissing(k14);
        return k14;
      };
      p28 = prom<V +>{
        k15 = ld k;
        k16 = force? k15;
        checkMissing(k16);
        return k16;
      };
      r171 = dyn gettextf1("only %d of the first %d eigenvalues are > 0", p27, p28);
      return r171;
    };
    r173 = dyn warning2[, domain](p29, NA_LGL);
    check L280() else D108();
  L292():
    evec5 = force? evec4;
    checkMissing(evec5);
    sym15 = ldf rep;
    base15 = ldf rep in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L293() else L294();
  D85():
    deopt 277 [];
  D108():
    deopt 361 [r173];
  L45(r123):
    max = ldf max in base;
    r125 = dyn max(r123);
    check L226() else D84();
  L59(evec8, r179):
    r181 = `*`(evec8, r179);
    st points = r181;
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L295() else L296();
  L222():
    e = ld e;
    check L224() else D82();
  L223():
    r122 = dyn base10(<sym e>);
    goto L45(r122);
  L227():
    p21 = prom<V +>{
      double = ldf double;
      p20 = prom<V +>{
        n20 = ld n;
        n21 = force? n20;
        checkMissing(n21);
        n22 = ld n;
        n23 = force? n22;
        checkMissing(n23);
        r126 = `*`(n21, n23);
        return r126;
      };
      r128 = dyn double(p20);
      return r128;
    };
    p22 = prom<V +>{
      n24 = ld n;
      n25 = force? n24;
      checkMissing(n25);
      return n25;
    };
    p23 = prom<V +>{
      n26 = ld n;
      n27 = force? n26;
      checkMissing(n27);
      return n27;
    };
    r132 = dyn matrix2(p21, p22, p23);
    check L228() else D86();
  L280():
    evec = ld evec;
    check L281() else D109();
  L293():
    rep = ldf rep in base;
    r180 = dyn rep(<lang sqrt(ev)>, <sym n>);
    goto L59(evec5, r180);
  L294():
    r178 = dyn base15[, each](<lang sqrt(ev)>, <sym n>);
    goto L59(evec5, r178);
  D82():
    deopt 269 [e];
  D84():
    deopt 274 [r125];
  D86():
    deopt 281 [r132];
  D109():
    deopt 362 [evec];
  L60(r183):
    l19 = ld points;
    dimnames__ = ldf `dimnames<-`;
    check L299() else D116();
  L224():
    e1 = force? e;
    checkMissing(e1);
    Re = ldf Re in base;
    r124 = dyn Re(e1);
    check L225() else D83();
  L226():
    goto L44(r125);
  L228():
    st x = r132;
    row2 = ldf row;
    check L229() else D87();
  L281():
    evec1 = force? evec;
    checkMissing(evec1);
    c50 = `is.object`(evec1);
    if c50 then L282() else L283(evec1);
  L295():
    rn = ld rn;
    check L297() else D114();
  L296():
    r182 = dyn base16(<sym rn>, NULL);
    goto L60(r182);
  D83():
    deopt 272 [r124];
  D87():
    deopt 284 [];
  D114():
    deopt 392 [rn];
  D116():
    deopt 398 [r183, l19, r183];
  L56(dx35):
    st evec = dx35;
    ev4 = ld ev;
    check L286() else D111();
  L225():
    goto L45(r124);
  L229():
    p24 = prom<V +>{
      d25 = ld d;
      d26 = force? d25;
      checkMissing(d26);
      return d26;
    };
    r134 = dyn row2(p24);
    check L230() else D88();
  L282():
    dr24 = tryDispatchBuiltin.1("[", evec1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L284() else L283(dr24);
  L283(evec3):
    ev2 = ld ev;
    check L285() else D110();
  L297():
    rn1 = force? rn;
    checkMissing(rn1);
    list = ldf list in base;
    r184 = dyn list(rn1, NULL);
    check L298() else D115();
  L299():
    r185 = dyn dimnames__(l19, NULL, r183);
    check L300() else D117();
  D88():
    deopt 286 [r134];
  D110():
    deopt 365 [evec3, ev2];
  D111():
    deopt 374 [ev4];
  D115():
    deopt 396 [r184];
  D117():
    deopt 400 [r183, r185];
  L230():
    col2 = ldf col;
    check L231() else D89();
  L284():
    dx34 = getTryDispatchBuiltinValue(dr24);
    goto L56(dx34);
  L285():
    ev3 = force? ev2;
    checkMissing(ev3);
    r174 = `>`(ev3, 0.0);
    __3 = ldf `[` in base;
    r175 = dyn __3(evec1, <missing>, r174, FALSE);
    goto L56(r175);
  L286():
    ev5 = force? ev4;
    checkMissing(ev5);
    c51 = `is.object`(ev5);
    if c51 then L287() else L288(ev5);
  L298():
    goto L60(r184);
  L300():
    st points = r185;
    list_3 = ld `list.`;
    check L301() else D118();
  D89():
    deopt 287 [r134];
  D118():
    deopt 402 [list_3];
  L57(dx37):
    st ev = dx37;
    goto L58();
  L231():
    p25 = prom<V +>{
      d27 = ld d;
      d28 = force? d27;
      checkMissing(d28);
      return d28;
    };
    r136 = dyn col2(p25);
    check L232() else D90();
  L287():
    dr26 = tryDispatchBuiltin.1("[", ev5);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L289() else L288(dr26);
  L288(ev7):
    ev8 = ld ev;
    check L290() else D112();
  L301():
    list_4 = force? list_3;
    checkMissing(list_4);
    c52 = `as.logical`(list_4);
    if c52 then L302() else L61();
  D90():
    deopt 289 [r134, r136];
  D112():
    deopt 376 [ev7, ev8];
  L61():
    points2 = ld points;
    check L344() else D137();
  L232():
    r137 = `!=`(r134, r136);
    st `non.diag` = r137;
    d29 = ld d;
    check L233() else D91();
  L289():
    dx36 = getTryDispatchBuiltinValue(dr26);
    goto L57(dx36);
  L290():
    ev9 = force? ev8;
    checkMissing(ev9);
    r176 = `>`(ev9, 0.0);
    __4 = ldf `[` in base;
    r177 = dyn __4(ev7, r176);
    goto L57(r177);
  L302():
    e10 = ld e;
    check L303() else D119();
  D91():
    deopt 292 [d29];
  D119():
    deopt 404 [e10];
  D137():
    deopt 466 [points2];
  L233():
    d30 = force? d29;
    checkMissing(d30);
    c43 = `is.object`(d30);
    if c43 then L234() else L235(d30);
  L303():
    e11 = force? e10;
    checkMissing(e11);
    c53 = `is.object`(e11);
    if c53 then L305() else L306(e11);
  L344():
    points3 = force? points2;
    checkMissing(points3);
    popenv;
    return points3;
  L46(dx13):
    add_c = ld `add.c`;
    check L238() else D93();
  L234():
    dr12 = tryDispatchBuiltin.1("[", d30);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L236() else L235(dr12);
  L235(d32):
    non_diag = ld `non.diag`;
    check L237() else D92();
  L304(dx40):
    st evalus = dx40;
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L308() else L309();
  L305():
    dr28 = tryDispatchBuiltin.1("$", e11);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L307() else L306(dr28);
  L306(e13):
    r186 = `$`(e13, <sym values>);
    goto L304(r186);
  D92():
    deopt 294 [d32, non_diag];
  D93():
    deopt 296 [dx13, add_c];
  L62(r188):
    popenv;
    return r188;
  L236():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L46(dx12);
  L237():
    non_diag1 = force? non_diag;
    __ = ldf `[` in base;
    r138 = dyn __(d32, non_diag1);
    goto L46(r138);
  L238():
    add_c1 = force? add_c;
    checkMissing(add_c1);
    r139 = `+`(dx13, add_c1);
    r140 = `^`(r139, 2.0);
    l16 = ld x;
    c44 = `is.object`(l16);
    if c44 then L239() else L240(r140, l16);
  L307():
    dx39 = getTryDispatchBuiltinValue(dr28);
    goto L304(dx39);
  L308():
    points = ld points;
    check L310() else D120();
  L309():
    r187 = dyn base17[points, eig, x, ac, GOF](<sym points>, <lang if(eig, evalus)>, <lang if(x.ret, x)>, <lang if(add, add.c, 0.0)>, <lang `/`(sum(ev), c(sum(abs(evalus)), sum(pmax(evalus, 0.0))))>);
    goto L62(r187);
  D120():
    deopt 410 [points];
  L47(dx15):
    st x = dx15;
    sym11 = ldf `.Call`;
    base11 = ldf `.Call` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L243() else L244();
  L239():
    dr14 = tryDispatchBuiltin.0("[<-", l16, r140);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L241() else L240(r140, dr14);
  L240(r142, l18):
    non_diag2 = ld `non.diag`;
    check L242() else D94();
  L310():
    points1 = force? points;
    checkMissing(points1);
    eig5 = ld eig;
    check L311() else D121();
  D94():
    deopt 302 [r142, l18, r140, non_diag2];
  D121():
    deopt 413 [eig5];
  L48(r147):
    st x = r147;
    goto L49();
  L241():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L47(dx14);
  L242():
    non_diag3 = force? non_diag2;
    ___5 = ldf `[<-` in base;
    r145 = dyn ___5(l18, r140, non_diag3);
    goto L47(r145);
  L243():
    C_DoubleCentre4 = ld C_DoubleCentre;
    check L245() else D95();
  L244():
    r146 = dyn base11(<sym C_DoubleCentre>, <sym x>);
    goto L48(r146);
  L311():
    eig6 = force? eig5;
    checkMissing(eig6);
    c54 = `as.logical`(eig6);
    if c54 then L312() else L63();
  D95():
    deopt 307 [C_DoubleCentre4];
  L63():
    goto L64(NULL);
  L64(evalus2):
    x_ret5 = ld `x.ret`;
    check L315() else D123();
  L245():
    C_DoubleCentre5 = force? C_DoubleCentre4;
    checkMissing(C_DoubleCentre5);
    x25 = ld x;
    check L246() else D96();
  L312():
    evalus = ld evalus;
    check L313() else D122();
  D96():
    deopt 308 [C_DoubleCentre5, x25];
  D122():
    deopt 415 [evalus];
  D123():
    deopt 420 [x_ret5];
  L246():
    x26 = force? x25;
    checkMissing(x26);
    vargs2 = dots[x26];
    r148 = `.Call`(C_DoubleCentre5, vargs2, <missing>);
    goto L48(r148);
  L313():
    evalus1 = force? evalus;
    checkMissing(evalus1);
    goto L64(evalus1);
  L315():
    x_ret6 = force? x_ret5;
    checkMissing(x_ret6);
    c55 = `as.logical`(x_ret6);
    if c55 then L316() else L65();
  L65():
    goto L66(NULL);
  L66(x31):
    add11 = ld add;
    check L319() else D125();
  L316():
    x29 = ld x;
    check L317() else D124();
  D124():
    deopt 422 [x29];
  D125():
    deopt 427 [add11];
  L317():
    x30 = force? x29;
    checkMissing(x30);
    goto L66(x30);
  L319():
    add12 = force? add11;
    checkMissing(add12);
    c56 = `as.logical`(add12);
    if c56 then L320() else L67();
  L67():
    goto L68(0.0);
  L68(add_c4):
    sym18 = ldf sum;
    base18 = ldf sum in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L323() else L324();
  L320():
    add_c2 = ld `add.c`;
    check L321() else D126();
  D126():
    deopt 429 [add_c2];
  L69(r190):
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L327() else L328();
  L321():
    add_c3 = force? add_c2;
    checkMissing(add_c3);
    goto L68(add_c3);
  L323():
    ev10 = ld ev;
    check L325() else D127();
  L324():
    r189 = dyn base18(<sym ev>);
    goto L69(r189);
  D127():
    deopt 436 [ev10];
  L70(r195, r196):
    r218 = `/`(r195, r196);
    list1 = ldf list in base;
    r219 = dyn list1(points1, evalus2, x31, add_c4, r218);
    check L342() else D136();
  L325():
    ev11 = force? ev10;
    checkMissing(ev11);
    sum1 = ldf sum in base;
    r191 = dyn sum1(ev11);
    check L326() else D128();
  L327():
    sym20 = ldf sum;
    base20 = ldf sum in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L329() else L330();
  L328():
    r194 = dyn base19(<lang sum(abs(evalus))>, <lang sum(pmax(evalus, 0.0))>);
    goto L70(r190, r194);
  D128():
    deopt 439 [r191];
  D136():
    deopt 465 [r219];
  L71(r200, r201):
    sym22 = ldf sum;
    base22 = ldf sum in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L336() else L337();
  L326():
    goto L69(r191);
  L329():
    sym21 = ldf abs;
    base21 = ldf abs in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L331() else L332();
  L330():
    r199 = dyn base20(<lang abs(evalus)>);
    goto L71(r190, r199);
  L342():
    goto L62(r219);
  L72(r205, r206):
    sum2 = ldf sum in base;
    r208 = dyn sum2(r206);
    check L335() else D131();
  L73(r212, r213):
    c57 = ldf c in base;
    r217 = dyn c57(r201, r213);
    check L341() else D135();
  L331():
    evalus3 = ld evalus;
    check L333() else D129();
  L332():
    r204 = dyn base21(<sym evalus>);
    goto L72(r190, r204);
  L336():
    pmax = ldf pmax;
    check L338() else D132();
  L337():
    r211 = dyn base22(<lang pmax(evalus, 0.0)>);
    goto L73(r200, r211);
  D129():
    deopt 445 [r190, evalus3];
  D131():
    deopt 450 [r205, r208];
  D132():
    deopt 454 [r200];
  D135():
    deopt 461 [r212, r217];
  L333():
    evalus4 = force? evalus3;
    checkMissing(evalus4);
    abs = ldf abs in base;
    r207 = dyn abs(evalus4);
    check L334() else D130();
  L335():
    goto L71(r205, r208);
  L338():
    p30 = prom<V +>{
      evalus5 = ld evalus;
      evalus6 = force? evalus5;
      checkMissing(evalus6);
      return evalus6;
    };
    r215 = dyn pmax(p30, 0.0);
    check L339() else D133();
  L341():
    goto L70(r212, r217);
  D130():
    deopt 448 [r190, r207];
  D133():
    deopt 457 [r200, r215];
  L334():
    goto L72(r190, r207);
  L339():
    sum3 = ldf sum in base;
    r216 = dyn sum3(r215);
    check L340() else D134();
  D134():
    deopt 459 [r200, r216];
  L340():
    goto L73(r200, r216);
  }
}