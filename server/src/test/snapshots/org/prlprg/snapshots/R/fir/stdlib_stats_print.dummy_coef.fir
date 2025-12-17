fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner615087134;
    st `print.dummy_coef` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner615087134(x, `...`, title) {
  (reg x:*, reg ddd:dots, reg title:*) -+> V { var x:*, var `...`:dots?, var title:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg length:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x5:*, reg x6:V, reg attr:cls, reg r8:V, reg isM:*, reg isM1:V, reg c:L, reg vapply:cls, reg x7:*, reg x8:V, reg p:p(V +), reg NROW:*, reg NROW1:V, reg p1:p(V +), reg r11:V, reg r12:V, reg lengths:cls, reg x9:*, reg x10:V, reg p2:p(V +), reg r14:V, reg isM2:*, reg isM3:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg nr_x:*, reg nr_x1:V, reg r17:V, reg sum:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg nr_x2:*, reg nr_x3:V, reg max:cls, reg r21:V, reg r22:V, reg addcol:*, reg addcol1:V, reg isM4:*, reg isM5:V, reg c2:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg addcol6:V, reg r24:V, reg vapply1:cls, reg x11:*, reg x12:V, reg p3:p(V +), reg NCOL:*, reg NCOL1:V, reg p4:p(V +), reg r27:V, reg max1:cls, reg r28:V, reg addcol7:V, reg r29:V, reg r30:V, reg matrix:cls, reg ansnrow:*, reg ansnrow1:V, reg p5:p(V +), reg nm:*, reg nm1:V, reg p6:p(V +), reg r33:V, reg character:cls, reg ansnrow2:*, reg ansnrow3:V, reg p7:p(V +), reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg n:*, reg n1:V, reg r38:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x13:V, reg as_matrix:cls, reg x14:*, reg x15:V, reg c4:L, reg x17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg j:*, reg j1:V, reg __:cls, reg r39:V, reg p8:p(V +), reg r41:V, reg nrow:cls, reg this:*, reg this1:V, reg p9:p(V +), reg r43:V, reg ncol:cls, reg this2:*, reg this3:V, reg p10:p(V +), reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg i7:I, reg r47:V, reg this4:*, reg this5:V, reg dimnames:cls, reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg i10:I, reg r50:V, reg ____:cls, reg dn:*, reg dn1:V, reg c5:L, reg dn3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r51:V, reg p11:p(V +), reg character1:cls, reg nr1:*, reg nr2:V, reg p12:p(V +), reg r54:V, reg p13:p(V +), reg r56:V, reg ____1:cls, reg dn4:*, reg dn5:V, reg c6:L, reg dn7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r57:V, reg p14:p(V +), reg character2:cls, reg nc1:*, reg nc2:V, reg p15:p(V +), reg r60:V, reg p16:p(V +), reg r62:V, reg list:cls, reg r63:V, reg l1:*, reg dimnames__:cls, reg r64:V, reg nc3:*, reg nc4:V, reg r65:V, reg c7:L, reg line:*, reg line1:V, reg r66:V, reg line2:*, reg line3:V, reg nr3:*, reg nr4:V, reg r67:V, reg r68:V, reg colnames:cls, reg this6:*, reg this7:V, reg p17:p(V +), reg r70:V, reg l2:*, reg c8:L, reg i14:I, reg r72:V, reg l4:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i16:I, reg dx7:V, reg lin0:*, reg lin1:V, reg r75:V, reg addcol8:*, reg addcol9:V, reg nc5:*, reg nc6:V, reg r76:V, reg r77:V, reg ___:cls, reg r78:V, reg format:cls, reg this8:*, reg this9:V, reg p18:p(V +), reg ddd1:dots?, reg r80:V, reg l5:*, reg c9:L, reg i18:I, reg r82:V, reg l7:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i20:I, reg dx9:V, reg lin2:*, reg lin3:V, reg line4:*, reg line5:V, reg r85:V, reg addcol10:*, reg addcol11:V, reg nc7:*, reg nc8:V, reg r86:V, reg r87:V, reg ___1:cls, reg r88:V, reg paste0:cls, reg terms:*, reg terms1:V, reg c10:L, reg terms3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg j2:*, reg j3:V, reg __3:cls, reg r89:V, reg p19:p(V +), reg r91:V, reg l8:*, reg c11:L, reg i22:I, reg r93:V, reg l10:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i24:I, reg r95:V, reg dx13:V, reg lin4:*, reg lin5:V, reg r96:V, reg ___2:cls, reg r97:V, reg i25:I, reg line6:*, reg line7:V, reg r99:V, reg line8:*, reg line9:V, reg nr5:*, reg nr6:V, reg r100:V, reg format1:cls, reg this10:*, reg this11:V, reg p20:p(V +), reg ddd2:dots?, reg r102:V, reg l11:*, reg c12:L, reg i27:I, reg r104:V, reg l13:*, reg dr14:V, reg dc7:L, reg dx14:V, reg i29:I, reg dx15:V, reg lin6:*, reg lin7:V, reg line10:*, reg line11:V, reg r107:V, reg addcol12:*, reg addcol13:V, reg r108:V, reg ___3:cls, reg r109:V, reg paste1:cls, reg terms4:*, reg terms5:V, reg c13:L, reg terms7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg j4:*, reg j5:V, reg __4:cls, reg r110:V, reg p21:p(V +), reg r112:V, reg l14:*, reg c14:L, reg i31:I, reg r114:V, reg l16:*, reg dr18:V, reg dc9:L, reg dx18:V, reg i33:I, reg r116:V, reg dx19:V, reg lin8:*, reg lin9:V, reg ___4:cls, reg r117:V, reg addcol14:*, reg addcol15:V, reg r118:V, reg c15:L, reg rownames:cls, reg this12:*, reg this13:V, reg p22:p(V +), reg r120:V, reg l17:*, reg c16:L, reg i37:I, reg r122:V, reg l19:*, reg dr20:V, reg dc10:L, reg dx20:V, reg i39:I, reg r124:V, reg dx21:V, reg lin10:*, reg lin11:V, reg line12:*, reg line13:V, reg r125:V, reg addcol16:*, reg addcol17:V, reg ___5:cls, reg r126:V, reg i40:I, reg sym9:cls, reg base9:cls, reg guard9:L, reg r128:V, reg r129:V, reg nr_x4:*, reg nr_x5:V, reg max2:cls, reg r130:V, reg matrix1:cls, reg n2:*, reg n3:V, reg r131:V, reg p23:p(V +), reg nm2:*, reg nm3:V, reg p24:p(V +), reg r134:V, reg character3:cls, reg n4:*, reg n5:V, reg r135:V, reg p25:p(V +), reg r137:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r138:V, reg r139:V, reg n6:*, reg n7:V, reg r140:I, reg s1:V, reg l20:I, reg i42:I, reg i43:I, reg i44:I, reg c17:L, reg x18:V, reg x19:*, reg x20:V, reg c18:L, reg i48:I, reg x22:V, reg dr22:V, reg dc11:L, reg dx22:V, reg i50:I, reg dx23:V, reg j6:*, reg j7:V, reg __5:cls, reg r141:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r142:V, reg i53:I, reg r143:V, reg this14:*, reg this15:V, reg length1:cls, reg r144:V, reg n8:*, reg n9:V, reg r145:V, reg c19:L, reg line14:*, reg line15:V, reg r146:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r147:V, reg i58:I, reg r148:V, reg this16:*, reg this17:V, reg names1:cls, reg r149:V, reg l21:*, reg c20:L, reg i60:I, reg r151:V, reg l23:*, reg dr24:V, reg dc12:L, reg dx24:V, reg i62:I, reg dx25:V, reg line16:*, reg line17:V, reg r154:V, reg n10:*, reg n11:V, reg r155:V, reg ___6:cls, reg r156:V, reg format2:cls, reg this18:*, reg this19:V, reg p26:p(V +), reg ddd3:dots?, reg r158:V, reg l24:*, reg c21:L, reg i64:I, reg r160:V, reg l26:*, reg dr26:V, reg dc13:L, reg dx26:V, reg i66:I, reg dx27:V, reg line18:*, reg line19:V, reg n12:*, reg n13:V, reg r163:V, reg ___7:cls, reg r164:V, reg paste2:cls, reg terms8:*, reg terms9:V, reg c22:L, reg terms11:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg j8:*, reg j9:V, reg __6:cls, reg r165:V, reg p27:p(V +), reg r167:V, reg l27:*, reg c23:L, reg i68:I, reg r169:V, reg l29:*, reg dr30:V, reg dc15:L, reg dx30:V, reg i70:I, reg r171:V, reg dx31:V, reg line20:*, reg line21:V, reg r172:V, reg ___8:cls, reg r173:V, reg i71:I, reg line22:*, reg line23:V, reg r175:V, reg format3:cls, reg this20:*, reg this21:V, reg p28:p(V +), reg ddd4:dots?, reg r177:V, reg l30:*, reg c24:L, reg i73:I, reg r179:V, reg l32:*, reg dr32:V, reg dc16:L, reg dx32:V, reg i75:I, reg dx33:V, reg line24:*, reg line25:V, reg n14:*, reg n15:V, reg r182:V, reg ___9:cls, reg r183:V, reg paste3:cls, reg terms12:*, reg terms13:V, reg c25:L, reg terms15:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg j10:*, reg j11:V, reg __7:cls, reg r184:V, reg p29:p(V +), reg r186:V, reg l33:*, reg c26:L, reg i77:I, reg r188:V, reg l35:*, reg dr36:V, reg dc18:L, reg dx36:V, reg i79:I, reg r190:V, reg dx37:V, reg line26:*, reg line27:V, reg ___10:cls, reg r191:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r192:V, reg r193:V, reg rn:*, reg rn1:V, reg character4:cls, reg nm4:*, reg nm5:V, reg p30:p(V +), reg r195:V, reg list1:cls, reg r196:V, reg l36:*, reg dimnames__1:cls, reg r197:V, reg cat:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r198:V, reg r199:V, reg missing:cls, reg r200:V, reg c27:L, reg title1:*, reg title2:V, reg p31:p(V +), reg r202:V, reg print:cls, reg ans:*, reg ans1:V, reg c28:L, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg line28:*, reg line29:V, reg r203:V, reg __8:cls, reg r204:V, reg p32:p(V +), reg r206:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r207:V, reg r208:V, reg x23:*, reg x24:V, reg invisible:cls, reg r209:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    st title = title;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L0(r1):
    st terms = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L43():
    x1 = ld x;
    check L45() else D0();
  L44():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    st n = r4;
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L45():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r2 = dyn names(x2);
    check L46() else D1();
  L47():
    x3 = ld x;
    check L49() else D2();
  L48():
    r3 = dyn base1(<sym x>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x3];
  L2(r7):
    st isM = r7;
    isM = ld isM;
    check L55() else D6();
  L46():
    goto L0(r2);
  L49():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r5 = dyn length(x4);
    check L50() else D3();
  L51():
    x5 = ld x;
    check L53() else D4();
  L52():
    r6 = dyn base2(<sym x>, "matrix");
    goto L2(r6);
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [x5];
  D6():
    deopt 22 [isM];
  L50():
    goto L1(r5);
  L53():
    x6 = force? x5;
    checkMissing(x6);
    attr = ldf attr in base;
    r8 = dyn attr(x6, "matrix");
    check L54() else D5();
  L55():
    isM1 = force? isM;
    checkMissing(isM1);
    c = `as.logical`(isM1);
    if c then L56() else L3();
  D5():
    deopt 20 [r8];
  L3():
    lengths = ldf lengths;
    check L60() else D9();
  L4(r12):
    st `nr.x` = r12;
    st line = 0;
    isM2 = ld isM;
    check L62() else D11();
  L54():
    goto L2(r8);
  L56():
    vapply = ldf vapply;
    check L57() else D7();
  D7():
    deopt 25 [];
  D9():
    deopt 31 [];
  D11():
    deopt 38 [isM2];
  L57():
    p = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p1 = prom<V +>{
      NROW = ld NROW;
      NROW1 = force? NROW;
      checkMissing(NROW1);
      return NROW1;
    };
    r11 = dyn vapply(p, p1, 1);
    check L58() else D8();
  L60():
    p2 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r14 = dyn lengths(p2);
    check L61() else D10();
  L62():
    isM3 = force? isM2;
    checkMissing(isM3);
    c1 = `as.logical`(isM3);
    if c1 then L63() else L5();
  D8():
    deopt 29 [r11];
  D10():
    deopt 33 [r14];
  L5():
    sym9 = ldf max;
    base9 = ldf max in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L166() else L167();
  L26():
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L227() else L228();
  L58():
    goto L4(r11);
  L61():
    goto L4(r14);
  L63():
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  L6(r16):
    st ansnrow = r16;
    sym4 = ldf max;
    base4 = ldf max in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L68() else L69();
  L27(r129):
    st nm = r129;
    matrix1 = ldf matrix;
    check L170() else D78();
  L41(r193):
    l36 = ld ans;
    dimnames__1 = ldf `dimnames<-`;
    check L233() else D112();
  L64():
    nr_x = ld `nr.x`;
    check L66() else D12();
  L65():
    r15 = dyn base3(<lang `+`(1, nr.x)>);
    goto L6(r15);
  L166():
    nr_x4 = ld `nr.x`;
    check L168() else D76();
  L167():
    r128 = dyn base9(<sym nr.x>);
    goto L27(r128);
  L227():
    rn = ld rn;
    check L229() else D108();
  L228():
    r192 = dyn base13(<sym rn>, <lang character(nm)>);
    goto L41(r192);
  D12():
    deopt 43 [1, nr_x];
  D76():
    deopt 251 [nr_x4];
  D78():
    deopt 257 [];
  D108():
    deopt 368 [rn];
  D112():
    deopt 377 [r193, l36, r193];
  L7(r20):
    r22 = `-`(r20, 1);
    st addcol = r22;
    addcol = ld addcol;
    check L72() else D16();
  L66():
    nr_x1 = force? nr_x;
    checkMissing(nr_x1);
    r17 = `+`(1, nr_x1);
    sum = ldf sum in base;
    r18 = dyn sum(r17);
    check L67() else D13();
  L68():
    nr_x2 = ld `nr.x`;
    check L70() else D14();
  L69():
    r19 = dyn base4(<sym nr.x>);
    goto L7(r19);
  L168():
    nr_x5 = force? nr_x4;
    checkMissing(nr_x5);
    max2 = ldf max in base;
    r130 = dyn max2(nr_x5);
    check L169() else D77();
  L170():
    p23 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r131 = `*`(2, n3);
      return r131;
    };
    p24 = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    r134 = dyn matrix1("", p23, p24);
    check L171() else D79();
  L229():
    rn1 = force? rn;
    checkMissing(rn1);
    character4 = ldf character;
    check L230() else D109();
  L233():
    r197 = dyn dimnames__1(l36, NULL, r193);
    check L234() else D113();
  D13():
    deopt 47 [r18];
  D14():
    deopt 51 [nr_x2];
  D16():
    deopt 58 [addcol];
  D77():
    deopt 254 [r130];
  D79():
    deopt 261 [r134];
  D109():
    deopt 371 [];
  D113():
    deopt 379 [r193, r197];
  L67():
    goto L6(r18);
  L70():
    nr_x3 = force? nr_x2;
    checkMissing(nr_x3);
    max = ldf max in base;
    r21 = dyn max(nr_x3);
    check L71() else D15();
  L72():
    addcol1 = force? addcol;
    checkMissing(addcol1);
    isM4 = ld isM;
    check L73() else D17();
  L169():
    goto L27(r130);
  L171():
    st ans = r134;
    character3 = ldf character;
    check L172() else D80();
  L230():
    p30 = prom<V +>{
      nm4 = ld nm;
      nm5 = force? nm4;
      checkMissing(nm5);
      return nm5;
    };
    r195 = dyn character4(p30);
    check L231() else D110();
  L234():
    st ans = r197;
    cat = ldf cat;
    check L235() else D114();
  D15():
    deopt 54 [r21];
  D17():
    deopt 59 [addcol1, isM4];
  D80():
    deopt 264 [];
  D110():
    deopt 373 [r195];
  D114():
    deopt 382 [];
  L71():
    goto L7(r21);
  L73():
    isM5 = force? isM4;
    checkMissing(isM5);
    c2 = `as.logical`(isM5);
    if c2 then L74() else L8();
  L172():
    p25 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      r135 = `*`(2, n5);
      return r135;
    };
    r137 = dyn character3(p25);
    check L173() else D81();
  L231():
    list1 = ldf list in base;
    r196 = dyn list1(rn1, r195);
    check L232() else D111();
  L235():
    p31 = prom<V +>{
      sym14 = ldf missing;
      base14 = ldf missing in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r199):
      c27 = `as.logical`(r199);
      if c27 then L4() else L1();
    L2():
      missing = ldf missing in base;
      r200 = dyn missing(<sym title>);
      goto L0(r200);
    L3():
      r198 = dyn base14(<sym title>);
      goto L0(r198);
    L1():
      title1 = ld title;
      title2 = force? title1;
      checkMissing(title2);
      return title2;
    L4():
      return "Full coefficients are";
    };
    r202 = dyn cat(p31, "\n");
    check L236() else D115();
  D81():
    deopt 266 [r137];
  D111():
    deopt 375 [r196];
  D115():
    deopt 385 [r202];
  L8():
    goto L10(addcol1, 1);
  L10(addcol7, r29):
    r30 = `+`(addcol7, r29);
    st nm = r30;
    matrix = ldf matrix;
    check L81() else D21();
  L74():
    sym5 = ldf max;
    base5 = ldf max in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L173():
    st rn = r137;
    sym10 = ldf seq_len;
    base10 = ldf seq_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L174() else L175();
  L232():
    goto L41(r196);
  L236():
    print = ldf print;
    check L237() else D116();
  D21():
    deopt 76 [];
  D116():
    deopt 387 [];
  L9(addcol6, r24):
    goto L10(addcol6, r24);
  L28(r139):
    s1 = toForSeq(r139);
    l20 = length(s1);
    i42 = 0;
    goto L29(i42);
  L75():
    vapply1 = ldf vapply;
    check L77() else D18();
  L76():
    r23 = dyn base5(<lang vapply(x, NCOL, 1)>);
    goto L9(addcol1, r23);
  L81():
    p5 = prom<V +>{
      ansnrow = ld ansnrow;
      ansnrow1 = force? ansnrow;
      checkMissing(ansnrow1);
      return ansnrow1;
    };
    p6 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r33 = dyn matrix("", p5, p6);
    check L82() else D22();
  L174():
    n6 = ld n;
    check L176() else D82();
  L175():
    r138 = dyn base10(<sym n>);
    goto L28(r138);
  L237():
    p32 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      c28 = `is.object`(ans1);
      if c28 then L1() else L2();
    L0(dx39):
      return dx39;
    L1():
      dr38 = tryDispatchBuiltin.1("[", ans1);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2();
    L2():
      line28 = ld line;
      line29 = force? line28;
      checkMissing(line29);
      r203 = `:`(1, line29);
      __8 = ldf `[` in base;
      r204 = dyn __8(ans1, r203, <missing>, FALSE);
      goto L0(r204);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx38);
    };
    r206 = dyn print[, quote, right](p32, FALSE, TRUE);
    check L238() else D117();
  D18():
    deopt 64 [addcol1];
  D22():
    deopt 80 [r33];
  D82():
    deopt 269 [n6];
  D117():
    deopt 393 [r206];
  L29(i43):
    i44 = `+`.1(i43, 1);
    c17 = `<`.1(l20, i44);
    if c17 then L177() else L40();
  L77():
    p3 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p4 = prom<V +>{
      NCOL = ld NCOL;
      NCOL1 = force? NCOL;
      checkMissing(NCOL1);
      return NCOL1;
    };
    r27 = dyn vapply1(p3, p4, 1);
    check L78() else D19();
  L82():
    st ans = r33;
    character = ldf character;
    check L83() else D23();
  L176():
    n7 = force? n6;
    checkMissing(n7);
    r140 = seq_len(n7);
    goto L28(r140);
  L238():
    sym15 = ldf invisible;
    base15 = ldf invisible in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L239() else L240();
  D19():
    deopt 68 [addcol1, r27];
  D23():
    deopt 83 [];
  L40():
    x18 = `[[`(s1, i44, NULL, TRUE);
    st j = x18;
    x19 = ld x;
    check L178() else D83();
  L42(r208):
    popenv;
    return r208;
  L78():
    max1 = ldf max in base;
    r28 = dyn max1(r27);
    check L79() else D20();
  L83():
    p7 = prom<V +>{
      ansnrow2 = ld ansnrow;
      ansnrow3 = force? ansnrow2;
      checkMissing(ansnrow3);
      return ansnrow3;
    };
    r35 = dyn character(p7);
    check L84() else D24();
  L177():
    goto L26();
  L239():
    x23 = ld x;
    check L241() else D118();
  L240():
    r207 = dyn base15(<sym x>);
    goto L42(r207);
  D20():
    deopt 70 [addcol1, r28];
  D24():
    deopt 85 [r35];
  D83():
    deopt 272 [i44, x19];
  D118():
    deopt 396 [x23];
  L79():
    goto L9(addcol1, r28);
  L84():
    st rn = r35;
    sym6 = ldf seq_len;
    base6 = ldf seq_len in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L178():
    x20 = force? x19;
    checkMissing(x20);
    c18 = `is.object`(x20);
    if c18 then L179() else L180(i44, x20);
  L241():
    x24 = force? x23;
    checkMissing(x24);
    invisible = ldf invisible in base;
    r209 = dyn invisible(x24);
    check L242() else D119();
  D119():
    deopt 399 [r209];
  L11(r37):
    s = toForSeq(r37);
    l = length(s);
    i = 0;
    goto L12(i);
  L30(i50, dx23):
    st this = dx23;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L183() else L184();
  L85():
    n = ld n;
    check L87() else D25();
  L86():
    r36 = dyn base6(<sym n>);
    goto L11(r36);
  L179():
    dr22 = tryDispatchBuiltin.1("[[", x20);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L181() else L180(i44, dr22);
  L180(i48, x22):
    j6 = ld j;
    check L182() else D84();
  L242():
    goto L42(r209);
  D25():
    deopt 88 [n];
  D84():
    deopt 274 [i48, x22, j6];
  L12(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L88() else L25();
  L31(i53, r143):
    st n1 = r143;
    n8 = ld n1;
    check L187() else D87();
  L87():
    n1 = force? n;
    checkMissing(n1);
    r38 = seq_len(n1);
    goto L11(r38);
  L181():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L30(i44, dx22);
  L182():
    j7 = force? j6;
    __5 = ldf `[[` in base;
    r141 = dyn __5(x22, j7);
    goto L30(i48, r141);
  L183():
    this14 = ld this;
    check L185() else D85();
  L184():
    r142 = dyn base11(<sym this>);
    goto L31(i50, r142);
  D85():
    deopt 280 [i50, this14];
  D87():
    deopt 285 [i53, n8];
  L25():
    x13 = `[[`(s, i2, NULL, TRUE);
    st j = x13;
    as_matrix = ldf `as.matrix`;
    check L89() else D26();
  L88():
    goto L26();
  L185():
    this15 = force? this14;
    checkMissing(this15);
    length1 = ldf length in base;
    r144 = dyn length1(this15);
    check L186() else D86();
  L187():
    n9 = force? n8;
    checkMissing(n9);
    r145 = `>`(n9, 1.0);
    c19 = `as.logical`(r145);
    if c19 then L188() else L32();
  D26():
    deopt 92 [i2];
  D86():
    deopt 283 [i50, r144];
  L32():
    line22 = ld line;
    check L213() else D100();
  L37(i71):
    goto L29(i71);
  L89():
    p8 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      c4 = `is.object`(x15);
      if c4 then L1() else L2(x15);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x15);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x17):
      j = ld j;
      j1 = force? j;
      __ = ldf `[[` in base;
      r39 = dyn __(x17, j1);
      goto L0(r39);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r41 = dyn as_matrix(p8);
    check L90() else D27();
  L186():
    goto L31(i50, r144);
  L188():
    line14 = ld line;
    check L189() else D88();
  D27():
    deopt 94 [i2, r41];
  D88():
    deopt 289 [i53, line14];
  D100():
    deopt 335 [i53, line22];
  L90():
    st this = r41;
    nrow = ldf nrow;
    check L91() else D28();
  L189():
    line15 = force? line14;
    checkMissing(line15);
    r146 = `+`(line15, 2);
    st line = r146;
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L190() else L191();
  L213():
    line23 = force? line22;
    checkMissing(line23);
    r175 = `+`(line23, 1);
    st line = r175;
    format3 = ldf format;
    check L214() else D101();
  D28():
    deopt 97 [i2];
  D101():
    deopt 341 [i53];
  L33(i58, r148):
    l21 = ld ans;
    c20 = `is.object`(l21);
    if c20 then L194() else L195(i58, r148, l21);
  L91():
    p9 = prom<V +>{
      this = ld this;
      this1 = force? this;
      checkMissing(this1);
      return this1;
    };
    r43 = dyn nrow(p9);
    check L92() else D29();
  L190():
    this16 = ld this;
    check L192() else D89();
  L191():
    r147 = dyn base12(<sym this>);
    goto L33(i53, r147);
  L214():
    p28 = prom<V +>{
      this20 = ld this;
      this21 = force? this20;
      checkMissing(this21);
      return this21;
    };
    ddd4 = ld `...`;
    r177 = dyn format3[, `...`](p28, ddd4);
    check L215() else D102();
  D29():
    deopt 99 [i2, r43];
  D89():
    deopt 296 [i53, this16];
  D102():
    deopt 344 [i53, r177];
  L34(i62, dx25):
    st ans = dx25;
    format2 = ldf format;
    check L199() else D93();
  L92():
    st nr1 = r43;
    ncol = ldf ncol;
    check L93() else D30();
  L192():
    this17 = force? this16;
    checkMissing(this17);
    names1 = ldf names in base;
    r149 = dyn names1(this17);
    check L193() else D90();
  L194():
    dr24 = tryDispatchBuiltin.0("[<-", l21, r148);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L196() else L195(i58, r148, dr24);
  L195(i60, r151, l23):
    line16 = ld line;
    check L197() else D91();
  L215():
    l30 = ld ans;
    c24 = `is.object`(l30);
    if c24 then L216() else L217(i53, r177, l30);
  D30():
    deopt 102 [i2];
  D90():
    deopt 299 [i53, r149];
  D91():
    deopt 301 [i60, r151, l23, r148, line16];
  D93():
    deopt 311 [i62];
  L38(i75, dx33):
    st ans = dx33;
    paste3 = ldf paste0;
    check L221() else D105();
  L93():
    p10 = prom<V +>{
      this2 = ld this;
      this3 = force? this2;
      checkMissing(this3);
      return this3;
    };
    r45 = dyn ncol(p10);
    check L94() else D31();
  L193():
    goto L33(i53, r149);
  L196():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L34(i58, dx24);
  L197():
    line17 = force? line16;
    checkMissing(line17);
    r154 = `-`(line17, 1);
    n10 = ld n1;
    check L198() else D92();
  L199():
    p26 = prom<V +>{
      this18 = ld this;
      this19 = force? this18;
      checkMissing(this19);
      return this19;
    };
    ddd3 = ld `...`;
    r158 = dyn format2[, `...`](p26, ddd3);
    check L200() else D94();
  L216():
    dr32 = tryDispatchBuiltin.0("[<-", l30, r177);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L218() else L217(i53, r177, dr32);
  L217(i73, r179, l32):
    line24 = ld line;
    check L219() else D103();
  D31():
    deopt 104 [i2, r45];
  D92():
    deopt 305 [i60, r151, l23, r148, r154, 1, n10];
  D94():
    deopt 314 [i62, r158];
  D103():
    deopt 346 [i73, r179, l32, r177, line24];
  D105():
    deopt 354 [i75];
  L94():
    st nc1 = r45;
    sym7 = ldf dimnames;
    base7 = ldf dimnames in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L95() else L96();
  L198():
    n11 = force? n10;
    checkMissing(n11);
    r155 = `:`(1, n11);
    ___6 = ldf `[<-` in base;
    r156 = dyn ___6(l23, r148, r154, r155);
    goto L34(i60, r156);
  L200():
    l24 = ld ans;
    c21 = `is.object`(l24);
    if c21 then L201() else L202(i62, r158, l24);
  L218():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L38(i53, dx32);
  L219():
    line25 = force? line24;
    n14 = ld n1;
    check L220() else D104();
  L221():
    p29 = prom<V +>{
      terms12 = ld terms;
      terms13 = force? terms12;
      checkMissing(terms13);
      c25 = `is.object`(terms13);
      if c25 then L1() else L2(terms13);
    L0(dx35):
      return dx35;
    L1():
      dr34 = tryDispatchBuiltin.1("[", terms13);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(terms15):
      j10 = ld j;
      j11 = force? j10;
      __7 = ldf `[` in base;
      r184 = dyn __7(terms15, j11);
      goto L0(r184);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    r186 = dyn paste3(p29, ":   ");
    check L222() else D106();
  D104():
    deopt 348 [i73, r179, l32, r177, line25, 1, n14];
  D106():
    deopt 357 [i75, r186];
  L13(i7, r47):
    st dn = r47;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L99() else L100();
  L35(i66, dx27):
    st ans = dx27;
    paste2 = ldf paste0;
    check L206() else D97();
  L95():
    this4 = ld this;
    check L97() else D32();
  L96():
    r46 = dyn base7(<sym this>);
    goto L13(i2, r46);
  L201():
    dr26 = tryDispatchBuiltin.0("[<-", l24, r158);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L203() else L202(i62, r158, dr26);
  L202(i64, r160, l26):
    line18 = ld line;
    check L204() else D95();
  L220():
    n15 = force? n14;
    checkMissing(n15);
    r182 = `:`(1, n15);
    ___9 = ldf `[<-` in base;
    r183 = dyn ___9(l32, r177, line25, r182);
    goto L38(i73, r183);
  L222():
    l33 = ld rn;
    c26 = `is.object`(l33);
    if c26 then L223() else L224(i75, r186, l33);
  D32():
    deopt 108 [i2, this4];
  D95():
    deopt 316 [i64, r160, l26, r158, line18];
  D97():
    deopt 324 [i66];
  L14(i10, r50):
    l1 = ld this;
    dimnames__ = ldf `dimnames<-`;
    check L106() else D39();
  L39(i79, r190, dx37):
    st rn = dx37;
    goto L37(i79);
  L97():
    this5 = force? this4;
    checkMissing(this5);
    dimnames = ldf dimnames in base;
    r48 = dyn dimnames(this5);
    check L98() else D33();
  L99():
    ____ = ldf `%||%`;
    check L101() else D34();
  L100():
    r49 = dyn base8(<lang `%||%`(`[[`(dn, 1.0), character(nr1))>, <lang `%||%`(`[[`(dn, 2.0), character(nc1))>);
    goto L14(i7, r49);
  L203():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L35(i62, dx26);
  L204():
    line19 = force? line18;
    n12 = ld n1;
    check L205() else D96();
  L206():
    p27 = prom<V +>{
      terms8 = ld terms;
      terms9 = force? terms8;
      checkMissing(terms9);
      c22 = `is.object`(terms9);
      if c22 then L1() else L2(terms9);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("[", terms9);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(terms11):
      j8 = ld j;
      j9 = force? j8;
      __6 = ldf `[` in base;
      r165 = dyn __6(terms11, j9);
      goto L0(r165);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r167 = dyn paste2(p27, ":   ");
    check L207() else D98();
  L223():
    dr36 = tryDispatchBuiltin.0("[<-", l33, r186);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L225() else L224(i75, r186, dr36);
  L224(i77, r188, l35):
    line26 = ld line;
    check L226() else D107();
  D33():
    deopt 111 [i2, r48];
  D34():
    deopt 116 [i7];
  D39():
    deopt 128 [i10, r50, l1, r50];
  D96():
    deopt 318 [i64, r160, l26, r158, line19, 1, n12];
  D98():
    deopt 327 [i66, r167];
  D107():
    deopt 359 [i77, r188, l35, r186, line26];
  L98():
    goto L13(i2, r48);
  L101():
    p11 = prom<V +>{
      dn = ld dn;
      dn1 = force? dn;
      checkMissing(dn1);
      c5 = `is.object`(dn1);
      if c5 then L1() else L2(dn1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", dn1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(dn3):
      __1 = ldf `[[` in base;
      r51 = dyn __1(dn3, 1.0);
      goto L0(r51);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p13 = prom<V +>{
      character1 = ldf character;
      p12 = prom<V +>{
        nr1 = ld nr1;
        nr2 = force? nr1;
        checkMissing(nr2);
        return nr2;
      };
      r54 = dyn character1(p12);
      return r54;
    };
    r56 = dyn ____(p11, p13);
    check L102() else D35();
  L106():
    r64 = dyn dimnames__(l1, NULL, r50);
    check L107() else D40();
  L205():
    n13 = force? n12;
    checkMissing(n13);
    r163 = `:`(1, n13);
    ___7 = ldf `[<-` in base;
    r164 = dyn ___7(l26, r158, line19, r163);
    goto L35(i64, r164);
  L207():
    l27 = ld rn;
    c23 = `is.object`(l27);
    if c23 then L208() else L209(i66, r167, l27);
  L225():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L39(i75, r186, dx36);
  L226():
    line27 = force? line26;
    ___10 = ldf `[<-` in base;
    r191 = dyn ___10(l35, r186, line27);
    goto L39(i77, r188, r191);
  D35():
    deopt 119 [i7, r56];
  D40():
    deopt 130 [i10, r50, r64];
  L36(i70, r171, dx31):
    st rn = dx31;
    goto L37(i70);
  L102():
    ____1 = ldf `%||%`;
    check L103() else D36();
  L107():
    st this = r64;
    nc3 = ld nc1;
    check L108() else D41();
  L208():
    dr30 = tryDispatchBuiltin.0("[<-", l27, r167);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L210() else L209(i66, r167, dr30);
  L209(i68, r169, l29):
    line20 = ld line;
    check L211() else D99();
  D36():
    deopt 121 [i7];
  D41():
    deopt 132 [i10, nc3];
  D99():
    deopt 329 [i68, r169, l29, r167, line20];
  L103():
    p14 = prom<V +>{
      dn4 = ld dn;
      dn5 = force? dn4;
      checkMissing(dn5);
      c6 = `is.object`(dn5);
      if c6 then L1() else L2(dn5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", dn5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(dn7):
      __2 = ldf `[[` in base;
      r57 = dyn __2(dn7, 2.0);
      goto L0(r57);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p16 = prom<V +>{
      character2 = ldf character;
      p15 = prom<V +>{
        nc1 = ld nc1;
        nc2 = force? nc1;
        checkMissing(nc2);
        return nc2;
      };
      r60 = dyn character2(p15);
      return r60;
    };
    r62 = dyn ____1(p14, p16);
    check L104() else D37();
  L108():
    nc4 = force? nc3;
    checkMissing(nc4);
    r65 = `>`(nc4, 1);
    c7 = `as.logical`(r65);
    if c7 then L109() else L15();
  L210():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L36(i66, r167, dx30);
  L211():
    line21 = force? line20;
    checkMissing(line21);
    r172 = `-`(line21, 1);
    ___8 = ldf `[<-` in base;
    r173 = dyn ___8(l29, r167, r172);
    goto L36(i68, r169, r173);
  D37():
    deopt 124 [i7, r62];
  L15():
    line6 = ld line;
    check L137() else D59();
  L19(i25):
    addcol14 = ld addcol;
    check L154() else D70();
  L104():
    list = ldf list in base;
    r63 = dyn list(r56, r62);
    check L105() else D38();
  L109():
    line = ld line;
    check L110() else D42();
  D38():
    deopt 126 [i7, r63];
  D42():
    deopt 136 [i10, line];
  D59():
    deopt 193 [i10, line6];
  D70():
    deopt 228 [i25, addcol14];
  L105():
    goto L14(i7, r63);
  L110():
    line1 = force? line;
    checkMissing(line1);
    r66 = `+`(line1, 2);
    st lin0 = r66;
    line2 = ld line;
    check L111() else D43();
  L137():
    line7 = force? line6;
    checkMissing(line7);
    r99 = `+`(line7, 1);
    st lin0 = r99;
    line8 = ld line;
    check L138() else D60();
  L154():
    addcol15 = force? addcol14;
    checkMissing(addcol15);
    r118 = `>`(addcol15, 0.0);
    c15 = `as.logical`(r118);
    if c15 then L155() else L22();
  D43():
    deopt 141 [i10, line2];
  D60():
    deopt 198 [i10, line8];
  L22():
    goto L24(i25);
  L24(i40):
    goto L12(i40);
  L111():
    line3 = force? line2;
    checkMissing(line3);
    nr3 = ld nr1;
    check L112() else D44();
  L138():
    line9 = force? line8;
    checkMissing(line9);
    nr5 = ld nr1;
    check L139() else D61();
  L155():
    rownames = ldf rownames;
    check L156() else D71();
  D44():
    deopt 142 [i10, line3, nr3];
  D61():
    deopt 199 [i10, line9, nr5];
  D71():
    deopt 233 [i25];
  L112():
    nr4 = force? nr3;
    checkMissing(nr4);
    r67 = `+`(line3, nr4);
    r68 = `+`(r67, 1);
    st line = r68;
    colnames = ldf colnames;
    check L113() else D45();
  L139():
    nr6 = force? nr5;
    checkMissing(nr6);
    r100 = `+`(line9, nr6);
    st line = r100;
    format1 = ldf format;
    check L140() else D62();
  L156():
    p22 = prom<V +>{
      this12 = ld this;
      this13 = force? this12;
      checkMissing(this13);
      return this13;
    };
    r120 = dyn rownames(p22);
    check L157() else D72();
  D45():
    deopt 149 [i10];
  D62():
    deopt 204 [i10];
  D72():
    deopt 235 [i25, r120];
  L113():
    p17 = prom<V +>{
      this6 = ld this;
      this7 = force? this6;
      checkMissing(this7);
      return this7;
    };
    r70 = dyn colnames(p17);
    check L114() else D46();
  L140():
    p20 = prom<V +>{
      this10 = ld this;
      this11 = force? this10;
      checkMissing(this11);
      return this11;
    };
    ddd2 = ld `...`;
    r102 = dyn format1[, `...`](p20, ddd2);
    check L141() else D63();
  L157():
    l17 = ld ans;
    c16 = `is.object`(l17);
    if c16 then L158() else L159(i25, r120, l17);
  D46():
    deopt 151 [i10, r70];
  D63():
    deopt 207 [i10, r102];
  L23(i39, r124, dx21):
    st ans = dx21;
    goto L24(i39);
  L114():
    l2 = ld ans;
    c8 = `is.object`(l2);
    if c8 then L115() else L116(i10, r70, l2);
  L141():
    l11 = ld ans;
    c12 = `is.object`(l11);
    if c12 then L142() else L143(i10, r102, l11);
  L158():
    dr20 = tryDispatchBuiltin.0("[<-", l17, r120);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L160() else L159(i25, r120, dr20);
  L159(i37, r122, l19):
    lin10 = ld lin0;
    check L161() else D73();
  D73():
    deopt 237 [i37, r122, l19, r120, lin10];
  L16(i16, dx7):
    st ans = dx7;
    format = ldf format;
    check L121() else D50();
  L20(i29, dx15):
    st ans = dx15;
    paste1 = ldf paste0;
    check L148() else D67();
  L115():
    dr6 = tryDispatchBuiltin.0("[<-", l2, r70);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L117() else L116(i10, r70, dr6);
  L116(i14, r72, l4):
    lin0 = ld lin0;
    check L118() else D47();
  L142():
    dr14 = tryDispatchBuiltin.0("[<-", l11, r102);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L144() else L143(i10, r102, dr14);
  L143(i27, r104, l13):
    lin6 = ld lin0;
    check L145() else D64();
  L160():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L23(i25, r120, dx20);
  L161():
    lin11 = force? lin10;
    checkMissing(lin11);
    line12 = ld line;
    check L162() else D74();
  D47():
    deopt 153 [i14, r72, l4, r70, lin0];
  D50():
    deopt 165 [i16];
  D64():
    deopt 209 [i27, r104, l13, r102, lin6];
  D67():
    deopt 219 [i29];
  D74():
    deopt 238 [i37, r122, l19, r120, lin11, line12];
  L117():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(i10, dx6);
  L118():
    lin1 = force? lin0;
    checkMissing(lin1);
    r75 = `-`(lin1, 1);
    addcol8 = ld addcol;
    check L119() else D48();
  L121():
    p18 = prom<V +>{
      this8 = ld this;
      this9 = force? this8;
      checkMissing(this9);
      return this9;
    };
    ddd1 = ld `...`;
    r80 = dyn format[, `...`](p18, ddd1);
    check L122() else D51();
  L144():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L20(i10, dx14);
  L145():
    lin7 = force? lin6;
    checkMissing(lin7);
    line10 = ld line;
    check L146() else D65();
  L148():
    p21 = prom<V +>{
      terms4 = ld terms;
      terms5 = force? terms4;
      checkMissing(terms5);
      c13 = `is.object`(terms5);
      if c13 then L1() else L2(terms5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", terms5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(terms7):
      j4 = ld j;
      j5 = force? j4;
      __4 = ldf `[` in base;
      r110 = dyn __4(terms7, j5);
      goto L0(r110);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r112 = dyn paste1(p21, ":   ");
    check L149() else D68();
  L162():
    line13 = force? line12;
    checkMissing(line13);
    r125 = `:`(lin11, line13);
    addcol16 = ld addcol;
    check L163() else D75();
  D48():
    deopt 156 [i14, r72, l4, r70, r75, addcol8];
  D51():
    deopt 168 [i16, r80];
  D65():
    deopt 210 [i27, r104, l13, r102, lin7, line10];
  D68():
    deopt 222 [i29, r112];
  D75():
    deopt 240 [i37, r122, l19, r120, r125, addcol16];
  L119():
    addcol9 = force? addcol8;
    checkMissing(addcol9);
    nc5 = ld nc1;
    check L120() else D49();
  L122():
    l5 = ld ans;
    c9 = `is.object`(l5);
    if c9 then L123() else L124(i16, r80, l5);
  L146():
    line11 = force? line10;
    checkMissing(line11);
    r107 = `:`(lin7, line11);
    addcol12 = ld addcol;
    check L147() else D66();
  L149():
    l14 = ld rn;
    c14 = `is.object`(l14);
    if c14 then L150() else L151(i29, r112, l14);
  L163():
    addcol17 = force? addcol16;
    ___5 = ldf `[<-` in base;
    r126 = dyn ___5(l19, r120, r125, addcol17);
    goto L23(i37, r122, r126);
  D49():
    deopt 158 [i14, r72, l4, r70, r75, addcol9, 1, nc5];
  D66():
    deopt 212 [i27, r104, l13, r102, r107, addcol12];
  L17(i20, dx9):
    st ans = dx9;
    paste0 = ldf paste0;
    check L130() else D56();
  L21(i33, r116, dx19):
    st rn = dx19;
    goto L19(i33);
  L120():
    nc6 = force? nc5;
    checkMissing(nc6);
    r76 = `:`(1, nc6);
    r77 = `+`(addcol9, r76);
    ___ = ldf `[<-` in base;
    r78 = dyn ___(l4, r70, r75, r77);
    goto L16(i14, r78);
  L123():
    dr8 = tryDispatchBuiltin.0("[<-", l5, r80);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L125() else L124(i16, r80, dr8);
  L124(i18, r82, l7):
    lin2 = ld lin0;
    check L126() else D52();
  L147():
    addcol13 = force? addcol12;
    checkMissing(addcol13);
    r108 = `+`(addcol13, 1);
    ___3 = ldf `[<-` in base;
    r109 = dyn ___3(l13, r102, r107, r108);
    goto L20(i27, r109);
  L150():
    dr18 = tryDispatchBuiltin.0("[<-", l14, r112);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L152() else L151(i29, r112, dr18);
  L151(i31, r114, l16):
    lin8 = ld lin0;
    check L153() else D69();
  D52():
    deopt 170 [i18, r82, l7, r80, lin2];
  D56():
    deopt 182 [i20];
  D69():
    deopt 224 [i31, r114, l16, r112, lin8];
  L125():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L17(i16, dx8);
  L126():
    lin3 = force? lin2;
    checkMissing(lin3);
    line4 = ld line;
    check L127() else D53();
  L130():
    p19 = prom<V +>{
      terms = ld terms;
      terms1 = force? terms;
      checkMissing(terms1);
      c10 = `is.object`(terms1);
      if c10 then L1() else L2(terms1);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", terms1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(terms3):
      j2 = ld j;
      j3 = force? j2;
      __3 = ldf `[` in base;
      r89 = dyn __3(terms3, j3);
      goto L0(r89);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r91 = dyn paste0(p19, ":   ");
    check L131() else D57();
  L152():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L21(i29, r112, dx18);
  L153():
    lin9 = force? lin8;
    ___4 = ldf `[<-` in base;
    r117 = dyn ___4(l16, r112, lin9);
    goto L21(i31, r114, r117);
  D53():
    deopt 171 [i18, r82, l7, r80, lin3, line4];
  D57():
    deopt 185 [i20, r91];
  L127():
    line5 = force? line4;
    checkMissing(line5);
    r85 = `:`(lin3, line5);
    addcol10 = ld addcol;
    check L128() else D54();
  L131():
    l8 = ld rn;
    c11 = `is.object`(l8);
    if c11 then L132() else L133(i20, r91, l8);
  D54():
    deopt 173 [i18, r82, l7, r80, r85, addcol10];
  L18(i24, r95, dx13):
    st rn = dx13;
    goto L19(i24);
  L128():
    addcol11 = force? addcol10;
    checkMissing(addcol11);
    nc7 = ld nc1;
    check L129() else D55();
  L132():
    dr12 = tryDispatchBuiltin.0("[<-", l8, r91);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L134() else L133(i20, r91, dr12);
  L133(i22, r93, l10):
    lin4 = ld lin0;
    check L135() else D58();
  D55():
    deopt 175 [i18, r82, l7, r80, r85, addcol11, 1, nc7];
  D58():
    deopt 187 [i22, r93, l10, r91, lin4];
  L129():
    nc8 = force? nc7;
    checkMissing(nc8);
    r86 = `:`(1, nc8);
    r87 = `+`(addcol11, r86);
    ___1 = ldf `[<-` in base;
    r88 = dyn ___1(l7, r80, r85, r87);
    goto L17(i18, r88);
  L134():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L18(i20, r91, dx12);
  L135():
    lin5 = force? lin4;
    checkMissing(lin5);
    r96 = `-`(lin5, 1);
    ___2 = ldf `[<-` in base;
    r97 = dyn ___2(l10, r91, r96);
    goto L18(i22, r93, r97);
  }
}