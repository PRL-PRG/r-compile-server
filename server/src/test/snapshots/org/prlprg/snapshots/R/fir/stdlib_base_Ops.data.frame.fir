fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3995978451;
    st `Ops.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3995978451(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg e2_isMissing:L, reg e2_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nargs:cls, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg _Method:*, reg _Method1:V, reg c:L, reg _Method3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg nzchar:cls, reg r7:V, reg unary:*, reg unary1:V, reg r8:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c6:L, reg r10:V, reg _Method4:*, reg _Method5:V, reg c7:L, reg c9:L, reg _Method7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c11:L, reg dx3:V, reg __1:cls, reg r11:V, reg nzchar1:cls, reg r12:V, reg c12:L, reg c13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg list:cls, reg r15:V, reg get:cls, reg _Generic:*, reg _Generic1:V, reg p:p(V +), reg parent_frame:cls, reg r17:V, reg p1:p(V +), reg r19:V, reg unary2:*, reg unary3:V, reg c15:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg quote:cls, reg r22:V, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg quote1:cls, reg r25:V, reg lclass:*, reg lclass1:V, reg c16:L, reg c18:V, reg rclass:*, reg rclass1:V, reg c19:L, reg c20:V, reg c22:L, reg _row_names_info:cls, reg e3:*, reg e4:V, reg p2:p(V +), reg r27:V, reg _row_names_info1:cls, reg e5:*, reg e6:V, reg p3:p(V +), reg r29:V, reg r30:V, reg c23:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg e7:*, reg e8:V, reg attr:cls, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg e9:*, reg e10:V, reg names:cls, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg e11:*, reg e12:V, reg dim:cls, reg r42:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg r47:V, reg e13:*, reg e14:V, reg dim1:cls, reg r48:V, reg r49:V, reg any:cls, reg r50:V, reg c24:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg _Generic2:*, reg _Generic3:V, reg p4:p(V +), reg r52:V, reg p5:p(V +), reg r54:V, reg p6:p(V +), reg r56:V, reg r57:V, reg lclass2:*, reg lclass3:V, reg c25:L, reg _row_names_info2:cls, reg e15:*, reg e16:V, reg p7:p(V +), reg r60:V, reg _row_names_info3:cls, reg e17:*, reg e18:V, reg p8:p(V +), reg r62:V, reg r63:V, reg c26:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r64:V, reg r65:V, reg e19:*, reg e20:V, reg attr1:cls, reg r66:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r68:V, reg r69:V, reg e21:*, reg e22:V, reg names1:cls, reg r70:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r71:V, reg r72:V, reg e23:*, reg e24:V, reg length:cls, reg r73:V, reg r74:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r75:V, reg r76:V, reg e25:*, reg e26:V, reg is_list:cls, reg r77:V, reg c27:L, reg rscalar:*, reg rscalar1:V, reg c28:L, reg e27:*, reg e28:V, reg c29:L, reg e30:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r78:V, reg dx6:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r79:V, reg r80:V, reg e31:*, reg e32:V, reg length1:cls, reg r81:V, reg ncol:cls, reg e33:*, reg e34:V, reg p9:p(V +), reg r83:V, reg r84:V, reg c30:L, reg stop1:cls, reg gettextf1:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r85:V, reg r86:V, reg e35:*, reg e36:V, reg length2:cls, reg r87:V, reg p10:p(V +), reg r89:V, reg p11:p(V +), reg r91:V, reg dx7:V, reg rscalar2:*, reg rscalar3:V, reg r92:V, reg c31:L, reg split:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r93:V, reg r94:V, reg as_vector:cls, reg e37:*, reg e38:V, reg p12:p(V +), reg r96:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r97:V, reg r98:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r99:V, reg r100:V, reg e39:*, reg e40:V, reg dim2:cls, reg r101:V, reg prod:cls, reg r102:V, reg rep_len:cls, reg r103:V, reg p13:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r105:V, reg r106:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r107:V, reg r108:V, reg ncol1:cls, reg e41:*, reg e42:V, reg p14:p(V +), reg r110:V, reg r111:I, reg sym22:cls, reg base22:cls, reg guard22:L, reg r112:V, reg r113:V, reg nrow:cls, reg e43:*, reg e44:V, reg p15:p(V +), reg r115:V, reg ncol2:cls, reg e45:*, reg e46:V, reg p16:p(V +), reg r117:V, reg rep_int:cls, reg r118:V, reg rep_int1:cls, reg r119:V, reg p17:p(V +), reg r121:V, reg _row_names_info4:cls, reg e47:*, reg e48:V, reg p18:p(V +), reg r123:V, reg _row_names_info5:cls, reg e49:*, reg e50:V, reg p19:p(V +), reg r125:V, reg r126:V, reg c32:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r127:V, reg r128:V, reg e51:*, reg e52:V, reg attr2:cls, reg r129:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r131:V, reg r132:V, reg e53:*, reg e54:V, reg names2:cls, reg r133:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r134:V, reg r135:V, reg e55:*, reg e56:V, reg length3:cls, reg r136:V, reg r137:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r138:V, reg r139:V, reg e57:*, reg e58:V, reg is_list1:cls, reg r140:V, reg c33:L, reg lscalar:*, reg lscalar1:V, reg c34:L, reg e59:*, reg e60:V, reg c35:L, reg e62:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r141:V, reg dx10:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r142:V, reg r143:V, reg e63:*, reg e64:V, reg length4:cls, reg r144:V, reg ncol3:cls, reg e65:*, reg e66:V, reg p20:p(V +), reg r146:V, reg r147:V, reg c36:L, reg stop2:cls, reg gettextf2:cls, reg sym28:cls, reg base28:cls, reg guard28:L, reg r148:V, reg r149:V, reg e67:*, reg e68:V, reg length5:cls, reg r150:V, reg p21:p(V +), reg r152:V, reg p22:p(V +), reg r154:V, reg lscalar2:*, reg lscalar3:V, reg r155:V, reg c37:L, reg split1:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r156:V, reg r157:V, reg as_vector1:cls, reg e69:*, reg e70:V, reg p23:p(V +), reg r159:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r160:V, reg r161:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r162:V, reg r163:V, reg e71:*, reg e72:V, reg dim3:cls, reg r164:V, reg prod1:cls, reg r165:V, reg rep_len1:cls, reg r166:V, reg p24:p(V +), reg sym32:cls, reg base32:cls, reg guard32:L, reg r168:V, reg r169:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r170:V, reg r171:V, reg ncol4:cls, reg e73:*, reg e74:V, reg p25:p(V +), reg r173:V, reg r174:I, reg sym34:cls, reg base34:cls, reg guard34:L, reg r175:V, reg r176:V, reg nrow1:cls, reg e75:*, reg e76:V, reg p26:p(V +), reg r178:V, reg ncol5:cls, reg e77:*, reg e78:V, reg p27:p(V +), reg r180:V, reg rep_int2:cls, reg r181:V, reg rep_int3:cls, reg r182:V, reg p28:p(V +), reg r184:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r185:V, reg r186:V, reg cn:*, reg cn1:V, reg r187:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c38:L, reg x:V, reg lscalar4:*, reg lscalar5:V, reg r188:V, reg c39:L, reg e79:*, reg e80:V, reg c40:L, reg i8:I, reg e82:V, reg dr8:V, reg dc4:L, reg dx11:V, reg i10:I, reg dx12:V, reg j:*, reg j1:V, reg __4:cls, reg r189:V, reg i11:I, reg dx13:V, reg e83:*, reg e84:V, reg rscalar4:*, reg rscalar5:V, reg r190:V, reg c41:L, reg e85:*, reg e86:V, reg c42:L, reg i15:I, reg e88:V, reg dr10:V, reg dc5:L, reg dx14:V, reg i17:I, reg dx15:V, reg j2:*, reg j3:V, reg __5:cls, reg r191:V, reg i18:I, reg dx16:V, reg e89:*, reg e90:V, reg eval:cls, reg f:*, reg f1:V, reg p29:p(V +), reg r193:V, reg l1:*, reg c43:L, reg i20:I, reg r195:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx17:V, reg i22:I, reg dx18:V, reg j4:*, reg j5:V, reg ____:cls, reg r198:V, reg _in_:cls, reg _Generic4:*, reg _Generic5:V, reg p30:p(V +), reg sym36:cls, reg base36:cls, reg guard36:L, reg r200:V, reg r201:V, reg c44:cls, reg r202:V, reg p31:p(V +), reg r204:V, reg c45:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r205:V, reg r206:V, reg value:*, reg value1:V, reg length6:cls, reg r207:V, reg c46:L, reg cn2:*, reg cn3:V, reg l4:*, reg names__:cls, reg r208:V, reg data_frame:cls, reg value2:*, reg value3:V, reg p32:p(V +), reg rn:*, reg rn1:V, reg p33:p(V +), reg r211:V, reg data_frame1:cls, reg rn2:*, reg rn3:V, reg p34:p(V +), reg r213:V, reg unlist:cls, reg value4:*, reg value5:V, reg p35:p(V +), reg r215:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r216:V, reg r217:V, reg value6:*, reg value7:V, reg length7:cls, reg r218:V, reg r219:V, reg c47:L, reg matrix:cls, reg logical:cls, reg r220:V, reg p36:p(V +), reg nr:*, reg nr1:V, reg p37:p(V +), reg sym39:cls, reg base39:cls, reg guard39:L, reg r223:V, reg r224:V, reg cn4:*, reg cn5:V, reg length8:cls, reg r225:V, reg p38:p(V +), reg sym40:cls, reg base40:cls, reg guard40:L, reg r227:V, reg r228:V, reg rn4:*, reg rn5:V, reg cn6:*, reg cn7:V, reg list1:cls, reg r229:V, reg p39:p(V +), reg r231:V, reg matrix1:cls, reg value8:*, reg value9:V, reg p40:p(V +), reg nr2:*, reg nr3:V, reg p41:p(V +), reg sym41:cls, reg base41:cls, reg guard41:L, reg r234:V, reg r235:V, reg rn6:*, reg rn7:V, reg cn8:*, reg cn9:V, reg list2:cls, reg r236:V, reg p42:p(V +), reg r238:V |
    mkenv;
    st e1 = e1;
    e2_isMissing = missing.0(e2);
    if e2_isMissing then L0(NULL) else L0(e2);
  L0(e2_orDefault):
    st e2 = e2_orDefault;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L68() else L69();
  L1(r1):
    r3 = `==`(r1, 1);
    st unary = r3;
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L71() else L72();
  L68():
    nargs = ldf nargs in base;
    r2 = dyn nargs();
    check L70() else D0();
  L69():
    r = dyn base();
    goto L1(r);
  D0():
    deopt 3 [r2];
  L2(r5):
    st lclass = r5;
    unary = ld unary;
    check L78() else D3();
  L70():
    goto L1(r2);
  L71():
    _Method = ld `.Method`;
    check L73() else D1();
  L72():
    r4 = dyn base1(<lang `[`(.Method, 1)>);
    goto L2(r4);
  D1():
    deopt 9 [_Method];
  D3():
    deopt 17 [unary];
  L73():
    _Method1 = force? _Method;
    checkMissing(_Method1);
    c = `is.object`(_Method1);
    if c then L74() else L75(_Method1);
  L78():
    unary1 = force? unary;
    checkMissing(unary1);
    r8 = `!`(unary1);
    c1 = `as.logical`(r8);
    if c1 then L79() else L4(c1);
  L3(dx1):
    nzchar = ldf nzchar in base;
    r7 = dyn nzchar(dx1);
    check L77() else D2();
  L4(c3):
    st rclass = c3;
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L88() else L89();
  L74():
    dr = tryDispatchBuiltin.1("[", _Method1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L76() else L75(dr);
  L75(_Method3):
    __ = ldf `[` in base;
    r6 = dyn __(_Method3, 1);
    goto L3(r6);
  L79():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L80() else L81();
  D2():
    deopt 15 [r7];
  L5(c6, r10):
    c12 = `as.logical`(r10);
    c13 = `&&`(c6, c12);
    goto L4(c13);
  L7(r14):
    st value = r14;
    st rn = NULL;
    get = ldf get;
    check L91() else D7();
  L76():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L77():
    goto L2(r7);
  L80():
    _Method4 = ld `.Method`;
    check L82() else D4();
  L81():
    r9 = dyn base2(<lang `[`(.Method, 2)>);
    goto L5(c1, r9);
  L88():
    list = ldf list in base;
    r15 = dyn list();
    check L90() else D6();
  L89():
    r13 = dyn base3();
    goto L7(r13);
  D4():
    deopt 22 [c1, _Method4];
  D6():
    deopt 34 [r15];
  D7():
    deopt 40 [];
  L82():
    _Method5 = force? _Method4;
    checkMissing(_Method5);
    c7 = `is.object`(_Method5);
    if c7 then L83() else L84(c1, _Method5);
  L90():
    goto L7(r15);
  L91():
    p = prom<V +>{
      _Generic = ld `.Generic`;
      _Generic1 = force? _Generic;
      checkMissing(_Generic1);
      return _Generic1;
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r17 = dyn parent_frame();
      return r17;
    };
    r19 = dyn get[, envir, mode](p, p1, "function");
    check L92() else D8();
  D8():
    deopt 46 [r19];
  L6(c11, dx3):
    nzchar1 = ldf nzchar in base;
    r12 = dyn nzchar1(dx3);
    check L86() else D5();
  L83():
    dr2 = tryDispatchBuiltin.1("[", _Method5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L85() else L84(c1, dr2);
  L84(c9, _Method7):
    __1 = ldf `[` in base;
    r11 = dyn __1(_Method7, 2);
    goto L6(c9, r11);
  L92():
    st FUN = r19;
    unary2 = ld unary;
    check L93() else D9();
  D5():
    deopt 28 [c11, r12];
  D9():
    deopt 48 [unary2];
  L85():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(c1, dx2);
  L86():
    goto L5(c11, r12);
  L93():
    unary3 = force? unary2;
    checkMissing(unary3);
    c15 = `as.logical`(unary3);
    if c15 then L94() else L8();
  L8():
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L98() else L99();
  L10(r23):
    st f = r23;
    st rscalar = FALSE;
    st lscalar = FALSE;
    lclass = ld lclass;
    check L100() else D10();
  L94():
    sym4 = ldf quote;
    base4 = ldf quote in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L95() else L96();
  D10():
    deopt 61 [lclass];
  L9(r21):
    goto L10(r21);
  L95():
    quote = ldf quote in base;
    r22 = dyn quote(<lang FUN(left)>);
    goto L9(r22);
  L96():
    r20 = dyn base4(<lang FUN(left)>);
    goto L9(r20);
  L98():
    quote1 = ldf quote in base;
    r25 = dyn quote1(<lang FUN(left, right)>);
    goto L10(r25);
  L99():
    r24 = dyn base5(<lang FUN(left, right)>);
    goto L10(r24);
  L100():
    lclass1 = force? lclass;
    checkMissing(lclass1);
    c16 = `as.logical`(lclass1);
    if c16 then L101() else L11(c16);
  L11(c18):
    c22 = `as.logical`(c18);
    if c22 then L104() else L12();
  L101():
    rclass = ld rclass;
    check L102() else D11();
  D11():
    deopt 63 [c16, rclass];
  L12():
    lclass2 = ld lclass;
    check L135() else D27();
  L22():
    sym35 = ldf seq_along;
    base35 = ldf seq_along in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L230() else L231();
  L102():
    rclass1 = force? rclass;
    checkMissing(rclass1);
    c19 = `as.logical`(rclass1);
    c20 = `&&`(c16, c19);
    goto L11(c20);
  L104():
    _row_names_info = ldf `.row_names_info`;
    check L105() else D12();
  D12():
    deopt 67 [];
  D27():
    deopt 119 [lclass2];
  L51(r186):
    s = toForSeq(r186);
    l = length(s);
    i = 0;
    goto L54(i);
  L105():
    p2 = prom<V +>{
      e3 = ld e1;
      e4 = force? e3;
      checkMissing(e4);
      return e4;
    };
    r27 = dyn _row_names_info(p2, 2);
    check L106() else D13();
  L135():
    lclass3 = force? lclass2;
    checkMissing(lclass3);
    c25 = `as.logical`(lclass3);
    if c25 then L136() else L23();
  L230():
    cn = ld cn;
    check L232() else D74();
  L231():
    r185 = dyn base35(<sym cn>);
    goto L51(r185);
  D13():
    deopt 70 [r27];
  D74():
    deopt 284 [cn];
  L23():
    _row_names_info4 = ldf `.row_names_info`;
    check L184() else D51();
  L54(i1):
    i2 = `+`.1(i1, 1);
    c38 = `<`.1(l, i2);
    if c38 then L53() else L62();
  L106():
    st nr = r27;
    _row_names_info1 = ldf `.row_names_info`;
    check L107() else D14();
  L136():
    _row_names_info2 = ldf `.row_names_info`;
    check L137() else D28();
  L232():
    cn1 = force? cn;
    checkMissing(cn1);
    r187 = seq_along(cn1);
    goto L51(r187);
  D14():
    deopt 73 [];
  D28():
    deopt 122 [];
  D51():
    deopt 203 [];
  L53():
    _in_ = ldf `%in%`;
    check L257() else D86();
  L62():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    lscalar4 = ld lscalar;
    check L233() else D75();
  L107():
    p3 = prom<V +>{
      e5 = ld e1;
      e6 = force? e5;
      checkMissing(e6);
      return e6;
    };
    r29 = dyn _row_names_info1(p3);
    check L108() else D15();
  L137():
    p7 = prom<V +>{
      e15 = ld e1;
      e16 = force? e15;
      checkMissing(e16);
      return e16;
    };
    r60 = dyn _row_names_info2(p7, 2);
    check L138() else D29();
  L184():
    p18 = prom<V +>{
      e47 = ld e2;
      e48 = force? e47;
      checkMissing(e48);
      return e48;
    };
    r123 = dyn _row_names_info4(p18, 2);
    check L185() else D52();
  D15():
    deopt 75 [r29];
  D29():
    deopt 125 [r60];
  D52():
    deopt 206 [r123];
  D75():
    deopt 289 [i2, lscalar4];
  D86():
    deopt 325 [];
  L108():
    r30 = `>`(r29, 0);
    c23 = `as.logical`(r30);
    if c23 then L109() else L13();
  L138():
    st nr = r60;
    _row_names_info3 = ldf `.row_names_info`;
    check L139() else D30();
  L185():
    st nr = r123;
    _row_names_info5 = ldf `.row_names_info`;
    check L186() else D53();
  L233():
    lscalar5 = force? lscalar4;
    checkMissing(lscalar5);
    r188 = `!`(lscalar5);
    c39 = `as.logical`(r188);
    if c39 then L234() else L55();
  L257():
    p30 = prom<V +>{
      _Generic4 = ld `.Generic`;
      _Generic5 = force? _Generic4;
      checkMissing(_Generic5);
      return _Generic5;
    };
    p31 = prom<V +>{
      sym36 = ldf c;
      base36 = ldf c in base;
      guard36 = `==`.4(sym36, base36);
      if guard36 then L1() else L2();
    L0(r201):
      return r201;
    L1():
      c44 = ldf c in base;
      r202 = dyn c44("+", "-", "*", "^", "%%", "%/%", "/");
      goto L0(r202);
    L2():
      r200 = dyn base36("+", "-", "*", "^", "%%", "%/%", "/");
      goto L0(r200);
    };
    r204 = dyn _in_(p30, p31);
    check L258() else D87();
  D30():
    deopt 128 [];
  D53():
    deopt 209 [];
  D87():
    deopt 328 [r204];
  L13():
    goto L15();
  L15():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L115() else L116();
  L55():
    e83 = ld e1;
    check L241() else D78();
  L57(i11, dx13):
    st left = dx13;
    rscalar4 = ld rscalar;
    check L242() else D79();
  L109():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L110() else L111();
  L139():
    p8 = prom<V +>{
      e17 = ld e1;
      e18 = force? e17;
      checkMissing(e18);
      return e18;
    };
    r62 = dyn _row_names_info3(p8);
    check L140() else D31();
  L186():
    p19 = prom<V +>{
      e49 = ld e2;
      e50 = force? e49;
      checkMissing(e50);
      return e50;
    };
    r125 = dyn _row_names_info5(p19);
    check L187() else D54();
  L234():
    e79 = ld e1;
    check L235() else D76();
  L258():
    c45 = `as.logical`(r204);
    if c45 then L259() else L63();
  D31():
    deopt 130 [r62];
  D54():
    deopt 211 [r125];
  D76():
    deopt 292 [i2, e79];
  D78():
    deopt 297 [i2, e83];
  D79():
    deopt 300 [i11, rscalar4];
  L14(r32):
    st rn = r32;
    goto L15();
  L16(r36):
    st cn = r36;
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L119() else L120();
  L63():
    unlist = ldf unlist;
    check L274() else D97();
  L110():
    e7 = ld e1;
    check L112() else D16();
  L111():
    r31 = dyn base6(<sym e1>, "row.names");
    goto L14(r31);
  L115():
    e9 = ld e1;
    check L117() else D18();
  L116():
    r35 = dyn base7(<sym e1>);
    goto L16(r35);
  L140():
    r63 = `>`(r62, 0);
    c26 = `as.logical`(r63);
    if c26 then L141() else L24();
  L187():
    r126 = `>`(r125, 0);
    c32 = `as.logical`(r126);
    if c32 then L188() else L38();
  L235():
    e80 = force? e79;
    checkMissing(e80);
    c40 = `is.object`(e80);
    if c40 then L236() else L237(i2, e80);
  L241():
    e84 = force? e83;
    checkMissing(e84);
    goto L57(i2, e84);
  L242():
    rscalar5 = force? rscalar4;
    checkMissing(rscalar5);
    r190 = `!`(rscalar5);
    c41 = `as.logical`(r190);
    if c41 then L243() else L58();
  L259():
    sym37 = ldf length;
    base37 = ldf length in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L260() else L261();
  D16():
    deopt 80 [e7];
  D18():
    deopt 90 [e9];
  D97():
    deopt 358 [];
  L17(r39):
    c24 = `as.logical`(r39);
    if c24 then L130() else L20();
  L24():
    goto L26();
  L26():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L147() else L148();
  L38():
    goto L40();
  L40():
    sym24 = ldf names;
    base24 = ldf names in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L194() else L195();
  L56(i10, dx12):
    goto L57(i10, dx12);
  L58():
    e89 = ld e2;
    check L250() else D82();
  L60(i18, dx16):
    st right = dx16;
    eval = ldf eval;
    check L251() else D83();
  L64(r206):
    c46 = `as.logical`(r206);
    if c46 then L264() else L65();
  L112():
    e8 = force? e7;
    checkMissing(e8);
    attr = ldf attr in base;
    r33 = dyn attr(e8, "row.names");
    check L113() else D17();
  L117():
    e10 = force? e9;
    checkMissing(e10);
    names = ldf names in base;
    r37 = dyn names(e10);
    check L118() else D19();
  L119():
    sym9 = ldf dim;
    base9 = ldf dim in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L121() else L122();
  L120():
    r38 = dyn base8(<lang `!=`(dim(e2), dim(e1))>);
    goto L17(r38);
  L141():
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L142() else L143();
  L188():
    sym23 = ldf attr;
    base23 = ldf attr in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L189() else L190();
  L236():
    dr8 = tryDispatchBuiltin.1("[[", e80);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L238() else L237(i2, dr8);
  L237(i8, e82):
    j = ld j;
    check L239() else D77();
  L243():
    e85 = ld e2;
    check L244() else D80();
  L260():
    value = ld value;
    check L262() else D88();
  L261():
    r205 = dyn base37(<sym value>);
    goto L64(r205);
  L274():
    p35 = prom<V +>{
      value4 = ld value;
      value5 = force? value4;
      checkMissing(value5);
      return value5;
    };
    r215 = dyn unlist[, recursive, `use.names`](p35, FALSE, FALSE);
    check L275() else D98();
  D17():
    deopt 84 [r33];
  D19():
    deopt 93 [r37];
  D77():
    deopt 294 [i8, e82, j];
  D80():
    deopt 303 [i11, e85];
  D82():
    deopt 308 [i11, e89];
  D83():
    deopt 312 [i18];
  D88():
    deopt 331 [value];
  D98():
    deopt 364 [r215];
  L18(r41):
    sym10 = ldf dim;
    base10 = ldf dim in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L125() else L126();
  L20():
    goto L21(NULL);
  L21(r57):
    goto L22();
  L25(r65):
    st rn = r65;
    goto L26();
  L27(r69):
    st cn = r69;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L151() else L152();
  L39(r128):
    st rn = r128;
    goto L40();
  L41(r132):
    st cn = r132;
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L198() else L199();
  L65():
    data_frame1 = ldf `data.frame`;
    check L271() else D95();
  L113():
    goto L14(r33);
  L118():
    goto L16(r37);
  L121():
    e11 = ld e2;
    check L123() else D20();
  L122():
    r40 = dyn base9(<sym e2>);
    goto L18(r40);
  L130():
    stop = ldf stop;
    check L131() else D25();
  L142():
    e19 = ld e1;
    check L144() else D32();
  L143():
    r64 = dyn base11(<sym e1>, "row.names");
    goto L25(r64);
  L147():
    e21 = ld e1;
    check L149() else D34();
  L148():
    r68 = dyn base12(<sym e1>);
    goto L27(r68);
  L189():
    e51 = ld e2;
    check L191() else D55();
  L190():
    r127 = dyn base23(<sym e2>, "row.names");
    goto L39(r127);
  L194():
    e53 = ld e2;
    check L196() else D57();
  L195():
    r131 = dyn base24(<sym e2>);
    goto L41(r131);
  L238():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L56(i2, dx11);
  L239():
    j1 = force? j;
    __4 = ldf `[[` in base;
    r189 = dyn __4(e82, j1);
    goto L56(i8, r189);
  L244():
    e86 = force? e85;
    checkMissing(e86);
    c42 = `is.object`(e86);
    if c42 then L245() else L246(i11, e86);
  L250():
    e90 = force? e89;
    checkMissing(e90);
    goto L60(i11, e90);
  L251():
    p29 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r193 = dyn eval(p29);
    check L252() else D84();
  L262():
    value1 = force? value;
    checkMissing(value1);
    length6 = ldf length in base;
    r207 = dyn length6(value1);
    check L263() else D89();
  L264():
    cn2 = ld cn;
    check L265() else D90();
  L275():
    st value = r215;
    sym38 = ldf length;
    base38 = ldf length in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L276() else L277();
  D20():
    deopt 99 [e11];
  D25():
    deopt 112 [];
  D32():
    deopt 135 [e19];
  D34():
    deopt 145 [e21];
  D55():
    deopt 216 [e51];
  D57():
    deopt 226 [e53];
  D84():
    deopt 314 [i18, r193];
  D89():
    deopt 334 [r207];
  D90():
    deopt 335 [cn2];
  D95():
    deopt 351 [];
  L19(r46, r47):
    r49 = `!=`(r46, r47);
    any = ldf any in base;
    r50 = dyn any(r49);
    check L129() else D24();
  L28(r72):
    r74 = `<=`(r72, 1);
    st rscalar = r74;
    sym14 = ldf `is.list`;
    base14 = ldf `is.list` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L155() else L156();
  L42(r135):
    r137 = `<=`(r135, 1);
    st lscalar = r137;
    sym26 = ldf `is.list`;
    base26 = ldf `is.list` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L202() else L203();
  L59(i17, dx15):
    goto L60(i17, dx15);
  L66(r217):
    r219 = `!`(r217);
    c47 = `as.logical`(r219);
    if c47 then L280() else L67();
  L123():
    e12 = force? e11;
    checkMissing(e12);
    dim = ldf dim in base;
    r42 = dyn dim(e12);
    check L124() else D21();
  L125():
    e13 = ld e1;
    check L127() else D22();
  L126():
    r45 = dyn base10(<sym e1>);
    goto L19(r41, r45);
  L131():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          _Generic2 = ld `.Generic`;
          _Generic3 = force? _Generic2;
          checkMissing(_Generic3);
          return _Generic3;
        };
        r52 = dyn sQuote(p4);
        return r52;
      };
      r54 = dyn gettextf("%s only defined for equally-sized data frames", p5);
      return r54;
    };
    r56 = dyn stop[, domain](p6, NA_LGL);
    check L132() else D26();
  L144():
    e20 = force? e19;
    checkMissing(e20);
    attr1 = ldf attr in base;
    r66 = dyn attr1(e20, "row.names");
    check L145() else D33();
  L149():
    e22 = force? e21;
    checkMissing(e22);
    names1 = ldf names in base;
    r70 = dyn names1(e22);
    check L150() else D35();
  L151():
    e23 = ld e2;
    check L153() else D36();
  L152():
    r71 = dyn base13(<sym e2>);
    goto L28(r71);
  L191():
    e52 = force? e51;
    checkMissing(e52);
    attr2 = ldf attr in base;
    r129 = dyn attr2(e52, "row.names");
    check L192() else D56();
  L196():
    e54 = force? e53;
    checkMissing(e54);
    names2 = ldf names in base;
    r133 = dyn names2(e54);
    check L197() else D58();
  L198():
    e55 = ld e1;
    check L200() else D59();
  L199():
    r134 = dyn base25(<sym e1>);
    goto L42(r134);
  L245():
    dr10 = tryDispatchBuiltin.1("[[", e86);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L247() else L246(i11, dr10);
  L246(i15, e88):
    j2 = ld j;
    check L248() else D81();
  L252():
    l1 = ld value;
    c43 = `is.object`(l1);
    if c43 then L253() else L254(i18, r193, l1);
  L263():
    goto L64(r207);
  L265():
    cn3 = force? cn2;
    checkMissing(cn3);
    l4 = ld value;
    names__ = ldf `names<-`;
    check L266() else D91();
  L271():
    p34 = prom<V +>{
      rn2 = ld rn;
      rn3 = force? rn2;
      checkMissing(rn3);
      return rn3;
    };
    r213 = dyn data_frame1[`row.names`, `check.names`](p34, FALSE);
    check L272() else D96();
  L276():
    value6 = ld value;
    check L278() else D99();
  L277():
    r216 = dyn base38(<sym value>);
    goto L66(r216);
  D21():
    deopt 102 [r42];
  D22():
    deopt 104 [r41, e13];
  D24():
    deopt 110 [r50];
  D26():
    deopt 116 [r56];
  D33():
    deopt 139 [r66];
  D35():
    deopt 148 [r70];
  D36():
    deopt 152 [e23];
  D56():
    deopt 220 [r129];
  D58():
    deopt 229 [r133];
  D59():
    deopt 233 [e55];
  D81():
    deopt 305 [i15, e88, j2];
  D91():
    deopt 338 [cn3, l4, cn3];
  D96():
    deopt 356 [r213];
  D99():
    deopt 368 [value6];
  L29(r76):
    c27 = `as.logical`(r76);
    if c27 then L159() else L30();
  L43(r139):
    c33 = `as.logical`(r139);
    if c33 then L206() else L44();
  L61(i22, dx18):
    st value = dx18;
    goto L54(i22);
  L67():
    matrix1 = ldf matrix;
    check L284() else D103();
  L124():
    goto L18(r42);
  L127():
    e14 = force? e13;
    checkMissing(e14);
    dim1 = ldf dim in base;
    r48 = dyn dim1(e14);
    check L128() else D23();
  L129():
    goto L17(r50);
  L132():
    goto L21(r56);
  L145():
    goto L25(r66);
  L150():
    goto L27(r70);
  L153():
    e24 = force? e23;
    checkMissing(e24);
    length = ldf length in base;
    r73 = dyn length(e24);
    check L154() else D37();
  L155():
    e25 = ld e2;
    check L157() else D38();
  L156():
    r75 = dyn base14(<sym e2>);
    goto L29(r75);
  L192():
    goto L39(r129);
  L197():
    goto L41(r133);
  L200():
    e56 = force? e55;
    checkMissing(e56);
    length3 = ldf length in base;
    r136 = dyn length3(e56);
    check L201() else D60();
  L202():
    e57 = ld e1;
    check L204() else D61();
  L203():
    r138 = dyn base26(<sym e1>);
    goto L43(r138);
  L247():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L59(i11, dx14);
  L248():
    j3 = force? j2;
    __5 = ldf `[[` in base;
    r191 = dyn __5(e88, j3);
    goto L59(i15, r191);
  L253():
    dr12 = tryDispatchBuiltin.0("[[<-", l1, r193);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L255() else L254(i18, r193, dr12);
  L254(i20, r195, l3):
    j4 = ld j;
    check L256() else D85();
  L266():
    r208 = dyn names__(l4, NULL, cn3);
    check L267() else D92();
  L272():
    popenv;
    return r213;
  L278():
    value7 = force? value6;
    checkMissing(value7);
    length7 = ldf length in base;
    r218 = dyn length7(value7);
    check L279() else D100();
  L280():
    matrix = ldf matrix;
    check L281() else D101();
  D23():
    deopt 107 [r41, r48];
  D37():
    deopt 155 [r73];
  D38():
    deopt 161 [e25];
  D60():
    deopt 236 [r136];
  D61():
    deopt 242 [e57];
  D85():
    deopt 316 [i20, r195, l3, r193, j4];
  D92():
    deopt 340 [cn3, r208];
  D100():
    deopt 371 [r218];
  D101():
    deopt 374 [];
  D103():
    deopt 384 [];
  L30():
    rscalar2 = ld rscalar;
    check L178() else D48();
  L36(dx7):
    goto L22();
  L44():
    lscalar2 = ld lscalar;
    check L225() else D71();
  L128():
    goto L19(r41, r48);
  L154():
    goto L28(r73);
  L157():
    e26 = force? e25;
    checkMissing(e26);
    is_list = ldf `is.list` in base;
    r77 = dyn is_list(e26);
    check L158() else D39();
  L159():
    rscalar = ld rscalar;
    check L160() else D40();
  L201():
    goto L42(r136);
  L204():
    e58 = force? e57;
    checkMissing(e58);
    is_list1 = ldf `is.list` in base;
    r140 = dyn is_list1(e58);
    check L205() else D62();
  L206():
    lscalar = ld lscalar;
    check L207() else D63();
  L255():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L61(i18, dx17);
  L256():
    j5 = force? j4;
    ____ = ldf `[[<-` in base;
    r198 = dyn ____(l3, r193, j5);
    goto L61(i20, r198);
  L267():
    st value = r208;
    data_frame = ldf `data.frame`;
    check L268() else D93();
  L279():
    goto L66(r218);
  L281():
    p36 = prom<V +>{
      logical = ldf logical;
      r220 = dyn logical();
      return r220;
    };
    p37 = prom<V +>{
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      return nr1;
    };
    p38 = prom<V +>{
      sym39 = ldf length;
      base39 = ldf length in base;
      guard39 = `==`.4(sym39, base39);
      if guard39 then L1() else L2();
    L0(r224):
      return r224;
    L1():
      cn4 = ld cn;
      cn5 = force? cn4;
      checkMissing(cn5);
      length8 = ldf length in base;
      r225 = dyn length8(cn5);
      goto L0(r225);
    L2():
      r223 = dyn base39(<sym cn>);
      goto L0(r223);
    };
    p39 = prom<V +>{
      sym40 = ldf list;
      base40 = ldf list in base;
      guard40 = `==`.4(sym40, base40);
      if guard40 then L1() else L2();
    L0(r228):
      return r228;
    L1():
      rn4 = ld rn;
      rn5 = force? rn4;
      checkMissing(rn5);
      cn6 = ld cn;
      cn7 = force? cn6;
      checkMissing(cn7);
      list1 = ldf list in base;
      r229 = dyn list1(rn5, cn7);
      goto L0(r229);
    L2():
      r227 = dyn base40(<sym rn>, <sym cn>);
      goto L0(r227);
    };
    r231 = dyn matrix[, nrow, ncol, dimnames](p36, p37, p38, p39);
    check L282() else D102();
  L284():
    p40 = prom<V +>{
      value8 = ld value;
      value9 = force? value8;
      checkMissing(value9);
      return value9;
    };
    p41 = prom<V +>{
      nr2 = ld nr;
      nr3 = force? nr2;
      checkMissing(nr3);
      return nr3;
    };
    p42 = prom<V +>{
      sym41 = ldf list;
      base41 = ldf list in base;
      guard41 = `==`.4(sym41, base41);
      if guard41 then L1() else L2();
    L0(r235):
      return r235;
    L1():
      rn6 = ld rn;
      rn7 = force? rn6;
      checkMissing(rn7);
      cn8 = ld cn;
      cn9 = force? cn8;
      checkMissing(cn9);
      list2 = ldf list in base;
      r236 = dyn list2(rn7, cn9);
      goto L0(r236);
    L2():
      r234 = dyn base41(<sym rn>, <sym cn>);
      goto L0(r234);
    };
    r238 = dyn matrix1[, nrow, dimnames](p40, p41, p42);
    check L285() else D104();
  D39():
    deopt 164 [r77];
  D40():
    deopt 165 [rscalar];
  D48():
    deopt 191 [rscalar2];
  D62():
    deopt 245 [r140];
  D63():
    deopt 246 [lscalar];
  D71():
    deopt 272 [lscalar2];
  D93():
    deopt 343 [];
  D102():
    deopt 382 [r231];
  D104():
    deopt 390 [r238];
  L158():
    goto L29(r77);
  L160():
    rscalar1 = force? rscalar;
    checkMissing(rscalar1);
    c28 = `as.logical`(rscalar1);
    if c28 then L161() else L31();
  L178():
    rscalar3 = force? rscalar2;
    checkMissing(rscalar3);
    r92 = `!`(rscalar3);
    c31 = `as.logical`(r92);
    if c31 then L179() else L37();
  L205():
    goto L43(r140);
  L207():
    lscalar1 = force? lscalar;
    checkMissing(lscalar1);
    c34 = `as.logical`(lscalar1);
    if c34 then L208() else L45();
  L225():
    lscalar3 = force? lscalar2;
    checkMissing(lscalar3);
    r155 = `!`(lscalar3);
    c37 = `as.logical`(r155);
    if c37 then L226() else L50();
  L268():
    p32 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    p33 = prom<V +>{
      rn = ld rn;
      rn1 = force? rn;
      checkMissing(rn1);
      return rn1;
    };
    r211 = dyn data_frame[, `row.names`, `check.names`](p32, p33, FALSE);
    check L269() else D94();
  L282():
    popenv;
    return r231;
  L285():
    popenv;
    return r238;
  D94():
    deopt 349 [r211];
  L31():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L167() else L168();
  L33(dx6):
    goto L36(dx6);
  L37():
    goto L36(NULL);
  L45():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L214() else L215();
  L47(dx10):
    goto L22();
  L50():
    goto L22();
  L161():
    e27 = ld e2;
    check L162() else D41();
  L179():
    split = ldf split;
    check L180() else D49();
  L208():
    e59 = ld e1;
    check L209() else D64();
  L226():
    split1 = ldf split;
    check L227() else D72();
  L269():
    popenv;
    return r211;
  D41():
    deopt 167 [e27];
  D49():
    deopt 195 [];
  D64():
    deopt 248 [e59];
  D72():
    deopt 276 [];
  L34(r80):
    ncol = ldf ncol;
    check L171() else D44();
  L48(r143):
    ncol3 = ldf ncol;
    check L218() else D67();
  L162():
    e28 = force? e27;
    checkMissing(e28);
    c29 = `is.object`(e28);
    if c29 then L163() else L164(e28);
  L167():
    e31 = ld e2;
    check L169() else D42();
  L168():
    r79 = dyn base15(<sym e2>);
    goto L34(r79);
  L180():
    p13 = prom<V +>{
      sym17 = ldf rep_len;
      base17 = ldf rep_len in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L3() else L4();
    L0(r94):
      return r94;
    L3():
      as_vector = ldf `as.vector`;
      p12 = prom<V +>{
        e37 = ld e2;
        e38 = force? e37;
        checkMissing(e38);
        return e38;
      };
      r96 = dyn as_vector(p12);
      sym18 = ldf prod;
      base18 = ldf prod in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L5() else L6();
    L4():
      r93 = dyn base17(<lang as.vector(e2)>, <lang prod(dim(e1))>);
      goto L0(r93);
    L1(r98):
      rep_len = ldf rep_len in base;
      r103 = dyn rep_len(r96, r98);
      goto L0(r103);
    L5():
      sym19 = ldf dim;
      base19 = ldf dim in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L7() else L8();
    L6():
      r97 = dyn base18(<lang dim(e1)>);
      goto L1(r97);
    L2(r100):
      prod = ldf prod in base;
      r102 = dyn prod(r100);
      goto L1(r102);
    L7():
      e39 = ld e1;
      e40 = force? e39;
      checkMissing(e40);
      dim2 = ldf dim in base;
      r101 = dyn dim2(e40);
      goto L2(r101);
    L8():
      r99 = dyn base19(<sym e1>);
      goto L2(r99);
    };
    p17 = prom<V +>{
      sym20 = ldf `rep.int`;
      base20 = ldf `rep.int` in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L3() else L4();
    L0(r106):
      return r106;
    L3():
      sym21 = ldf seq_len;
      base21 = ldf seq_len in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L5() else L6();
    L4():
      r105 = dyn base20(<lang seq_len(ncol(e1))>, <lang rep.int(nrow(e1), ncol(e1))>);
      goto L0(r105);
    L1(r108):
      sym22 = ldf `rep.int`;
      base22 = ldf `rep.int` in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L7() else L8();
    L5():
      ncol1 = ldf ncol;
      p14 = prom<V +>{
        e41 = ld e1;
        e42 = force? e41;
        checkMissing(e42);
        return e42;
      };
      r110 = dyn ncol1(p14);
      r111 = seq_len(r110);
      goto L1(r111);
    L6():
      r107 = dyn base21(<lang ncol(e1)>);
      goto L1(r107);
    L2(r113):
      rep_int1 = ldf `rep.int` in base;
      r119 = dyn rep_int1(r108, r113);
      goto L0(r119);
    L7():
      nrow = ldf nrow;
      p15 = prom<V +>{
        e43 = ld e1;
        e44 = force? e43;
        checkMissing(e44);
        return e44;
      };
      r115 = dyn nrow(p15);
      ncol2 = ldf ncol;
      p16 = prom<V +>{
        e45 = ld e1;
        e46 = force? e45;
        checkMissing(e46);
        return e46;
      };
      r117 = dyn ncol2(p16);
      rep_int = ldf `rep.int` in base;
      r118 = dyn rep_int(r115, r117);
      goto L2(r118);
    L8():
      r112 = dyn base22(<lang nrow(e1)>, <lang ncol(e1)>);
      goto L2(r112);
    };
    r121 = dyn split(p13, p17);
    check L181() else D50();
  L209():
    e60 = force? e59;
    checkMissing(e60);
    c35 = `is.object`(e60);
    if c35 then L210() else L211(e60);
  L214():
    e63 = ld e1;
    check L216() else D65();
  L215():
    r142 = dyn base27(<sym e1>);
    goto L48(r142);
  L227():
    p24 = prom<V +>{
      sym29 = ldf rep_len;
      base29 = ldf rep_len in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L3() else L4();
    L0(r157):
      return r157;
    L3():
      as_vector1 = ldf `as.vector`;
      p23 = prom<V +>{
        e69 = ld e1;
        e70 = force? e69;
        checkMissing(e70);
        return e70;
      };
      r159 = dyn as_vector1(p23);
      sym30 = ldf prod;
      base30 = ldf prod in base;
      guard30 = `==`.4(sym30, base30);
      if guard30 then L5() else L6();
    L4():
      r156 = dyn base29(<lang as.vector(e1)>, <lang prod(dim(e2))>);
      goto L0(r156);
    L1(r161):
      rep_len1 = ldf rep_len in base;
      r166 = dyn rep_len1(r159, r161);
      goto L0(r166);
    L5():
      sym31 = ldf dim;
      base31 = ldf dim in base;
      guard31 = `==`.4(sym31, base31);
      if guard31 then L7() else L8();
    L6():
      r160 = dyn base30(<lang dim(e2)>);
      goto L1(r160);
    L2(r163):
      prod1 = ldf prod in base;
      r165 = dyn prod1(r163);
      goto L1(r165);
    L7():
      e71 = ld e2;
      e72 = force? e71;
      checkMissing(e72);
      dim3 = ldf dim in base;
      r164 = dyn dim3(e72);
      goto L2(r164);
    L8():
      r162 = dyn base31(<sym e2>);
      goto L2(r162);
    };
    p28 = prom<V +>{
      sym32 = ldf `rep.int`;
      base32 = ldf `rep.int` in base;
      guard32 = `==`.4(sym32, base32);
      if guard32 then L3() else L4();
    L0(r169):
      return r169;
    L3():
      sym33 = ldf seq_len;
      base33 = ldf seq_len in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L5() else L6();
    L4():
      r168 = dyn base32(<lang seq_len(ncol(e2))>, <lang rep.int(nrow(e2), ncol(e2))>);
      goto L0(r168);
    L1(r171):
      sym34 = ldf `rep.int`;
      base34 = ldf `rep.int` in base;
      guard34 = `==`.4(sym34, base34);
      if guard34 then L7() else L8();
    L5():
      ncol4 = ldf ncol;
      p25 = prom<V +>{
        e73 = ld e2;
        e74 = force? e73;
        checkMissing(e74);
        return e74;
      };
      r173 = dyn ncol4(p25);
      r174 = seq_len(r173);
      goto L1(r174);
    L6():
      r170 = dyn base33(<lang ncol(e2)>);
      goto L1(r170);
    L2(r176):
      rep_int3 = ldf `rep.int` in base;
      r182 = dyn rep_int3(r171, r176);
      goto L0(r182);
    L7():
      nrow1 = ldf nrow;
      p26 = prom<V +>{
        e75 = ld e2;
        e76 = force? e75;
        checkMissing(e76);
        return e76;
      };
      r178 = dyn nrow1(p26);
      ncol5 = ldf ncol;
      p27 = prom<V +>{
        e77 = ld e2;
        e78 = force? e77;
        checkMissing(e78);
        return e78;
      };
      r180 = dyn ncol5(p27);
      rep_int2 = ldf `rep.int` in base;
      r181 = dyn rep_int2(r178, r180);
      goto L2(r181);
    L8():
      r175 = dyn base34(<lang nrow(e2)>, <lang ncol(e2)>);
      goto L2(r175);
    };
    r184 = dyn split1(p24, p28);
    check L228() else D73();
  D42():
    deopt 175 [e31];
  D44():
    deopt 179 [r80];
  D50():
    deopt 198 [r121];
  D65():
    deopt 256 [e63];
  D67():
    deopt 260 [r143];
  D73():
    deopt 279 [r184];
  L32(dx5):
    st e2 = dx5;
    goto L33(dx5);
  L46(dx9):
    st e1 = dx9;
    goto L47(dx9);
  L163():
    dr4 = tryDispatchBuiltin.1("[[", e28);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L165() else L164(dr4);
  L164(e30):
    __2 = ldf `[[` in base;
    r78 = dyn __2(e30, 1);
    goto L32(r78);
  L169():
    e32 = force? e31;
    checkMissing(e32);
    length1 = ldf length in base;
    r81 = dyn length1(e32);
    check L170() else D43();
  L171():
    p9 = prom<V +>{
      e33 = ld e1;
      e34 = force? e33;
      checkMissing(e34);
      return e34;
    };
    r83 = dyn ncol(p9);
    check L172() else D45();
  L181():
    st e2 = r121;
    goto L36(r121);
  L210():
    dr6 = tryDispatchBuiltin.1("[[", e60);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L212() else L211(dr6);
  L211(e62):
    __3 = ldf `[[` in base;
    r141 = dyn __3(e62, 1);
    goto L46(r141);
  L216():
    e64 = force? e63;
    checkMissing(e64);
    length4 = ldf length in base;
    r144 = dyn length4(e64);
    check L217() else D66();
  L218():
    p20 = prom<V +>{
      e65 = ld e2;
      e66 = force? e65;
      checkMissing(e66);
      return e66;
    };
    r146 = dyn ncol3(p20);
    check L219() else D68();
  L228():
    st e1 = r184;
    goto L22();
  D43():
    deopt 178 [r81];
  D45():
    deopt 181 [r80, r83];
  D66():
    deopt 259 [r144];
  D68():
    deopt 262 [r143, r146];
  L165():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L32(dx4);
  L170():
    goto L34(r81);
  L172():
    r84 = `!=`(r80, r83);
    c30 = `as.logical`(r84);
    if c30 then L173() else L35();
  L212():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L46(dx8);
  L217():
    goto L48(r144);
  L219():
    r147 = `!=`(r143, r146);
    c36 = `as.logical`(r147);
    if c36 then L220() else L49();
  L35():
    goto L33(NULL);
  L49():
    goto L47(NULL);
  L173():
    stop1 = ldf stop;
    check L174() else D46();
  L220():
    stop2 = ldf stop;
    check L221() else D69();
  D46():
    deopt 184 [];
  D69():
    deopt 265 [];
  L174():
    p11 = prom<V +>{
      gettextf1 = ldf gettextf;
      p10 = prom<V +>{
        sym16 = ldf length;
        base16 = ldf length in base;
        guard16 = `==`.4(sym16, base16);
        if guard16 then L1() else L2();
      L0(r86):
        return r86;
      L1():
        e35 = ld e2;
        e36 = force? e35;
        checkMissing(e36);
        length2 = ldf length in base;
        r87 = dyn length2(e36);
        goto L0(r87);
      L2():
        r85 = dyn base16(<sym e2>);
        goto L0(r85);
      };
      r89 = dyn gettextf1("list of length %d not meaningful", p10);
      return r89;
    };
    r91 = dyn stop1[, domain](p11, NA_LGL);
    check L175() else D47();
  L221():
    p22 = prom<V +>{
      gettextf2 = ldf gettextf;
      p21 = prom<V +>{
        sym28 = ldf length;
        base28 = ldf length in base;
        guard28 = `==`.4(sym28, base28);
        if guard28 then L1() else L2();
      L0(r149):
        return r149;
      L1():
        e67 = ld e1;
        e68 = force? e67;
        checkMissing(e68);
        length5 = ldf length in base;
        r150 = dyn length5(e68);
        goto L0(r150);
      L2():
        r148 = dyn base28(<sym e1>);
        goto L0(r148);
      };
      r152 = dyn gettextf2("list of length %d not meaningful", p21);
      return r152;
    };
    r154 = dyn stop2[, domain](p22, NA_LGL);
    check L222() else D70();
  D47():
    deopt 188 [r91];
  D70():
    deopt 269 [r154];
  L175():
    goto L33(r91);
  L222():
    goto L47(r154);
  }
}