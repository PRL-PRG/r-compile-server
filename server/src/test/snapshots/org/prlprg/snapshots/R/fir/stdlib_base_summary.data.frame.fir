fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3623948481;
    st `summary.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3623948481(object, maxsum, digits, `...`) {
  (reg object:*, reg maxsum:*, reg digits:*, reg ddd:dots) -+> V { var object:*, var maxsum:*, reg maxsum_isMissing:L, reg maxsum_orDefault:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg r6:cls, reg lapply:cls, reg as_list:cls, reg object1:*, reg object2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg summary:*, reg summary1:V, reg p3:p(V +), reg maxsum1:*, reg maxsum2:V, reg p4:p(V +), reg ddd1:dots?, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg object3:*, reg object4:V, reg length:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg object5:*, reg object6:V, reg names:cls, reg r18:V, reg numeric:cls, reg nv:*, reg nv1:V, reg p5:p(V +), reg r20:V, reg nv2:*, reg nv3:V, reg c:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg vapply:cls, reg z:*, reg z1:V, reg p6:p(V +), reg r24:cls, reg p7:p(V +), reg integer:cls, reg r26:V, reg p8:p(V +), reg r28:V, reg max1:cls, reg r29:V, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg nv4:*, reg nv5:V, reg r33:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg z2:*, reg z3:V, reg c2:L, reg i6:I, reg z5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg i13:I, reg r36:V, reg sms:*, reg sms1:V, reg is_matrix:cls, reg r37:V, reg c3:L, reg paste:cls, reg nm:*, reg nm1:V, reg c4:L, reg nm3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i16:*, reg i17:V, reg __1:cls, reg r38:V, reg p9:p(V +), reg gsub:cls, reg colnames:cls, reg sms2:*, reg sms3:V, reg p10:p(V +), reg r41:V, reg p11:p(V +), reg r43:V, reg p12:p(V +), reg r45:V, reg format:cls, reg sms4:*, reg sms5:V, reg p13:p(V +), reg r47:V, reg nrow:cls, reg sms6:*, reg sms7:V, reg p14:p(V +), reg r49:V, reg nr:*, reg nr1:V, reg r50:V, reg c5:L, reg rbind:cls, reg tmp:*, reg tmp1:V, reg p15:p(V +), reg matrix:cls, reg nr2:*, reg nr3:V, reg nrow1:cls, reg sms8:*, reg sms9:V, reg p16:p(V +), reg r53:V, reg r54:V, reg p17:p(V +), reg ncol:cls, reg sms10:*, reg sms11:V, reg p18:p(V +), reg r57:V, reg p19:p(V +), reg r59:V, reg p20:p(V +), reg r61:V, reg i20:I, reg apply:cls, reg tmp2:*, reg tmp3:V, reg p21:p(V +), reg r64:cls, reg p22:p(V +), reg r66:V, reg sapply:cls, reg tmp4:*, reg tmp5:V, reg c6:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r67:V, reg p23:p(V +), reg nchar:*, reg nchar1:V, reg p24:p(V +), reg r70:V, reg paste1:cls, reg character:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r71:V, reg r72:V, reg wid:*, reg wid1:V, reg max2:cls, reg r73:V, reg p25:p(V +), reg r75:V, reg p26:p(V +), reg r77:V, reg ncw:cls, reg cn:*, reg cn1:V, reg p27:p(V +), reg r79:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r80:V, reg i23:I, reg r81:V, reg wid2:*, reg wid3:V, reg wcn:*, reg wcn1:V, reg r82:V, reg r83:V, reg r84:V, reg wid4:*, reg wid5:V, reg wcn2:*, reg wcn3:V, reg r85:V, reg pad0:*, reg pad1:V, reg r86:V, reg paste2:cls, reg substring:cls, reg blanks:*, reg blanks1:V, reg p28:p(V +), reg pad2:*, reg pad3:V, reg p29:p(V +), reg r89:V, reg p30:p(V +), reg cn2:*, reg cn3:V, reg p31:p(V +), reg substring1:cls, reg blanks2:*, reg blanks3:V, reg p32:p(V +), reg pad4:*, reg pad5:V, reg p33:p(V +), reg r94:V, reg p34:p(V +), reg r96:V, reg paste3:cls, reg cn4:*, reg cn5:V, reg p35:p(V +), reg r98:V, reg l1:*, reg c7:L, reg i25:I, reg r100:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i27:I, reg r102:V, reg dx7:V, reg i28:*, reg i29:V, reg ___:cls, reg r103:V, reg i30:I, reg format1:cls, reg sms12:*, reg sms13:V, reg p36:p(V +), reg digits1:*, reg digits2:V, reg p37:p(V +), reg r107:V, reg format2:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r108:V, reg r109:V, reg sms14:*, reg sms15:V, reg names1:cls, reg r110:V, reg p38:p(V +), reg r112:V, reg paste4:cls, reg lbs:*, reg lbs1:V, reg p39:p(V +), reg sms16:*, reg sms17:V, reg p40:p(V +), reg r115:V, reg ncw1:cls, reg lbs2:*, reg lbs3:V, reg c8:L, reg lbs5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r116:V, reg p41:p(V +), reg r118:V, reg l4:*, reg c9:L, reg i32:I, reg r120:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i34:I, reg dx11:V, reg i35:*, reg i36:V, reg ___1:cls, reg r123:V, reg nr4:*, reg nr5:V, reg l7:*, reg length__:cls, reg r124:V, reg sms18:*, reg sms19:V, reg l8:*, reg c10:L, reg i38:I, reg sms21:V, reg l10:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i40:I, reg dx13:V, reg i41:*, reg i42:V, reg ____:cls, reg r125:V, reg nv6:*, reg nv7:V, reg c11:L, reg unlist:cls, reg z6:*, reg z7:V, reg p42:p(V +), reg r127:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r128:V, reg r129:V, reg nr6:*, reg nr7:V, reg nv8:*, reg nv9:V, reg c12:cls, reg r130:V, reg l11:*, reg dim__:cls, reg r131:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r132:V, reg r133:V, reg lw:*, reg lw1:V, reg anyNA:cls, reg r134:V, reg c13:L, reg warning:cls, reg paste5:cls, reg which:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r135:V, reg r136:V, reg lw2:*, reg lw3:V, reg is_na:cls, reg r137:V, reg p43:p(V +), reg r139:V, reg p44:p(V +), reg r141:V, reg p45:p(V +), reg r143:V, reg paste6:cls, reg character1:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r145:V, reg r146:V, reg lw4:*, reg lw5:V, reg max3:cls, reg r147:V, reg r148:V, reg p46:p(V +), reg r150:V, reg p47:p(V +), reg r152:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r153:V, reg r154:V, reg lw6:*, reg lw7:V, reg ncw2:cls, reg nm4:*, reg nm5:V, reg p48:p(V +), reg r156:V, reg r157:V, reg r158:V, reg r159:V, reg paste7:cls, reg substring2:cls, reg blanks4:*, reg blanks5:V, reg p49:p(V +), reg pad6:*, reg pad7:V, reg p50:p(V +), reg r162:V, reg p51:p(V +), reg nm6:*, reg nm7:V, reg p52:p(V +), reg r165:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r166:V, reg r167:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r168:V, reg r169:V, reg nr8:*, reg nr9:V, reg rep_int:cls, reg r170:V, reg nm8:*, reg nm9:V, reg list:cls, reg r171:V, reg l12:*, reg dimnames__:cls, reg r172:V, reg character2:cls, reg r174:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r175:V, reg r176:V, reg nr10:*, reg nr11:V, reg nv10:*, reg nv11:V, reg c14:cls, reg r177:V, reg l13:*, reg dim__1:cls, reg r178:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r179:V, reg r180:V, reg c15:cls, reg r181:V, reg l14:*, reg attr__:cls, reg r182:V, reg z8:*, reg z9:V |
    mkenv;
    st object = object;
    maxsum_isMissing = missing.0(maxsum);
    if maxsum_isMissing then L0(7) else L0(maxsum);
  L0(maxsum_orDefault):
    st maxsum = maxsum_orDefault;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L1() else L2(digits);
  L1():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L2(p);
  L2(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    r6 = clos inner2501545716;
    st ncw = r6;
    lapply = ldf lapply;
    check L32() else D0();
  D0():
    deopt 4 [];
  L32():
    p2 = prom<V +>{
      as_list = ldf `as.list`;
      p1 = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r8 = dyn as_list(p1);
      return r8;
    };
    p3 = prom<V +>{
      summary = ld summary;
      summary1 = force? summary;
      checkMissing(summary1);
      return summary1;
    };
    p4 = prom<V +>{
      maxsum1 = ld maxsum;
      maxsum2 = force? maxsum1;
      checkMissing(maxsum2);
      return maxsum2;
    };
    ddd1 = ld `...`;
    r12 = dyn lapply[X, FUN, maxsum, digits, `...`](p2, p3, p4, 12, ddd1);
    check L33() else D1();
  D1():
    deopt 14 [r12];
  L33():
    st z = r12;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L3(r14):
    st nv = r14;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L34():
    object3 = ld object;
    check L36() else D2();
  L35():
    r13 = dyn base1(<sym object>);
    goto L3(r13);
  D2():
    deopt 18 [object3];
  L4(r17):
    st nm = r17;
    numeric = ldf numeric;
    check L42() else D6();
  L36():
    object4 = force? object3;
    checkMissing(object4);
    length = ldf length in base;
    r15 = dyn length(object4);
    check L37() else D3();
  L38():
    object5 = ld object;
    check L40() else D4();
  L39():
    r16 = dyn base2(<sym object>);
    goto L4(r16);
  D3():
    deopt 21 [r15];
  D4():
    deopt 25 [object5];
  D6():
    deopt 31 [];
  L37():
    goto L3(r15);
  L40():
    object6 = force? object5;
    checkMissing(object6);
    names = ldf names in base;
    r18 = dyn names(object6);
    check L41() else D5();
  L42():
    p5 = prom<V +>{
      nv = ld nv;
      nv1 = force? nv;
      checkMissing(nv1);
      return nv1;
    };
    r20 = dyn numeric(p5);
    check L43() else D7();
  D5():
    deopt 28 [r18];
  D7():
    deopt 33 [r20];
  L41():
    goto L4(r18);
  L43():
    st lw = r20;
    nv2 = ld nv;
    check L44() else D8();
  D8():
    deopt 35 [nv2];
  L44():
    nv3 = force? nv2;
    checkMissing(nv3);
    c = `as.logical`(nv3);
    if c then L45() else L5();
  L5():
    goto L7(0.0);
  L7(r30):
    st nr = r30;
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L45():
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L6(r22):
    goto L7(r22);
  L8(r32):
    s = toForSeq(r32);
    l = length(s);
    i = 0;
    goto L9(i);
  L46():
    vapply = ldf vapply;
    check L48() else D9();
  L47():
    r21 = dyn base3(<lang vapply(z, function((x=), `+`(NROW(x), `!`(is.null(attr(x, "NAs")))), NULL), integer(1.0))>);
    goto L6(r21);
  L52():
    nv4 = ld nv;
    check L54() else D12();
  L53():
    r31 = dyn base4(<sym nv>);
    goto L8(r31);
  D9():
    deopt 40 [];
  D12():
    deopt 51 [nv4];
  L9(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L55() else L20();
  L48():
    p6 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p7 = prom<V +>{
      r24 = clos inner2501545716;
      return r24;
    };
    p8 = prom<V +>{
      integer = ldf integer;
      r26 = dyn integer(1.0);
      return r26;
    };
    r28 = dyn vapply(p6, p7, p8);
    check L49() else D10();
  L54():
    nv5 = force? nv4;
    checkMissing(nv5);
    r33 = seq_len(nv5);
    goto L8(r33);
  D10():
    deopt 44 [r28];
  L20():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    z2 = ld z;
    check L56() else D13();
  L49():
    max1 = ldf max in base;
    r29 = dyn max1(r28);
    check L50() else D11();
  L55():
    nv6 = ld nv;
    check L121() else D58();
  D11():
    deopt 46 [r29];
  D13():
    deopt 54 [i2, z2];
  D58():
    deopt 200 [nv6];
  L50():
    goto L6(r29);
  L56():
    z3 = force? z2;
    checkMissing(z3);
    c2 = `is.object`(z3);
    if c2 then L57() else L58(i2, z3);
  L121():
    nv7 = force? nv6;
    checkMissing(nv7);
    c11 = `as.logical`(nv7);
    if c11 then L122() else L21();
  L10(i8, dx1):
    st sms = dx1;
    sym5 = ldf `is.matrix`;
    base5 = ldf `is.matrix` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L21():
    character2 = ldf character;
    check L160() else D83();
  L29():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L169() else L170();
  L57():
    dr = tryDispatchBuiltin.1("[[", z3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L59() else L58(i2, dr);
  L58(i6, z5):
    i9 = ld i;
    check L60() else D14();
  L122():
    unlist = ldf unlist;
    check L123() else D59();
  D14():
    deopt 56 [i6, z5, i9];
  D59():
    deopt 203 [];
  D83():
    deopt 278 [];
  L11(i13, r36):
    c3 = `as.logical`(r36);
    if c3 then L65() else L12();
  L31(r180):
    l14 = ld z;
    attr__ = ldf `attr<-`;
    check L172() else D91();
  L59():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(i2, dx);
  L60():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r34 = dyn __(z5, i10);
    goto L10(i6, r34);
  L61():
    sms = ld sms;
    check L63() else D15();
  L62():
    r35 = dyn base5(<sym sms>);
    goto L11(i8, r35);
  L123():
    p42 = prom<V +>{
      z6 = ld z;
      z7 = force? z6;
      checkMissing(z7);
      return z7;
    };
    r127 = dyn unlist[, `use.names`](p42, TRUE);
    check L124() else D60();
  L160():
    r174 = dyn character2();
    check L161() else D84();
  L169():
    c15 = ldf c in base;
    r181 = dyn c15("table");
    check L171() else D90();
  L170():
    r179 = dyn base17("table");
    goto L31(r179);
  D15():
    deopt 62 [i8, sms];
  D60():
    deopt 207 [r127];
  D84():
    deopt 279 [r174];
  D90():
    deopt 298 [r181];
  D91():
    deopt 300 [r180, l14, r180];
  L12():
    format1 = ldf format;
    check L101() else D44();
  L17(i30):
    sms18 = ld sms;
    check L116() else D56();
  L63():
    sms1 = force? sms;
    checkMissing(sms1);
    is_matrix = ldf `is.matrix` in base;
    r37 = dyn is_matrix(sms1);
    check L64() else D16();
  L65():
    paste = ldf paste;
    check L66() else D17();
  L124():
    st z = r127;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L125() else L126();
  L161():
    st z = r174;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L162() else L163();
  L171():
    goto L31(r181);
  L172():
    r182 = dyn attr__(l14, NULL, "class", r180);
    check L173() else D92();
  D16():
    deopt 65 [i8, r37];
  D17():
    deopt 67 [i13];
  D44():
    deopt 155 [i13];
  D56():
    deopt 190 [i30, sms18];
  D92():
    deopt 303 [r180, r182];
  L22(r129):
    l11 = ld z;
    dim__ = ldf `dim<-`;
    check L130() else D64();
  L30(r176):
    l13 = ld z;
    dim__1 = ldf `dim<-`;
    check L167() else D88();
  L64():
    goto L11(i8, r37);
  L66():
    p9 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      c4 = `is.object`(nm1);
      if c4 then L1() else L2(nm1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", nm1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(nm3):
      i16 = ld i;
      i17 = force? i16;
      __1 = ldf `[` in base;
      r38 = dyn __1(nm3, i17);
      goto L0(r38);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p12 = prom<V +>{
      gsub = ldf gsub;
      p11 = prom<V +>{
        colnames = ldf colnames;
        p10 = prom<V +>{
          sms2 = ld sms;
          sms3 = force? sms2;
          checkMissing(sms3);
          return sms3;
        };
        r41 = dyn colnames(p10);
        return r41;
      };
      r43 = dyn gsub[, , , useBytes]("^ +", "", p11, TRUE);
      return r43;
    };
    r45 = dyn paste[, , sep](p9, p12, ".");
    check L67() else D18();
  L101():
    p36 = prom<V +>{
      sms12 = ld sms;
      sms13 = force? sms12;
      checkMissing(sms13);
      return sms13;
    };
    p37 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    r107 = dyn format1[, digits](p36, p37);
    check L102() else D45();
  L116():
    sms19 = force? sms18;
    checkMissing(sms19);
    l8 = ld z;
    c10 = `is.object`(l8);
    if c10 then L117() else L118(i30, sms19, l8);
  L125():
    nr6 = ld nr;
    check L127() else D61();
  L126():
    r128 = dyn base9(<sym nr>, <sym nv>);
    goto L22(r128);
  L162():
    nr10 = ld nr;
    check L164() else D85();
  L163():
    r175 = dyn base16(<sym nr>, <sym nv>);
    goto L30(r175);
  L173():
    st z = r182;
    z8 = ld z;
    check L174() else D93();
  D18():
    deopt 72 [i13, r45];
  D45():
    deopt 159 [i13, r107];
  D61():
    deopt 211 [nr6];
  D64():
    deopt 218 [r129, l11, r129];
  D85():
    deopt 283 [nr10];
  D88():
    deopt 290 [r176, l13, r176];
  D93():
    deopt 305 [z8];
  L19(i40, dx13):
    st z = dx13;
    goto L9(i40);
  L67():
    st cn = r45;
    format = ldf format;
    check L68() else D19();
  L102():
    st sms = r107;
    format2 = ldf format;
    check L103() else D46();
  L117():
    dr12 = tryDispatchBuiltin.0("[[<-", l8, sms19);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L119() else L118(i30, sms19, dr12);
  L118(i38, sms21, l10):
    i41 = ld i;
    check L120() else D57();
  L127():
    nr7 = force? nr6;
    checkMissing(nr7);
    nv8 = ld nv;
    check L128() else D62();
  L130():
    r131 = dyn dim__(l11, NULL, r129);
    check L131() else D65();
  L164():
    nr11 = force? nr10;
    checkMissing(nr11);
    nv10 = ld nv;
    check L165() else D86();
  L167():
    r178 = dyn dim__1(l13, NULL, r176);
    check L168() else D89();
  L174():
    z9 = force? z8;
    checkMissing(z9);
    popenv;
    return z9;
  D19():
    deopt 75 [i13];
  D46():
    deopt 162 [i13];
  D57():
    deopt 193 [i38, sms21, l10, sms19, i41];
  D62():
    deopt 213 [nv8];
  D65():
    deopt 220 [r129, r131];
  D86():
    deopt 285 [nv10];
  D89():
    deopt 292 [r176, r178];
  L68():
    p13 = prom<V +>{
      sms4 = ld sms;
      sms5 = force? sms4;
      checkMissing(sms5);
      return sms5;
    };
    r47 = dyn format(p13);
    check L69() else D20();
  L103():
    p38 = prom<V +>{
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r109):
      return r109;
    L1():
      sms14 = ld sms;
      sms15 = force? sms14;
      checkMissing(sms15);
      names1 = ldf names in base;
      r110 = dyn names1(sms15);
      goto L0(r110);
    L2():
      r108 = dyn base8(<sym sms>);
      goto L0(r108);
    };
    r112 = dyn format2(p38);
    check L104() else D47();
  L119():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L19(i30, dx12);
  L120():
    i42 = force? i41;
    ____ = ldf `[[<-` in base;
    r125 = dyn ____(l10, sms19, i42);
    goto L19(i38, r125);
  L128():
    nv9 = force? nv8;
    checkMissing(nv9);
    c12 = ldf c in base;
    r130 = dyn c12(nr7, nv9);
    check L129() else D63();
  L131():
    st z = r131;
    sym10 = ldf anyNA;
    base10 = ldf anyNA in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L132() else L133();
  L165():
    nv11 = force? nv10;
    checkMissing(nv11);
    c14 = ldf c in base;
    r177 = dyn c14(nr11, nv11);
    check L166() else D87();
  L168():
    st z = r178;
    goto L29();
  D20():
    deopt 77 [i13, r47];
  D47():
    deopt 164 [i13, r112];
  D63():
    deopt 216 [r130];
  D87():
    deopt 288 [r177];
  L23(r133):
    c13 = `as.logical`(r133);
    if c13 then L136() else L24();
  L69():
    st tmp = r47;
    nrow = ldf nrow;
    check L70() else D21();
  L104():
    st lbs = r112;
    paste4 = ldf paste0;
    check L105() else D48();
  L129():
    goto L22(r130);
  L132():
    lw = ld lw;
    check L134() else D66();
  L133():
    r132 = dyn base10(<sym lw>);
    goto L23(r132);
  L166():
    goto L30(r177);
  D21():
    deopt 80 [i13];
  D48():
    deopt 167 [i13];
  D66():
    deopt 224 [lw];
  L24():
    goto L25();
  L25():
    paste6 = ldf paste;
    check L140() else D70();
  L70():
    p14 = prom<V +>{
      sms6 = ld sms;
      sms7 = force? sms6;
      checkMissing(sms7);
      return sms7;
    };
    r49 = dyn nrow(p14);
    check L71() else D22();
  L105():
    p39 = prom<V +>{
      lbs = ld lbs;
      lbs1 = force? lbs;
      checkMissing(lbs1);
      return lbs1;
    };
    p40 = prom<V +>{
      sms16 = ld sms;
      sms17 = force? sms16;
      checkMissing(sms17);
      return sms17;
    };
    r115 = dyn paste4(p39, ":", p40, "  ");
    check L106() else D49();
  L134():
    lw1 = force? lw;
    checkMissing(lw1);
    anyNA = ldf anyNA in base;
    r134 = dyn anyNA(lw1);
    check L135() else D67();
  L136():
    warning = ldf warning;
    check L137() else D68();
  D22():
    deopt 82 [i13, r49];
  D49():
    deopt 172 [i13, r115];
  D67():
    deopt 227 [r134];
  D68():
    deopt 229 [];
  D70():
    deopt 236 [];
  L71():
    nr = ld nr;
    check L72() else D23();
  L106():
    st sms = r115;
    ncw1 = ldf ncw;
    check L107() else D50();
  L135():
    goto L23(r134);
  L137():
    p45 = prom<V +>{
      paste5 = ldf paste;
      p44 = prom<V +>{
        which = ldf which;
        p43 = prom<V +>{
          sym11 = ldf `is.na`;
          base11 = ldf `is.na` in base;
          guard11 = `==`.4(sym11, base11);
          if guard11 then L1() else L2();
        L0(r136):
          return r136;
        L1():
          lw2 = ld lw;
          lw3 = force? lw2;
          checkMissing(lw3);
          is_na = ldf `is.na` in base;
          r137 = dyn is_na(lw3);
          goto L0(r137);
        L2():
          r135 = dyn base11(<sym lw>);
          goto L0(r135);
        };
        r139 = dyn which(p43);
        return r139;
      };
      r141 = dyn paste5[, collapse](p44, ", ");
      return r141;
    };
    r143 = dyn warning("probably wrong encoding in names(.) of column ", p45);
    check L138() else D69();
  L140():
    p47 = prom<V +>{
      character1 = ldf character;
      p46 = prom<V +>{
        sym12 = ldf max;
        base12 = ldf max in base;
        guard12 = `==`.4(sym12, base12);
        if guard12 then L1() else L2();
      L0(r146):
        r148 = `+`(r146, 2);
        return r148;
      L1():
        lw4 = ld lw;
        lw5 = force? lw4;
        checkMissing(lw5);
        max3 = ldf max in base;
        r147 = dyn max3(lw5, TRUE);
        goto L0(r147);
      L2():
        r145 = dyn base12[, `na.rm`](<sym lw>, TRUE);
        goto L0(r145);
      };
      r150 = dyn character1(p46);
      return r150;
    };
    r152 = dyn paste6[, collapse](p47, " ");
    check L141() else D71();
  D23():
    deopt 82 [i13, r49, nr];
  D50():
    deopt 175 [i13];
  D69():
    deopt 232 [r143];
  D71():
    deopt 240 [r152];
  L72():
    nr1 = force? nr;
    checkMissing(nr1);
    r50 = `<`(r49, nr1);
    c5 = `as.logical`(r50);
    if c5 then L73() else L13();
  L107():
    p41 = prom<V +>{
      lbs2 = ld lbs;
      lbs3 = force? lbs2;
      checkMissing(lbs3);
      c8 = `is.object`(lbs3);
      if c8 then L1() else L2(lbs3);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", lbs3);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(lbs5):
      __3 = ldf `[` in base;
      r116 = dyn __3(lbs5, 1);
      goto L0(r116);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r118 = dyn ncw1(p41);
    check L108() else D51();
  L138():
    goto L25();
  L141():
    st blanks = r152;
    sym13 = ldf floor;
    base13 = ldf floor in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L142() else L143();
  D51():
    deopt 177 [i13, r118];
  L13():
    goto L14(i13);
  L14(i20):
    apply = ldf apply;
    check L77() else D26();
  L26(r154):
    st pad = r154;
    paste7 = ldf paste0;
    check L147() else D75();
  L73():
    rbind = ldf rbind;
    check L74() else D24();
  L108():
    l4 = ld lw;
    c9 = `is.object`(l4);
    if c9 then L109() else L110(i13, r118, l4);
  L142():
    lw6 = ld lw;
    check L144() else D72();
  L143():
    r153 = dyn base13(<lang `-`(lw, `/`(ncw(nm), 2.0))>);
    goto L26(r153);
  D24():
    deopt 86 [i13];
  D26():
    deopt 94 [i20];
  D72():
    deopt 243 [lw6];
  D75():
    deopt 254 [];
  L18(i34, dx11):
    st lw = dx11;
    nr4 = ld nr;
    check L113() else D53();
  L74():
    p15 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    p20 = prom<V +>{
      matrix = ldf matrix;
      p17 = prom<V +>{
        nr2 = ld nr;
        nr3 = force? nr2;
        checkMissing(nr3);
        nrow1 = ldf nrow;
        p16 = prom<V +>{
          sms8 = ld sms;
          sms9 = force? sms8;
          checkMissing(sms9);
          return sms9;
        };
        r53 = dyn nrow1(p16);
        r54 = `-`(nr3, r53);
        return r54;
      };
      p19 = prom<V +>{
        ncol = ldf ncol;
        p18 = prom<V +>{
          sms10 = ld sms;
          sms11 = force? sms10;
          checkMissing(sms11);
          return sms11;
        };
        r57 = dyn ncol(p18);
        return r57;
      };
      r59 = dyn matrix("", p17, p19);
      return r59;
    };
    r61 = dyn rbind(p15, p20);
    check L75() else D25();
  L77():
    p21 = prom<V +>{
      tmp2 = ld tmp;
      tmp3 = force? tmp2;
      checkMissing(tmp3);
      return tmp3;
    };
    p22 = prom<V +>{
      r64 = clos inner2501545716;
      return r64;
    };
    r66 = dyn apply(p21, 1, p22);
    check L78() else D27();
  L109():
    dr10 = tryDispatchBuiltin.0("[<-", l4, r118);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L111() else L110(i13, r118, dr10);
  L110(i32, r120, l6):
    i35 = ld i;
    check L112() else D52();
  L144():
    lw7 = force? lw6;
    checkMissing(lw7);
    ncw2 = ldf ncw;
    check L145() else D73();
  L147():
    p51 = prom<V +>{
      substring2 = ldf substring;
      p49 = prom<V +>{
        blanks4 = ld blanks;
        blanks5 = force? blanks4;
        checkMissing(blanks5);
        return blanks5;
      };
      p50 = prom<V +>{
        pad6 = ld pad;
        pad7 = force? pad6;
        checkMissing(pad7);
        return pad7;
      };
      r162 = dyn substring2(p49, 1.0, p50);
      return r162;
    };
    p52 = prom<V +>{
      nm6 = ld nm;
      nm7 = force? nm6;
      checkMissing(nm7);
      return nm7;
    };
    r165 = dyn paste7(p51, p52);
    check L148() else D76();
  D25():
    deopt 89 [i13, r61];
  D27():
    deopt 98 [i20, r66];
  D52():
    deopt 179 [i32, r120, l6, r118, i35];
  D53():
    deopt 183 [i34, nr4];
  D73():
    deopt 245 [lw7];
  D76():
    deopt 257 [r165];
  L75():
    st tmp = r61;
    goto L14(i13);
  L78():
    st sms = r66;
    sapply = ldf sapply;
    check L79() else D28();
  L111():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L18(i13, dx10);
  L112():
    i36 = force? i35;
    ___1 = ldf `[<-` in base;
    r123 = dyn ___1(l6, r118, i36);
    goto L18(i32, r123);
  L113():
    nr5 = force? nr4;
    checkMissing(nr5);
    l7 = ld sms;
    length__ = ldf `length<-`;
    check L114() else D54();
  L145():
    p48 = prom<V +>{
      nm4 = ld nm;
      nm5 = force? nm4;
      checkMissing(nm5);
      return nm5;
    };
    r156 = dyn ncw2(p48);
    check L146() else D74();
  L148():
    st nm = r165;
    sym14 = ldf list;
    base14 = ldf list in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L149() else L150();
  D28():
    deopt 101 [i20];
  D54():
    deopt 186 [i34, nr5, l7, nr5];
  D74():
    deopt 247 [lw7, r156];
  L27(r167):
    l12 = ld z;
    dimnames__ = ldf `dimnames<-`;
    check L157() else D81();
  L79():
    p23 = prom<V +>{
      tmp4 = ld tmp;
      tmp5 = force? tmp4;
      checkMissing(tmp5);
      c6 = `is.object`(tmp5);
      if c6 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", tmp5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r67 = dyn __2(tmp5, 1, <missing>);
      goto L0(r67);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p24 = prom<V +>{
      nchar = ld nchar;
      nchar1 = force? nchar;
      checkMissing(nchar1);
      return nchar1;
    };
    r70 = dyn sapply[, , type](p23, p24, "w");
    check L80() else D29();
  L114():
    r124 = dyn length__(l7, NULL, nr5);
    check L115() else D55();
  L146():
    r157 = `/`(r156, 2.0);
    r158 = `-`(lw7, r157);
    r159 = floor(r158);
    goto L26(r159);
  L149():
    sym15 = ldf `rep.int`;
    base15 = ldf `rep.int` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L151() else L152();
  L150():
    r166 = dyn base14(<lang rep.int("", nr)>, <sym nm>);
    goto L27(r166);
  D29():
    deopt 106 [i20, r70];
  D55():
    deopt 188 [i34, nr5, r124];
  D81():
    deopt 273 [r167, l12, r167];
  L28(r169):
    nm8 = ld nm;
    check L155() else D79();
  L80():
    st wid = r70;
    paste1 = ldf paste;
    check L81() else D30();
  L115():
    st sms = r124;
    goto L17(i34);
  L151():
    nr8 = ld nr;
    check L153() else D77();
  L152():
    r168 = dyn base15("", <sym nr>);
    goto L28(r168);
  L157():
    r172 = dyn dimnames__(l12, NULL, r167);
    check L158() else D82();
  D30():
    deopt 109 [i20];
  D77():
    deopt 264 [nr8];
  D79():
    deopt 268 [nm8];
  D82():
    deopt 275 [r167, r172];
  L81():
    p26 = prom<V +>{
      character = ldf character;
      p25 = prom<V +>{
        sym6 = ldf max;
        base6 = ldf max in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r72):
        return r72;
      L1():
        wid = ld wid;
        wid1 = force? wid;
        checkMissing(wid1);
        max2 = ldf max in base;
        r73 = dyn max2(wid1);
        goto L0(r73);
      L2():
        r71 = dyn base6(<sym wid>);
        goto L0(r71);
      };
      r75 = dyn character(p25);
      return r75;
    };
    r77 = dyn paste1[, collapse](p26, " ");
    check L82() else D31();
  L153():
    nr9 = force? nr8;
    checkMissing(nr9);
    rep_int = ldf `rep.int` in base;
    r170 = dyn rep_int("", nr9);
    check L154() else D78();
  L155():
    nm9 = force? nm8;
    checkMissing(nm9);
    list = ldf list in base;
    r171 = dyn list(r169, nm9);
    check L156() else D80();
  L158():
    st z = r172;
    goto L29();
  D31():
    deopt 113 [i20, r77];
  D78():
    deopt 267 [r170];
  D80():
    deopt 271 [r171];
  L82():
    st blanks = r77;
    ncw = ldf ncw;
    check L83() else D32();
  L154():
    goto L28(r170);
  L156():
    goto L27(r171);
  D32():
    deopt 116 [i20];
  L83():
    p27 = prom<V +>{
      cn = ld cn;
      cn1 = force? cn;
      checkMissing(cn1);
      return cn1;
    };
    r79 = dyn ncw(p27);
    check L84() else D33();
  D33():
    deopt 118 [i20, r79];
  L84():
    st wcn = r79;
    sym7 = ldf floor;
    base7 = ldf floor in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L85() else L86();
  L15(i23, r81):
    st pad0 = r81;
    wid4 = ld wid;
    check L89() else D36();
  L85():
    wid2 = ld wid;
    check L87() else D34();
  L86():
    r80 = dyn base7(<lang `/`(`(`(`-`(wid, wcn)), 2.0)>);
    goto L15(i20, r80);
  D34():
    deopt 121 [i20, wid2];
  D36():
    deopt 129 [i23, wid4];
  L87():
    wid3 = force? wid2;
    checkMissing(wid3);
    wcn = ld wcn;
    check L88() else D35();
  L89():
    wid5 = force? wid4;
    checkMissing(wid5);
    wcn2 = ld wcn;
    check L90() else D37();
  D35():
    deopt 122 [i20, wid3, wcn];
  D37():
    deopt 130 [i23, wid5, wcn2];
  L88():
    wcn1 = force? wcn;
    checkMissing(wcn1);
    r82 = `-`(wid3, wcn1);
    r83 = `/`(r82, 2.0);
    r84 = floor(r83);
    goto L15(i20, r84);
  L90():
    wcn3 = force? wcn2;
    checkMissing(wcn3);
    r85 = `-`(wid5, wcn3);
    pad0 = ld pad0;
    check L91() else D38();
  D38():
    deopt 132 [i23, r85, pad0];
  L91():
    pad1 = force? pad0;
    checkMissing(pad1);
    r86 = `-`(r85, pad1);
    st pad1 = r86;
    paste2 = ldf paste0;
    check L92() else D39();
  D39():
    deopt 137 [i23];
  L92():
    p30 = prom<V +>{
      substring = ldf substring;
      p28 = prom<V +>{
        blanks = ld blanks;
        blanks1 = force? blanks;
        checkMissing(blanks1);
        return blanks1;
      };
      p29 = prom<V +>{
        pad2 = ld pad0;
        pad3 = force? pad2;
        checkMissing(pad3);
        return pad3;
      };
      r89 = dyn substring(p28, 1, p29);
      return r89;
    };
    p31 = prom<V +>{
      cn2 = ld cn;
      cn3 = force? cn2;
      checkMissing(cn3);
      return cn3;
    };
    p34 = prom<V +>{
      substring1 = ldf substring;
      p32 = prom<V +>{
        blanks2 = ld blanks;
        blanks3 = force? blanks2;
        checkMissing(blanks3);
        return blanks3;
      };
      p33 = prom<V +>{
        pad4 = ld pad1;
        pad5 = force? pad4;
        checkMissing(pad5);
        return pad5;
      };
      r94 = dyn substring1(p32, 1, p33);
      return r94;
    };
    r96 = dyn paste2(p30, p31, p34);
    check L93() else D40();
  D40():
    deopt 141 [i23, r96];
  L93():
    st cn = r96;
    paste3 = ldf paste;
    check L94() else D41();
  D41():
    deopt 144 [i23];
  L94():
    p35 = prom<V +>{
      cn4 = ld cn;
      cn5 = force? cn4;
      checkMissing(cn5);
      return cn5;
    };
    r98 = dyn paste3[, collapse](p35, "  ");
    check L95() else D42();
  D42():
    deopt 148 [i23, r98];
  L95():
    l1 = ld nm;
    c7 = `is.object`(l1);
    if c7 then L96() else L97(i23, r98, l1);
  L16(i27, r102, dx7):
    st nm = dx7;
    goto L17(i27);
  L96():
    dr6 = tryDispatchBuiltin.0("[<-", l1, r98);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L98() else L97(i23, r98, dr6);
  L97(i25, r100, l3):
    i28 = ld i;
    check L99() else D43();
  D43():
    deopt 150 [i25, r100, l3, r98, i28];
  L98():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(i23, r98, dx6);
  L99():
    i29 = force? i28;
    ___ = ldf `[<-` in base;
    r103 = dyn ___(l3, r98, i29);
    goto L16(i25, r100, r103);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg nchar:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg z:*, reg z1:V, reg is_na:cls, reg r7:V, reg any:cls, reg r8:V, reg c:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg encodeString:cls, reg z2:*, reg z3:V, reg c1:L, reg z5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg na:*, reg na1:V, reg __:cls, reg r11:V, reg p:p(V +), reg r13:V, reg nchar1:cls, reg r14:V, reg l:*, reg c2:L, reg r16:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r18:V, reg dx3:V, reg na2:*, reg na3:V, reg ___:cls, reg r19:V, reg z6:*, reg z7:V |
    mkenv;
    st x = x;
    sym = ldf nchar;
    base = ldf nchar in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st z = r1;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base[, type, allowNA](<sym x>, "w", TRUE);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c = `as.logical`(r4);
    if c then L18() else L3();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    nchar = ldf nchar in base;
    r2 = dyn nchar(x2, "w", TRUE, NA_LGL);
    check L10() else D1();
  L11():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L12():
    r3 = dyn base1(<lang `<-`(na, is.na(z))>);
    goto L1(r3);
  D1():
    deopt 8 [r2];
  L2(r6):
    st na = r6;
    any = ldf any in base;
    r8 = dyn any(r6);
    check L17() else D4();
  L3():
    goto L6();
  L6():
    z6 = ld z;
    check L29() else D9();
  L10():
    goto L0(r2);
  L13():
    z = ld z;
    check L15() else D2();
  L14():
    r5 = dyn base2(<sym z>);
    goto L2(r5);
  L18():
    sym3 = ldf nchar;
    base3 = ldf nchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  D2():
    deopt 14 [z];
  D4():
    deopt 20 [r8];
  D9():
    deopt 39 [z6];
  L4(r10):
    l = ld z;
    c2 = `is.object`(l);
    if c2 then L24() else L25(r10, l);
  L15():
    z1 = force? z;
    checkMissing(z1);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(z1);
    check L16() else D3();
  L17():
    goto L1(r8);
  L19():
    encodeString = ldf encodeString;
    check L21() else D5();
  L20():
    r9 = dyn base3(<lang encodeString(`[`(z, na))>, "b");
    goto L4(r9);
  L29():
    z7 = force? z6;
    checkMissing(z7);
    popenv;
    return z7;
  D3():
    deopt 17 [r7];
  D5():
    deopt 24 [];
  L5(r18, dx3):
    st z = dx3;
    goto L6();
  L16():
    goto L2(r7);
  L21():
    p = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      c1 = `is.object`(z3);
      if c1 then L1() else L2(z3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", z3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(z5):
      na = ld na;
      na1 = force? na;
      __ = ldf `[` in base;
      r11 = dyn __(z5, na1);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn encodeString(p);
    check L22() else D6();
  L24():
    dr2 = tryDispatchBuiltin.0("[<-", l, r10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(r10, dr2);
  L25(r16, l2):
    na2 = ld na;
    check L27() else D8();
  D6():
    deopt 26 [r13];
  D8():
    deopt 33 [r16, l2, r10, na2];
  L22():
    nchar1 = ldf nchar in base;
    r14 = dyn nchar1(r13, "b", FALSE, NA_LGL);
    check L23() else D7();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(r10, dx2);
  L27():
    na3 = force? na2;
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l2, r10, na3);
    goto L5(r16, r19);
  D7():
    deopt 31 [r14];
  L23():
    goto L4(r14);
  }
}