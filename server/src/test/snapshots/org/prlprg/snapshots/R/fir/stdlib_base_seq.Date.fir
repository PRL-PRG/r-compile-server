fun main() {
  () -+> V { reg r:cls, reg seq:cls, reg as_Date:cls, reg r1:V, reg p:p(V +), reg as_Date1:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg seq1:cls, reg as_Date2:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg seq2:cls, reg as_Date3:cls, reg r9:V, reg p3:p(V +), reg as_Date4:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg as_Date5:cls, reg r14:V, reg as_Date6:cls, reg r15:V, reg seq3:cls, reg en:*, reg en1:V, reg p5:p(V +), reg st:*, reg st1:V, reg p6:p(V +), reg r18:V, reg rev:cls, reg ll:*, reg ll1:V, reg c:L, reg ll3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ll4:*, reg ll5:V, reg st2:*, reg st3:V, reg r19:V, reg ll6:*, reg ll7:V, reg en2:*, reg en3:V, reg r20:V, reg r21:V, reg __:cls, reg r22:V, reg p7:p(V +), reg r24:V |
    mkenv;
    r = clos inner303251908;
    st `seq.Date` = r;
    seq = ldf seq;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      as_Date = ldf `as.Date`;
      r1 = dyn as_Date("1910/1/1");
      return r1;
    };
    p1 = prom<V +>{
      as_Date1 = ldf `as.Date`;
      r3 = dyn as_Date1("1999/1/1");
      return r3;
    };
    r5 = dyn seq(p, p1, "years");
    check L1() else D1();
  D1():
    deopt 8 [r5];
  L1():
    seq1 = ldf seq;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      as_Date2 = ldf `as.Date`;
      r6 = dyn as_Date2("2000/1/1");
      return r6;
    };
    r8 = dyn seq1[, by, `length.out`](p2, "month", 12.0);
    check L3() else D3();
  D3():
    deopt 16 [r8];
  L3():
    seq2 = ldf seq;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p3 = prom<V +>{
      as_Date3 = ldf `as.Date`;
      r9 = dyn as_Date3("2000/1/1");
      return r9;
    };
    p4 = prom<V +>{
      as_Date4 = ldf `as.Date`;
      r11 = dyn as_Date4("2003/1/1");
      return r11;
    };
    r13 = dyn seq2[, , by](p3, p4, "quarter");
    check L5() else D5();
  D5():
    deopt 23 [r13];
  L5():
    as_Date5 = ldf `as.Date`;
    check L6() else D6();
  D6():
    deopt 25 [];
  L6():
    r14 = dyn as_Date5("1998-12-17");
    check L7() else D7();
  D7():
    deopt 27 [r14];
  L7():
    st st = r14;
    as_Date6 = ldf `as.Date`;
    check L8() else D8();
  D8():
    deopt 30 [];
  L8():
    r15 = dyn as_Date6("2000-1-7");
    check L9() else D9();
  D9():
    deopt 32 [r15];
  L9():
    st en = r15;
    seq3 = ldf seq;
    check L10() else D10();
  D10():
    deopt 35 [];
  L10():
    p5 = prom<V +>{
      en = ld en;
      en1 = force? en;
      checkMissing(en1);
      return en1;
    };
    p6 = prom<V +>{
      st = ld st;
      st1 = force? st;
      checkMissing(st1);
      return st1;
    };
    r18 = dyn seq3[, , by](p5, p6, "-1 month");
    check L11() else D11();
  D11():
    deopt 40 [r18];
  L11():
    st ll = r18;
    rev = ldf rev;
    check L12() else D12();
  D12():
    deopt 43 [];
  L12():
    p7 = prom<V +>{
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      c = `is.object`(ll1);
      if c then L1() else L2(ll1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", ll1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(ll3):
      ll4 = ld ll;
      ll5 = force? ll4;
      checkMissing(ll5);
      st2 = ld st;
      st3 = force? st2;
      checkMissing(st3);
      r19 = `>`(ll5, st3);
      ll6 = ld ll;
      ll7 = force? ll6;
      checkMissing(ll7);
      en2 = ld en;
      en3 = force? en2;
      checkMissing(en3);
      r20 = `<`(ll7, en3);
      r21 = `&&`(r19, r20);
      __ = ldf `[` in base;
      r22 = dyn __(ll3, r21);
      goto L0(r22);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r24 = dyn rev(p7);
    check L13() else D13();
  D13():
    deopt 45 [r24];
  L13():
    popenv;
    return r24;
  }
}
fun inner303251908(from, to, by, `length.out`, `along.with`, `...`) {
  (reg from:*, reg to:*, reg by:*, reg length_out:*, reg along_with:*, reg ddd:dots) -+> V { var from:*, var to:*, var by:*, var `length.out`:*, reg length_out_isMissing:L, reg length_out_orDefault:*, var `along.with`:*, reg along_with_isMissing:L, reg along_with_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg from1:*, reg from2:V, reg inherits:cls, reg r7:V, reg r8:V, reg c1:L, reg stop1:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg as_Date:cls, reg from3:*, reg from4:V, reg p:p(V +), reg r14:V, reg length:cls, reg r15:V, reg r16:V, reg c2:L, reg stop2:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg missing1:cls, reg r21:V, reg r22:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg to1:*, reg to2:V, reg inherits1:cls, reg r25:V, reg r26:V, reg c4:L, reg stop3:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg as_Date1:cls, reg to3:*, reg to4:V, reg p1:p(V +), reg r32:V, reg length1:cls, reg r33:V, reg r34:V, reg c5:L, reg stop4:cls, reg r35:V, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg missing2:cls, reg r40:V, reg r41:V, reg c6:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg along_with1:*, reg along_with2:V, reg length2:cls, reg r44:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg length_out1:*, reg length_out2:V, reg c7:V, reg r48:V, reg c8:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg length_out3:*, reg length_out4:V, reg length3:cls, reg r51:V, reg r52:V, reg c9:L, reg stop5:cls, reg r53:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r55:V, reg r56:V, reg length_out5:*, reg length_out6:V, reg r57:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r60:V, reg r61:V, reg missing3:cls, reg r62:V, reg r63:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg missing4:cls, reg r66:V, reg r67:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r68:V, reg r69:V, reg length_out7:*, reg length_out8:V, reg c10:V, reg r70:V, reg c11:cls, reg r71:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r72:V, reg r73:V, reg status:*, reg status1:V, reg sum:cls, reg r74:V, reg r75:V, reg c12:L, reg stop6:cls, reg r76:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r78:V, reg r79:V, reg missing5:cls, reg r80:V, reg c13:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r81:V, reg r82:V, reg as_Date2:cls, reg from5:*, reg from6:V, reg p2:p(V +), reg r84:V, reg unclass:cls, reg r85:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r86:V, reg r87:V, reg as_Date3:cls, reg to5:*, reg to6:V, reg p3:p(V +), reg r89:V, reg unclass1:cls, reg r90:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r91:V, reg r92:V, reg from7:*, reg from8:V, reg to7:*, reg to8:V, reg length_out9:*, reg length_out10:V, reg seq_int:cls, reg r93:V, reg _Date:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r94:V, reg r95:V, reg res:*, reg res1:V, reg as_numeric:cls, reg r96:V, reg p4:p(V +), reg r98:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r101:V, reg r102:V, reg by1:*, reg by2:V, reg length4:cls, reg r103:V, reg r104:V, reg c14:L, reg stop7:cls, reg r105:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r107:V, reg r108:V, reg by3:*, reg by4:V, reg inherits2:cls, reg r109:V, reg c15:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r110:V, reg r111:V, reg by5:*, reg by6:V, reg attr:cls, reg r112:V, reg c16:L, reg c17:L, reg c18:L, reg c19:L, reg c20:L, reg c21:L, reg c22:L, reg c23:L, reg i_ddd:dots, reg i:V, reg c24:L, reg c25:L, reg c26:L, reg c27:L, reg c28:L, reg r113:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r116:V, reg r117:V, reg r118:V, reg by7:*, reg by8:V, reg unclass2:cls, reg r119:V, reg r120:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r122:V, reg r123:V, reg by9:*, reg by10:V, reg c29:L, reg c30:L, reg strsplit:cls, reg by11:*, reg by12:V, reg p5:p(V +), reg r125:V, reg c31:L, reg r127:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r128:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r129:V, reg r130:V, reg by13:*, reg by14:V, reg length5:cls, reg r131:V, reg r132:V, reg c32:L, reg c33:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r133:V, reg c37:L, reg r134:V, reg by15:*, reg by16:V, reg length6:cls, reg r135:V, reg r136:V, reg c38:L, reg c39:V, reg c41:L, reg stop8:cls, reg r137:V, reg pmatch:cls, reg by17:*, reg by18:V, reg c42:L, reg by20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r139:V, reg by23:V, reg r140:V, reg by24:*, reg by25:V, reg length7:cls, reg r141:V, reg __1:cls, reg r142:V, reg p6:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r144:V, reg r145:V, reg c43:cls, reg r146:V, reg p7:p(V +), reg r148:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r149:V, reg r150:V, reg valid:*, reg valid1:V, reg is_na:cls, reg r151:V, reg c44:L, reg stop9:cls, reg r152:V, reg valid2:*, reg valid3:V, reg r154:V, reg c45:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r155:V, reg r156:V, reg c46:cls, reg r157:V, reg c47:L, reg r159:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg valid4:*, reg valid5:V, reg __2:cls, reg r160:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r161:V, reg r162:V, reg by26:*, reg by27:V, reg length8:cls, reg r163:V, reg r164:V, reg c48:L, reg by28:*, reg by29:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r165:V, reg by32:V, reg r166:V, reg by33:*, reg by34:V, reg c49:L, reg by37:V, reg by38:V, reg dr6:V, reg dc3:L, reg dx6:V, reg by40:V, reg dx7:V, reg __3:cls, reg r167:V, reg as_integer:cls, reg r168:V, reg r169:V, reg r170:V, reg r171:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r172:V, reg r173:V, reg by41:*, reg by42:V, reg length9:cls, reg r174:V, reg r175:V, reg c50:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r176:V, reg r177:V, reg by43:*, reg by44:V, reg c51:L, reg by46:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r178:V, reg as_integer1:cls, reg r179:V, reg r180:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r181:V, reg r182:V, reg by47:*, reg by48:V, reg is_numeric:cls, reg r183:V, reg r184:V, reg c52:L, reg stop10:cls, reg r185:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r186:V, reg r187:V, reg by49:*, reg by50:V, reg is_na1:cls, reg r188:V, reg c53:L, reg stop11:cls, reg r189:V, reg valid6:*, reg valid7:V, reg r191:V, reg c54:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r192:V, reg r193:V, reg as_Date4:cls, reg from9:*, reg from10:V, reg p8:p(V +), reg r195:V, reg unclass3:cls, reg r196:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r197:V, reg r198:V, reg length_out11:*, reg length_out12:V, reg c55:V, reg r199:V, reg c56:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r200:V, reg r201:V, reg from11:*, reg from12:V, reg by51:*, reg by52:V, reg length_out13:*, reg length_out14:V, reg seq_int1:cls, reg r202:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r204:V, reg r205:V, reg as_Date5:cls, reg to9:*, reg to10:V, reg p9:p(V +), reg r207:V, reg unclass4:cls, reg r208:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r209:V, reg r210:V, reg to11:*, reg to12:V, reg from13:*, reg from14:V, reg r211:V, reg by53:*, reg by54:V, reg seq_int2:cls, reg r212:V, reg from15:*, reg from16:V, reg r213:V, reg _Date1:cls, reg sym43:cls, reg base43:cls, reg guard43:L, reg r214:V, reg r215:V, reg res2:*, reg res3:V, reg as_numeric1:cls, reg r216:V, reg p10:p(V +), reg r218:V, reg as_POSIXlt:cls, reg from17:*, reg from18:V, reg p11:p(V +), reg r221:V, reg valid8:*, reg valid9:V, reg r222:V, reg c57:L, reg sym44:cls, reg base44:cls, reg guard44:L, reg r223:V, reg r224:V, reg missing6:cls, reg r225:V, reg c58:L, reg sym45:cls, reg base45:cls, reg guard45:L, reg r226:V, reg r227:V, reg r228:*, reg r229:V, reg c59:L, reg r231:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r232:V, reg by55:*, reg by56:V, reg length_out15:*, reg length_out16:V, reg seq_int3:cls, reg r233:V, reg as_POSIXlt1:cls, reg to13:*, reg to14:V, reg p12:p(V +), reg r236:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r237:V, reg r238:V, reg r239:*, reg r240:V, reg c60:L, reg r242:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r243:V, reg to15:*, reg to16:V, reg c61:L, reg to18:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r244:V, reg by57:*, reg by58:V, reg seq_int4:cls, reg r245:V, reg yr:*, reg yr1:V, reg l:*, reg c62:L, reg yr3:V, reg l2:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r246:V, reg as_Date6:cls, reg r247:*, reg r248:V, reg p13:p(V +), reg r250:V, reg valid10:*, reg valid11:V, reg r251:V, reg c63:L, reg by59:*, reg by60:V, reg r252:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r254:V, reg r255:V, reg missing7:cls, reg r256:V, reg c64:L, reg sym48:cls, reg base48:cls, reg guard48:L, reg r257:V, reg r258:V, reg r259:*, reg r260:V, reg c65:L, reg r262:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r263:V, reg by61:*, reg by62:V, reg length_out17:*, reg length_out18:V, reg seq_int5:cls, reg r264:V, reg as_POSIXlt2:cls, reg to19:*, reg to20:V, reg p14:p(V +), reg r267:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r268:V, reg r269:V, reg r270:*, reg r271:V, reg c66:L, reg r273:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r274:V, reg to21:*, reg to22:V, reg c67:L, reg r276:R, reg to24:V, reg dr22:V, reg dc11:L, reg dx22:V, reg r278:R, reg dx23:V, reg r279:V, reg r280:*, reg r281:V, reg c68:L, reg r284:R, reg dx25:V, reg r285:V, reg dr24:V, reg dc12:L, reg dx27:V, reg r287:R, reg dx28:V, reg dx29:V, reg r288:V, reg r289:V, reg r290:V, reg to25:*, reg to26:V, reg c69:L, reg r292:V, reg to28:V, reg dr26:V, reg dc13:L, reg dx30:V, reg r294:V, reg dx31:V, reg r295:V, reg r296:V, reg by63:*, reg by64:V, reg seq_int6:cls, reg r297:V, reg mon:*, reg mon1:V, reg l3:*, reg c70:L, reg mon3:V, reg l5:*, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r298:V, reg as_Date7:cls, reg r299:*, reg r300:V, reg p15:p(V +), reg r302:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r303:V, reg r304:V, reg missing8:cls, reg r305:V, reg r306:V, reg c71:L, reg as_Date8:cls, reg to29:*, reg to30:V, reg p16:p(V +), reg r308:V, reg by65:*, reg by66:V, reg r309:V, reg c72:L, reg res4:*, reg res5:V, reg c73:L, reg res7:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg res8:*, reg res9:V, reg to31:*, reg to32:V, reg r310:V, reg __5:cls, reg r311:V, reg dx36:V, reg res10:*, reg res11:V, reg c74:L, reg res13:V, reg dr32:V, reg dc16:L, reg dx37:V, reg res14:*, reg res15:V, reg to33:*, reg to34:V, reg r312:V, reg __6:cls, reg r313:V, reg res16:*, reg res17:V |
    mkenv;
    st from = from;
    st to = to;
    st by = by;
    length_out_isMissing = missing.0(length_out);
    if length_out_isMissing then L0(NULL) else L0(length_out);
  L0(length_out_orDefault):
    st `length.out` = length_out_orDefault;
    along_with_isMissing = missing.0(along_with);
    if along_with_isMissing then L1(NULL) else L1(along_with);
  L1(along_with_orDefault):
    st `along.with` = along_with_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L116() else L117();
  L2(r1):
    c = `as.logical`(r1);
    if c then L118() else L3();
  L116():
    missing = ldf missing in base;
    r2 = dyn missing(<sym from>);
    goto L2(r2);
  L117():
    r = dyn base(<sym from>);
    goto L2(r);
  L3():
    goto L4();
  L4():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L122() else L123();
  L118():
    stop = ldf stop;
    check L119() else D0();
  D0():
    deopt 4 [];
  L5(r6):
    r8 = `!`(r6);
    c1 = `as.logical`(r8);
    if c1 then L126() else L6();
  L119():
    r3 = dyn stop("'from' must be specified");
    check L120() else D1();
  L122():
    from1 = ld from;
    check L124() else D2();
  L123():
    r5 = dyn base1(<sym from>, "Date");
    goto L5(r5);
  D1():
    deopt 6 [r3];
  D2():
    deopt 11 [from1];
  L6():
    goto L7();
  L7():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L130() else L131();
  L120():
    goto L4();
  L124():
    from2 = force? from1;
    checkMissing(from2);
    inherits = ldf inherits in base;
    r7 = dyn inherits(from2, "Date", FALSE);
    check L125() else D3();
  L126():
    stop1 = ldf stop;
    check L127() else D4();
  D3():
    deopt 16 [r7];
  D4():
    deopt 19 [];
  L8(r12):
    r16 = `!=`(r12, 1);
    c2 = `as.logical`(r16);
    if c2 then L135() else L9();
  L125():
    goto L5(r7);
  L127():
    r9 = dyn stop1("'from' must be a \"Date\" object");
    check L128() else D5();
  L130():
    as_Date = ldf `as.Date`;
    check L132() else D6();
  L131():
    r11 = dyn base2(<lang as.Date(from)>);
    goto L8(r11);
  D5():
    deopt 21 [r9];
  D6():
    deopt 27 [];
  L9():
    goto L10();
  L10():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L139() else L140();
  L128():
    goto L7();
  L132():
    p = prom<V +>{
      from3 = ld from;
      from4 = force? from3;
      checkMissing(from4);
      return from4;
    };
    r14 = dyn as_Date(p);
    check L133() else D7();
  L135():
    stop2 = ldf stop;
    check L136() else D9();
  D7():
    deopt 29 [r14];
  D9():
    deopt 35 [];
  L11(r20):
    r22 = `!`(r20);
    c3 = `as.logical`(r22);
    if c3 then L141() else L12();
  L133():
    length = ldf length in base;
    r15 = dyn length(r14);
    check L134() else D8();
  L136():
    r17 = dyn stop2("'from' must be of length 1");
    check L137() else D10();
  L139():
    missing1 = ldf missing in base;
    r21 = dyn missing1(<sym to>);
    goto L11(r21);
  L140():
    r19 = dyn base3(<sym to>);
    goto L11(r19);
  D8():
    deopt 31 [r15];
  D10():
    deopt 37 [r17];
  L12():
    goto L19();
  L19():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L160() else L161();
  L134():
    goto L8(r15);
  L137():
    goto L10();
  L141():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L142() else L143();
  L13(r24):
    r26 = `!`(r24);
    c4 = `as.logical`(r26);
    if c4 then L146() else L14();
  L20(r39):
    r41 = `!`(r39);
    c6 = `as.logical`(r41);
    if c6 then L162() else L21();
  L142():
    to1 = ld to;
    check L144() else D11();
  L143():
    r23 = dyn base4(<sym to>, "Date");
    goto L13(r23);
  L160():
    missing2 = ldf missing in base;
    r40 = dyn missing2(<sym along.with>);
    goto L20(r40);
  L161():
    r38 = dyn base6(<sym along.with>);
    goto L20(r38);
  D11():
    deopt 46 [to1];
  L14():
    goto L15();
  L15():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L150() else L151();
  L21():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L168() else L169();
  L23():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L184() else L185();
  L144():
    to2 = force? to1;
    checkMissing(to2);
    inherits1 = ldf inherits in base;
    r25 = dyn inherits1(to2, "Date", FALSE);
    check L145() else D12();
  L146():
    stop3 = ldf stop;
    check L147() else D13();
  L162():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L163() else L164();
  D12():
    deopt 51 [r25];
  D13():
    deopt 54 [];
  L16(r30):
    r34 = `!=`(r30, 1);
    c5 = `as.logical`(r34);
    if c5 then L155() else L17();
  L22(r43):
    st `length.out` = r43;
    goto L23();
  L24(r47):
    r48 = `!`(r47);
    c8 = `as.logical`(r48);
    if c8 then L171() else L25();
  L30(r59):
    st status = r59;
    sym15 = ldf sum;
    base15 = ldf sum in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L194() else L195();
  L145():
    goto L13(r25);
  L147():
    r27 = dyn stop3("'to' must be a \"Date\" object");
    check L148() else D14();
  L150():
    as_Date1 = ldf `as.Date`;
    check L152() else D15();
  L151():
    r29 = dyn base5(<lang as.Date(to)>);
    goto L16(r29);
  L163():
    along_with1 = ld `along.with`;
    check L165() else D20();
  L164():
    r42 = dyn base7(<sym along.with>);
    goto L22(r42);
  L168():
    length_out1 = ld `length.out`;
    check L170() else D22();
  L169():
    r46 = dyn base8(<sym length.out>);
    goto L24(r46);
  L184():
    sym12 = ldf missing;
    base12 = ldf missing in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L186() else L187();
  L185():
    r58 = dyn base11(<lang `!`(missing(to))>, <lang `!`(missing(by))>, <lang `!`(is.null(length.out))>);
    goto L30(r58);
  D14():
    deopt 56 [r27];
  D15():
    deopt 62 [];
  D20():
    deopt 83 [along_with1];
  D22():
    deopt 89 [length_out1];
  L17():
    goto L18(NULL);
  L18(r36):
    goto L19();
  L25():
    goto L23();
  L31(r61):
    r63 = `!`(r61);
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L188() else L189();
  L34(r73):
    r75 = `!=`(r73, 2);
    c12 = `as.logical`(r75);
    if c12 then L198() else L35();
  L148():
    goto L15();
  L152():
    p1 = prom<V +>{
      to3 = ld to;
      to4 = force? to3;
      checkMissing(to4);
      return to4;
    };
    r32 = dyn as_Date1(p1);
    check L153() else D16();
  L155():
    stop4 = ldf stop;
    check L156() else D18();
  L165():
    along_with2 = force? along_with1;
    checkMissing(along_with2);
    length2 = ldf length in base;
    r44 = dyn length2(along_with2);
    check L166() else D21();
  L170():
    length_out2 = force? length_out1;
    checkMissing(length_out2);
    c7 = `==`(length_out2, NULL);
    goto L24(c7);
  L171():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L172() else L173();
  L186():
    missing3 = ldf missing in base;
    r62 = dyn missing3(<sym to>);
    goto L31(r62);
  L187():
    r60 = dyn base12(<sym to>);
    goto L31(r60);
  L194():
    status = ld status;
    check L196() else D30();
  L195():
    r72 = dyn base15(<sym status>);
    goto L34(r72);
  D16():
    deopt 64 [r32];
  D18():
    deopt 70 [];
  D21():
    deopt 86 [r44];
  D30():
    deopt 134 [status];
  L26(r50):
    r52 = `!=`(r50, 1);
    c9 = `as.logical`(r52);
    if c9 then L176() else L27();
  L32(r65):
    r67 = `!`(r65);
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L190() else L191();
  L35():
    goto L36();
  L36():
    sym16 = ldf missing;
    base16 = ldf missing in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L202() else L203();
  L153():
    length1 = ldf length in base;
    r33 = dyn length1(r32);
    check L154() else D17();
  L156():
    r35 = dyn stop4("'to' must be of length 1");
    check L157() else D19();
  L166():
    goto L22(r44);
  L172():
    length_out3 = ld `length.out`;
    check L174() else D23();
  L173():
    r49 = dyn base9(<sym length.out>);
    goto L26(r49);
  L188():
    missing4 = ldf missing in base;
    r66 = dyn missing4(<sym by>);
    goto L32(r66);
  L189():
    r64 = dyn base13(<sym by>);
    goto L32(r64);
  L196():
    status1 = force? status;
    checkMissing(status1);
    sum = ldf sum in base;
    r74 = dyn sum(status1);
    check L197() else D31();
  L198():
    stop6 = ldf stop;
    check L199() else D32();
  D17():
    deopt 66 [r33];
  D19():
    deopt 72 [r35];
  D23():
    deopt 95 [length_out3];
  D31():
    deopt 137 [r74];
  D32():
    deopt 141 [];
  L27():
    goto L28();
  L28():
    sym10 = ldf ceiling;
    base10 = ldf ceiling in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L180() else L181();
  L33(r69):
    r70 = `!`(r69);
    c11 = ldf c in base;
    r71 = dyn c11(r63, r67, r70);
    check L193() else D29();
  L37(r79):
    c13 = `as.logical`(r79);
    if c13 then L204() else L38();
  L154():
    goto L16(r33);
  L157():
    goto L18(r35);
  L174():
    length_out4 = force? length_out3;
    checkMissing(length_out4);
    length3 = ldf length in base;
    r51 = dyn length3(length_out4);
    check L175() else D24();
  L176():
    stop5 = ldf stop;
    check L177() else D25();
  L190():
    length_out7 = ld `length.out`;
    check L192() else D28();
  L191():
    r68 = dyn base14(<sym length.out>);
    goto L33(r68);
  L197():
    goto L34(r74);
  L199():
    r76 = dyn stop6("exactly two of 'to', 'by' and 'length.out' / 'along.with' must be specified");
    check L200() else D33();
  L202():
    missing5 = ldf missing in base;
    r80 = dyn missing5(<sym by>);
    goto L37(r80);
  L203():
    r78 = dyn base16(<sym by>);
    goto L37(r78);
  D24():
    deopt 98 [r51];
  D25():
    deopt 102 [];
  D28():
    deopt 125 [length_out7];
  D29():
    deopt 130 [r71];
  D33():
    deopt 143 [r76];
  L29(r56):
    st `length.out` = r56;
    goto L23();
  L38():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L225() else L226();
  L175():
    goto L26(r51);
  L177():
    r53 = dyn stop5("'length.out' must be of length 1");
    check L178() else D26();
  L180():
    length_out5 = ld `length.out`;
    check L182() else D27();
  L181():
    r55 = dyn base10(<sym length.out>);
    goto L29(r55);
  L192():
    length_out8 = force? length_out7;
    checkMissing(length_out8);
    c10 = `==`(length_out8, NULL);
    goto L33(c10);
  L193():
    goto L30(r71);
  L200():
    goto L36();
  L204():
    sym17 = ldf unclass;
    base17 = ldf unclass in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L205() else L206();
  D26():
    deopt 104 [r53];
  D27():
    deopt 108 [length_out5];
  L39(r82):
    st from = r82;
    sym18 = ldf unclass;
    base18 = ldf unclass in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L210() else L211();
  L43(r102):
    r104 = `!=`(r102, 1);
    c14 = `as.logical`(r104);
    if c14 then L229() else L44();
  L178():
    goto L28();
  L182():
    length_out6 = force? length_out5;
    checkMissing(length_out6);
    r57 = ceiling(length_out6);
    goto L29(r57);
  L205():
    as_Date2 = ldf `as.Date`;
    check L207() else D34();
  L206():
    r81 = dyn base17(<lang as.Date(from)>);
    goto L39(r81);
  L225():
    by1 = ld by;
    check L227() else D46();
  L226():
    r101 = dyn base21(<sym by>);
    goto L43(r101);
  D34():
    deopt 152 [];
  D46():
    deopt 188 [by1];
  L40(r87):
    st to = r87;
    sym19 = ldf `seq.int`;
    base19 = ldf `seq.int` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L215() else L216();
  L44():
    goto L45();
  L45():
    st valid = 0;
    sym22 = ldf inherits;
    base22 = ldf inherits in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L233() else L234();
  L207():
    p2 = prom<V +>{
      from5 = ld from;
      from6 = force? from5;
      checkMissing(from6);
      return from6;
    };
    r84 = dyn as_Date2(p2);
    check L208() else D35();
  L210():
    as_Date3 = ldf `as.Date`;
    check L212() else D37();
  L211():
    r86 = dyn base18(<lang as.Date(to)>);
    goto L40(r86);
  L227():
    by2 = force? by1;
    checkMissing(by2);
    length4 = ldf length in base;
    r103 = dyn length4(by2);
    check L228() else D47();
  L229():
    stop7 = ldf stop;
    check L230() else D48();
  D35():
    deopt 154 [r84];
  D37():
    deopt 161 [];
  D47():
    deopt 191 [r103];
  D48():
    deopt 195 [];
  L41(r92):
    st res = r92;
    _Date = ldf `.Date`;
    check L221() else D44();
  L46(r108):
    c15 = `as.logical`(r108);
    if c15 then L237() else L47();
  L208():
    unclass = ldf unclass in base;
    r85 = dyn unclass(r84);
    check L209() else D36();
  L212():
    p3 = prom<V +>{
      to5 = ld to;
      to6 = force? to5;
      checkMissing(to6);
      return to6;
    };
    r89 = dyn as_Date3(p3);
    check L213() else D38();
  L215():
    from7 = ld from;
    check L217() else D40();
  L216():
    r91 = dyn base19[, , `length.out`](<sym from>, <sym to>, <sym length.out>);
    goto L41(r91);
  L228():
    goto L43(r103);
  L230():
    r105 = dyn stop7("'by' must be of length 1");
    check L231() else D49();
  L233():
    by3 = ld by;
    check L235() else D50();
  L234():
    r107 = dyn base22(<sym by>, "difftime");
    goto L46(r107);
  D36():
    deopt 156 [r85];
  D38():
    deopt 163 [r89];
  D40():
    deopt 169 [from7];
  D44():
    deopt 180 [];
  D49():
    deopt 197 [r105];
  D50():
    deopt 205 [by3];
  L47():
    sym25 = ldf `is.character`;
    base25 = ldf `is.character` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L269() else L270();
  L57():
    sym37 = ldf `is.na`;
    base37 = ldf `is.na` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L348() else L349();
  L209():
    goto L39(r85);
  L213():
    unclass1 = ldf unclass in base;
    r90 = dyn unclass1(r89);
    check L214() else D39();
  L217():
    from8 = force? from7;
    checkMissing(from8);
    to7 = ld to;
    check L218() else D41();
  L221():
    p4 = prom<V +>{
      sym20 = ldf `as.numeric`;
      base20 = ldf `as.numeric` in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r95):
      return r95;
    L1():
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      as_numeric = ldf `as.numeric` in base;
      r96 = dyn as_numeric(res1);
      goto L0(r96);
    L2():
      r94 = dyn base20(<sym res>);
      goto L0(r94);
    };
    r98 = dyn _Date(p4);
    check L222() else D45();
  L231():
    goto L45();
  L235():
    by4 = force? by3;
    checkMissing(by4);
    inherits2 = ldf inherits in base;
    r109 = dyn inherits2(by4, "difftime", FALSE);
    check L236() else D51();
  L237():
    sym23 = ldf attr;
    base23 = ldf attr in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L238() else L239();
  D39():
    deopt 165 [r90];
  D41():
    deopt 171 [to7];
  D45():
    deopt 182 [r98];
  D51():
    deopt 210 [r109];
  L48(r111):
    c16 = `is.vector`(r111, "any");
    if c16 then L242() else L243();
  L58(r123):
    c30 = `as.logical`(r123);
    if c30 then L272() else L59();
  L85(r187):
    c53 = `as.logical`(r187);
    if c53 then L352() else L86();
  L214():
    goto L40(r90);
  L218():
    to8 = force? to7;
    checkMissing(to8);
    length_out9 = ld `length.out`;
    check L219() else D42();
  L222():
    popenv;
    return r98;
  L236():
    goto L46(r109);
  L238():
    by5 = ld by;
    check L240() else D52();
  L239():
    r110 = dyn base23(<sym by>, "units");
    goto L48(r110);
  L269():
    by9 = ld by;
    check L271() else D56();
  L270():
    r122 = dyn base25(<sym by>);
    goto L58(r122);
  L348():
    by49 = ld by;
    check L350() else D87();
  L349():
    r186 = dyn base37(<sym by>);
    goto L85(r186);
  D42():
    deopt 173 [length_out9];
  D52():
    deopt 213 [by5];
  D56():
    deopt 239 [by9];
  D87():
    deopt 365 [by49];
  L59():
    sym36 = ldf `is.numeric`;
    base36 = ldf `is.numeric` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L340() else L341();
  L86():
    goto L87();
  L87():
    valid6 = ld valid;
    check L356() else D91();
  L219():
    length_out10 = force? length_out9;
    checkMissing(length_out10);
    seq_int = ldf `seq.int` in base;
    r93 = dyn seq_int(from8, to8, length_out10);
    check L220() else D43();
  L240():
    by6 = force? by5;
    checkMissing(by6);
    attr = ldf attr in base;
    r112 = dyn attr(by6, "units");
    check L241() else D53();
  L242():
    c17 = inherits(r111, "factor", FALSE);
    if c17 then L244() else L245();
  L243():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L271():
    by10 = force? by9;
    checkMissing(by10);
    c29 = `is.character`(by10);
    goto L58(c29);
  L272():
    strsplit = ldf strsplit;
    check L273() else D57();
  L350():
    by50 = force? by49;
    checkMissing(by50);
    is_na1 = ldf `is.na` in base;
    r188 = dyn is_na1(by50);
    check L351() else D88();
  L352():
    stop11 = ldf stop;
    check L353() else D89();
  D43():
    deopt 177 [r93];
  D53():
    deopt 217 [r112];
  D57():
    deopt 243 [];
  D88():
    deopt 368 [r188];
  D89():
    deopt 370 [];
  D91():
    deopt 375 [valid6];
  L83(r182):
    r184 = `!`(r182);
    c52 = `as.logical`(r184);
    if c52 then L344() else L84();
  L220():
    goto L41(r93);
  L241():
    goto L48(r112);
  L244():
    c18 = `is.character`(r111);
    if c18 then L246() else L247();
  L245():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L244();
  L273():
    p5 = prom<V +>{
      by11 = ld by;
      by12 = force? by11;
      checkMissing(by12);
      return by12;
    };
    r125 = dyn strsplit[, , fixed](p5, " ", TRUE);
    check L274() else D58();
  L340():
    by47 = ld by;
    check L342() else D83();
  L341():
    r181 = dyn base36(<sym by>);
    goto L83(r181);
  L351():
    goto L85(r188);
  L353():
    r189 = dyn stop11("'by' is NA");
    check L354() else D90();
  L356():
    valid7 = force? valid6;
    checkMissing(valid7);
    r191 = `<=`(valid7, 2);
    c54 = `as.logical`(r191);
    if c54 then L357() else L88();
  D58():
    deopt 248 [r125];
  D83():
    deopt 352 [by47];
  D90():
    deopt 372 [r189];
  L49():
    goto L55(1.1574074074074073E-5);
  L50():
    goto L55(6.944444444444445E-4);
  L51():
    goto L55(0.041666666666666664);
  L52():
    goto L55(1.0);
  L53():
    goto L55(7.0);
  L54():
    goto L55(NULL);
  L55(r113):
    sym24 = ldf unclass;
    base24 = ldf unclass in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L264() else L265();
  L84():
    goto L57();
  L88():
    as_POSIXlt = ldf `as.POSIXlt`;
    check L389() else D110();
  L96():
    sym50 = ldf missing;
    base50 = ldf missing in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L482() else L483();
  L246():
    c19 = `==`.6(r111, "secs");
    if c19 then L49() else L248();
  L247():
    i_ddd = dots[r111];
    i = `as.integer`(i_ddd);
    c24 = `==`.5(i, 1);
    if c24 then L49() else L253();
  L274():
    c31 = `is.object`(r125);
    if c31 then L275() else L276(r125);
  L342():
    by48 = force? by47;
    checkMissing(by48);
    is_numeric = ldf `is.numeric` in base;
    r183 = dyn is_numeric(by48);
    check L343() else D84();
  L344():
    stop10 = ldf stop;
    check L345() else D85();
  L354():
    goto L87();
  L357():
    sym38 = ldf unclass;
    base38 = ldf unclass in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L358() else L359();
  D84():
    deopt 355 [r183];
  D85():
    deopt 358 [];
  D110():
    deopt 435 [];
  L56(r117, r118):
    r120 = `*`(r117, r118);
    st by = r120;
    goto L57();
  L60(dx1):
    st by2 = dx1;
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L278() else L279();
  L89(r193):
    st from = r193;
    sym39 = ldf `is.null`;
    base39 = ldf `is.null` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L363() else L364();
  L110(r304):
    r306 = `!`(r304);
    c71 = `as.logical`(r306);
    if c71 then L484() else L111();
  L248():
    c20 = `==`.6(r111, "mins");
    if c20 then L50() else L249();
  L253():
    c25 = `==`.5(i, 2);
    if c25 then L50() else L254();
  L264():
    by7 = ld by;
    check L266() else D54();
  L265():
    r116 = dyn base24(<sym by>);
    goto L56(r113, r116);
  L275():
    dr = tryDispatchBuiltin.1("[[", r125);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L277() else L276(dr);
  L276(r127):
    __ = ldf `[[` in base;
    r128 = dyn __(r127, 1);
    goto L60(r128);
  L343():
    goto L83(r183);
  L345():
    r185 = dyn stop10("invalid mode for 'by'");
    check L346() else D86();
  L358():
    as_Date4 = ldf `as.Date`;
    check L360() else D92();
  L359():
    r192 = dyn base38(<lang as.Date(from)>);
    goto L89(r192);
  L389():
    p11 = prom<V +>{
      from17 = ld from;
      from18 = force? from17;
      checkMissing(from18);
      return from18;
    };
    r221 = dyn as_POSIXlt(p11);
    check L390() else D111();
  L482():
    missing8 = ldf missing in base;
    r305 = dyn missing8(<sym to>);
    goto L110(r305);
  L483():
    r303 = dyn base50(<sym to>);
    goto L110(r303);
  D54():
    deopt 232 [r113, by7];
  D86():
    deopt 360 [r185];
  D92():
    deopt 382 [];
  D111():
    deopt 437 [r221];
  L61(r130):
    r132 = `>`(r130, 2);
    c32 = `as.logical`(r132);
    if c32 then L62(c32) else L282();
  L90(r198):
    r199 = `!`(r198);
    c56 = `as.logical`(r199);
    if c56 then L366() else L91();
  L111():
    goto L115();
  L115():
    res16 = ld res;
    check L503() else D152();
  L249():
    c21 = `==`.6(r111, "hours");
    if c21 then L51() else L250();
  L254():
    c26 = `==`.5(i, 3);
    if c26 then L51() else L255();
  L266():
    by8 = force? by7;
    checkMissing(by8);
    unclass2 = ldf unclass in base;
    r119 = dyn unclass2(by8);
    check L267() else D55();
  L277():
    dx = getTryDispatchBuiltinValue(dr);
    goto L60(dx);
  L278():
    by13 = ld by2;
    check L280() else D59();
  L279():
    r129 = dyn base26(<sym by2>);
    goto L61(r129);
  L346():
    goto L57();
  L360():
    p8 = prom<V +>{
      from9 = ld from;
      from10 = force? from9;
      checkMissing(from10);
      return from10;
    };
    r195 = dyn as_Date4(p8);
    check L361() else D93();
  L363():
    length_out11 = ld `length.out`;
    check L365() else D95();
  L364():
    r197 = dyn base39(<sym length.out>);
    goto L90(r197);
  L390():
    st r1 = r221;
    valid8 = ld valid;
    check L391() else D112();
  L484():
    as_Date8 = ldf `as.Date`;
    check L485() else D143();
  D55():
    deopt 235 [r113, r119];
  D59():
    deopt 255 [by13];
  D93():
    deopt 384 [r195];
  D95():
    deopt 389 [length_out11];
  D112():
    deopt 439 [valid8];
  D143():
    deopt 557 [];
  D152():
    deopt 582 [res16];
  L62(c33):
    c41 = `as.logical`(c33);
    if c41 then L288() else L64();
  L91():
    sym41 = ldf unclass;
    base41 = ldf unclass in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L374() else L375();
  L93():
    _Date1 = ldf `.Date`;
    check L386() else D108();
  L250():
    c22 = `==`.6(r111, "days");
    if c22 then L52() else L251();
  L255():
    c27 = `==`.5(i, 4);
    if c27 then L52() else L256();
  L267():
    goto L56(r113, r119);
  L280():
    by14 = force? by13;
    checkMissing(by14);
    length5 = ldf length in base;
    r131 = dyn length5(by14);
    check L281() else D60();
  L282():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L283() else L284();
  L361():
    unclass3 = ldf unclass in base;
    r196 = dyn unclass3(r195);
    check L362() else D94();
  L365():
    length_out12 = force? length_out11;
    checkMissing(length_out12);
    c55 = `==`(length_out12, NULL);
    goto L90(c55);
  L366():
    sym40 = ldf `seq.int`;
    base40 = ldf `seq.int` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L367() else L368();
  L391():
    valid9 = force? valid8;
    checkMissing(valid9);
    r222 = `==`(valid9, 5);
    c57 = `as.logical`(r222);
    if c57 then L392() else L97();
  L485():
    p16 = prom<V +>{
      to29 = ld to;
      to30 = force? to29;
      checkMissing(to30);
      return to30;
    };
    r308 = dyn as_Date8(p16);
    check L486() else D144();
  L503():
    res17 = force? res16;
    checkMissing(res17);
    popenv;
    return res17;
  D60():
    deopt 258 [r131];
  D94():
    deopt 386 [r196];
  D108():
    deopt 430 [];
  D144():
    deopt 559 [r308];
  L63(c37, r134):
    r136 = `<`(r134, 1);
    c38 = `as.logical`(r136);
    c39 = `||`(c37, c38);
    goto L62(c39);
  L64():
    goto L65();
  L65():
    pmatch = ldf pmatch;
    check L292() else D65();
  L92(r201):
    st res = r201;
    goto L93();
  L94(r205):
    st to0 = r205;
    sym42 = ldf `seq.int`;
    base42 = ldf `seq.int` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L379() else L380();
  L97():
    valid10 = ld valid;
    check L431() else D126();
  L251():
    c23 = `==`.6(r111, "weeks");
    if c23 then L53() else L252();
  L256():
    c28 = `==`.5(i, 5);
    if c28 then L53() else L257();
  L281():
    goto L61(r131);
  L283():
    by15 = ld by2;
    check L285() else D61();
  L284():
    r133 = dyn base27(<sym by2>);
    goto L63(c32, r133);
  L288():
    stop8 = ldf stop;
    check L289() else D63();
  L362():
    goto L89(r196);
  L367():
    from11 = ld from;
    check L369() else D96();
  L368():
    r200 = dyn base40[, by, `length.out`](<sym from>, <sym by>, <sym length.out>);
    goto L92(r200);
  L374():
    as_Date5 = ldf `as.Date`;
    check L376() else D100();
  L375():
    r204 = dyn base41(<lang as.Date(to)>);
    goto L94(r204);
  L386():
    p10 = prom<V +>{
      sym43 = ldf `as.numeric`;
      base43 = ldf `as.numeric` in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L1() else L2();
    L0(r215):
      return r215;
    L1():
      res2 = ld res;
      res3 = force? res2;
      checkMissing(res3);
      as_numeric1 = ldf `as.numeric` in base;
      r216 = dyn as_numeric1(res3);
      goto L0(r216);
    L2():
      r214 = dyn base43(<sym res>);
      goto L0(r214);
    };
    r218 = dyn _Date1(p10);
    check L387() else D109();
  L392():
    sym44 = ldf missing;
    base44 = ldf missing in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L393() else L394();
  L486():
    st to = r308;
    by65 = ld by;
    check L487() else D145();
  D61():
    deopt 263 [c32, by15];
  D63():
    deopt 271 [];
  D65():
    deopt 277 [];
  D96():
    deopt 395 [from11];
  D100():
    deopt 409 [];
  D109():
    deopt 432 [r218];
  D126():
    deopt 488 [valid10];
  D145():
    deopt 561 [by65];
  L95(r210):
    from15 = ld from;
    check L385() else D107();
  L98(r224):
    c58 = `as.logical`(r224);
    if c58 then L395() else L99();
  L252():
    goto L54();
  L257():
    goto L54();
  L285():
    by16 = force? by15;
    checkMissing(by16);
    length6 = ldf length in base;
    r135 = dyn length6(by16);
    check L286() else D62();
  L289():
    r137 = dyn stop8("invalid 'by' string");
    check L290() else D64();
  L292():
    p6 = prom<V +>{
      by17 = ld by2;
      by18 = force? by17;
      checkMissing(by18);
      c42 = `is.object`(by18);
      if c42 then L2() else L3(by18);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", by18);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(by20):
      sym28 = ldf length;
      base28 = ldf length in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L5() else L6();
    L1(by23, r140):
      __1 = ldf `[` in base;
      r142 = dyn __1(by23, r140);
      goto L0(r142);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      by24 = ld by2;
      by25 = force? by24;
      checkMissing(by25);
      length7 = ldf length in base;
      r141 = dyn length7(by25);
      goto L1(by20, r141);
    L6():
      r139 = dyn base28(<sym by2>);
      goto L1(by20, r139);
    };
    p7 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r145):
      return r145;
    L1():
      c43 = ldf c in base;
      r146 = dyn c43("days", "weeks", "months", "quarters", "years");
      goto L0(r146);
    L2():
      r144 = dyn base29("days", "weeks", "months", "quarters", "years");
      goto L0(r144);
    };
    r148 = dyn pmatch(p6, p7);
    check L293() else D66();
  L369():
    from12 = force? from11;
    checkMissing(from12);
    by51 = ld by;
    check L370() else D97();
  L376():
    p9 = prom<V +>{
      to9 = ld to;
      to10 = force? to9;
      checkMissing(to10);
      return to10;
    };
    r207 = dyn as_Date5(p9);
    check L377() else D101();
  L379():
    to11 = ld to0;
    check L381() else D103();
  L380():
    r209 = dyn base42(0.0, <lang `-`(to0, from)>, <sym by>);
    goto L95(r209);
  L387():
    st res = r218;
    goto L96();
  L393():
    missing6 = ldf missing in base;
    r225 = dyn missing6(<sym to>);
    goto L98(r225);
  L394():
    r223 = dyn base44(<sym to>);
    goto L98(r223);
  L431():
    valid11 = force? valid10;
    checkMissing(valid11);
    r251 = `==`(valid11, 4);
    c63 = `as.logical`(r251);
    if c63 then L432() else L103();
  L487():
    by66 = force? by65;
    checkMissing(by66);
    r309 = `>`(by66, 0.0);
    c72 = `as.logical`(r309);
    if c72 then L488() else L112();
  D62():
    deopt 266 [c32, r135];
  D64():
    deopt 273 [r137];
  D66():
    deopt 280 [r148];
  D97():
    deopt 397 [by51];
  D101():
    deopt 411 [r207];
  D103():
    deopt 418 [to11];
  D107():
    deopt 425 [r210, from15];
  L99():
    as_POSIXlt1 = ldf `as.POSIXlt`;
    check L407() else D117();
  L101():
    yr = ld yr;
    check L423() else D123();
  L103():
    goto L104();
  L104():
    sym47 = ldf missing;
    base47 = ldf missing in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L435() else L436();
  L112():
    res10 = ld res;
    check L496() else D149();
  L114(dx36):
    st res = dx36;
    goto L115();
  L286():
    goto L63(c32, r135);
  L290():
    goto L65();
  L293():
    st valid = r148;
    sym30 = ldf `is.na`;
    base30 = ldf `is.na` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L294() else L295();
  L370():
    by52 = force? by51;
    checkMissing(by52);
    length_out13 = ld `length.out`;
    check L371() else D98();
  L377():
    unclass4 = ldf unclass in base;
    r208 = dyn unclass4(r207);
    check L378() else D102();
  L381():
    to12 = force? to11;
    checkMissing(to12);
    from13 = ld from;
    check L382() else D104();
  L385():
    from16 = force? from15;
    checkMissing(from16);
    r213 = `+`(r210, from16);
    st res = r213;
    goto L93();
  L395():
    sym45 = ldf `seq.int`;
    base45 = ldf `seq.int` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L396() else L397();
  L432():
    by59 = ld by;
    check L433() else D127();
  L488():
    res4 = ld res;
    check L489() else D146();
  D98():
    deopt 400 [length_out13];
  D102():
    deopt 413 [r208];
  D104():
    deopt 419 [to12, from13];
  D117():
    deopt 461 [];
  D123():
    deopt 478 [yr];
  D127():
    deopt 492 [by59];
  D146():
    deopt 565 [res4];
  D149():
    deopt 572 [res10];
  L66(r150):
    c44 = `as.logical`(r150);
    if c44 then L298() else L67();
  L100(r227):
    st yr = r227;
    goto L101();
  L105(r255):
    c64 = `as.logical`(r255);
    if c64 then L437() else L106();
  L294():
    valid = ld valid;
    check L296() else D67();
  L295():
    r149 = dyn base30(<sym valid>);
    goto L66(r149);
  L371():
    length_out14 = force? length_out13;
    checkMissing(length_out14);
    seq_int1 = ldf `seq.int` in base;
    r202 = dyn seq_int1(from12, by52, length_out14);
    check L372() else D99();
  L378():
    goto L94(r208);
  L382():
    from14 = force? from13;
    checkMissing(from14);
    r211 = `-`(to12, from14);
    by53 = ld by;
    check L383() else D105();
  L396():
    r228 = ld r1;
    check L398() else D113();
  L397():
    r226 = dyn base45[, by, `length.out`](<lang `$`(r1, year)>, <sym by>, <sym length.out>);
    goto L100(r226);
  L407():
    p12 = prom<V +>{
      to13 = ld to;
      to14 = force? to13;
      checkMissing(to14);
      return to14;
    };
    r236 = dyn as_POSIXlt1(p12);
    check L408() else D118();
  L423():
    yr1 = force? yr;
    checkMissing(yr1);
    l = ld r1;
    c62 = `is.object`(l);
    if c62 then L425() else L426(yr1, l);
  L433():
    by60 = force? by59;
    checkMissing(by60);
    r252 = `*`(by60, 3.0);
    st by = r252;
    goto L104();
  L435():
    missing7 = ldf missing in base;
    r256 = dyn missing7(<sym to>);
    goto L105(r256);
  L436():
    r254 = dyn base47(<sym to>);
    goto L105(r254);
  L489():
    res5 = force? res4;
    checkMissing(res5);
    c73 = `is.object`(res5);
    if c73 then L490() else L491(res5);
  L496():
    res11 = force? res10;
    checkMissing(res11);
    c74 = `is.object`(res11);
    if c74 then L497() else L498(res11);
  D67():
    deopt 284 [valid];
  D99():
    deopt 404 [r202];
  D105():
    deopt 422 [by53];
  D113():
    deopt 448 [r228];
  D118():
    deopt 463 [r236];
  L67():
    goto L68();
  L68():
    valid2 = ld valid;
    check L302() else D71();
  L106():
    as_POSIXlt2 = ldf `as.POSIXlt`;
    check L449() else D132();
  L108():
    mon = ld mon;
    check L475() else D140();
  L113(dx35):
    goto L114(dx35);
  L296():
    valid1 = force? valid;
    checkMissing(valid1);
    is_na = ldf `is.na` in base;
    r151 = dyn is_na(valid1);
    check L297() else D68();
  L298():
    stop9 = ldf stop;
    check L299() else D69();
  L372():
    goto L92(r202);
  L383():
    by54 = force? by53;
    checkMissing(by54);
    seq_int2 = ldf `seq.int` in base;
    r212 = dyn seq_int2(0.0, r211, by54);
    check L384() else D106();
  L398():
    r229 = force? r228;
    checkMissing(r229);
    c59 = `is.object`(r229);
    if c59 then L400() else L401(r229);
  L408():
    st to0 = r236;
    sym46 = ldf `seq.int`;
    base46 = ldf `seq.int` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L409() else L410();
  L424(dx17):
    st r1 = dx17;
    as_Date6 = ldf `as.Date`;
    check L428() else D124();
  L425():
    dr16 = tryDispatchBuiltin.0("$<-", l, yr1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L427() else L426(yr1, dr16);
  L426(yr3, l2):
    r246 = `$<-`(l2, <sym year>, yr1);
    goto L424(r246);
  L437():
    sym48 = ldf `seq.int`;
    base48 = ldf `seq.int` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L438() else L439();
  L490():
    dr30 = tryDispatchBuiltin.1("[", res5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L492() else L491(dr30);
  L491(res7):
    res8 = ld res;
    check L493() else D147();
  L497():
    dr32 = tryDispatchBuiltin.1("[", res11);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L499() else L498(dr32);
  L498(res13):
    res14 = ld res;
    check L500() else D150();
  D68():
    deopt 287 [r151];
  D69():
    deopt 289 [];
  D71():
    deopt 294 [valid2];
  D106():
    deopt 425 [r212];
  D124():
    deopt 484 [];
  D132():
    deopt 517 [];
  D140():
    deopt 542 [mon];
  D147():
    deopt 567 [res7, res8];
  D150():
    deopt 574 [res13, res14];
  L102(r238):
    st yr = r238;
    goto L101();
  L107(r258):
    st mon = r258;
    goto L108();
  L297():
    goto L66(r151);
  L299():
    r152 = dyn stop9("invalid string for 'by'");
    check L300() else D70();
  L302():
    valid3 = force? valid2;
    checkMissing(valid3);
    r154 = `<=`(valid3, 2);
    c45 = `as.logical`(r154);
    if c45 then L303() else L69();
  L384():
    goto L95(r212);
  L399(dx11):
    by55 = ld by;
    check L403() else D114();
  L400():
    dr10 = tryDispatchBuiltin.1("$", r229);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L402() else L401(dr10);
  L401(r231):
    r232 = `$`(r231, <sym year>);
    goto L399(r232);
  L409():
    r239 = ld r1;
    check L411() else D119();
  L410():
    r237 = dyn base46(<lang `$`(r1, year)>, <lang `$`(to0, year)>, <sym by>);
    goto L102(r237);
  L427():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L424(dx16);
  L428():
    p13 = prom<V +>{
      r247 = ld r1;
      r248 = force? r247;
      checkMissing(r248);
      return r248;
    };
    r250 = dyn as_Date6(p13);
    check L429() else D125();
  L438():
    r259 = ld r1;
    check L440() else D128();
  L439():
    r257 = dyn base48[, by, `length.out`](<lang `$`(r1, mon)>, <sym by>, <sym length.out>);
    goto L107(r257);
  L449():
    p14 = prom<V +>{
      to19 = ld to;
      to20 = force? to19;
      checkMissing(to20);
      return to20;
    };
    r267 = dyn as_POSIXlt2(p14);
    check L450() else D133();
  L475():
    mon1 = force? mon;
    checkMissing(mon1);
    l3 = ld r1;
    c70 = `is.object`(l3);
    if c70 then L477() else L478(mon1, l3);
  L492():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L113(dx34);
  L493():
    res9 = force? res8;
    checkMissing(res9);
    to31 = ld to;
    check L494() else D148();
  L499():
    dx37 = getTryDispatchBuiltinValue(dr32);
    goto L114(dx37);
  L500():
    res15 = force? res14;
    checkMissing(res15);
    to33 = ld to;
    check L501() else D151();
  D70():
    deopt 291 [r152];
  D114():
    deopt 451 [by55];
  D119():
    deopt 467 [r239];
  D125():
    deopt 486 [r250];
  D128():
    deopt 504 [r259];
  D133():
    deopt 519 [r267];
  D148():
    deopt 568 [res7, res9, to31];
  D151():
    deopt 575 [res13, res15, to33];
  L69():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L326() else L327();
  L77(r171):
    goto L57();
  L300():
    goto L68();
  L303():
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L304() else L305();
  L402():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L399(dx10);
  L403():
    by56 = force? by55;
    checkMissing(by56);
    length_out15 = ld `length.out`;
    check L404() else D115();
  L411():
    r240 = force? r239;
    checkMissing(r240);
    c60 = `is.object`(r240);
    if c60 then L413() else L414(r240);
  L429():
    st res = r250;
    goto L96();
  L440():
    r260 = force? r259;
    checkMissing(r260);
    c65 = `is.object`(r260);
    if c65 then L442() else L443(r260);
  L450():
    st to0 = r267;
    sym49 = ldf `seq.int`;
    base49 = ldf `seq.int` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L451() else L452();
  L476(dx33):
    st r1 = dx33;
    as_Date7 = ldf `as.Date`;
    check L480() else D141();
  L477():
    dr28 = tryDispatchBuiltin.0("$<-", l3, mon1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L479() else L478(mon1, dr28);
  L478(mon3, l5):
    r298 = `$<-`(l5, <sym mon>, mon1);
    goto L476(r298);
  L494():
    to32 = force? to31;
    checkMissing(to32);
    r310 = `<=`(res9, to32);
    __5 = ldf `[` in base;
    r311 = dyn __5(res7, r310);
    goto L113(r311);
  L501():
    to34 = force? to33;
    checkMissing(to34);
    r312 = `>=`(res15, to34);
    __6 = ldf `[` in base;
    r313 = dyn __6(res13, r312);
    goto L114(r313);
  D115():
    deopt 454 [length_out15];
  D141():
    deopt 548 [];
  L70(r156):
    c47 = `is.object`(r156);
    if c47 then L307() else L308(r156);
  L78(r173):
    r175 = `==`(r173, 2);
    c50 = `as.logical`(r175);
    if c50 then L330() else L79();
  L109(r269):
    st mon = r269;
    goto L108();
  L304():
    c46 = ldf c in base;
    r157 = dyn c46(1.0, 7.0);
    check L306() else D72();
  L305():
    r155 = dyn base31(1.0, 7.0);
    goto L70(r155);
  L326():
    by41 = ld by2;
    check L328() else D79();
  L327():
    r172 = dyn base34(<sym by2>);
    goto L78(r172);
  L404():
    length_out16 = force? length_out15;
    checkMissing(length_out16);
    seq_int3 = ldf `seq.int` in base;
    r233 = dyn seq_int3(dx11, by56, length_out16);
    check L405() else D116();
  L412(dx13):
    to15 = ld to0;
    check L416() else D120();
  L413():
    dr12 = tryDispatchBuiltin.1("$", r240);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L415() else L414(dr12);
  L414(r242):
    r243 = `$`(r242, <sym year>);
    goto L412(r243);
  L441(dx19):
    by61 = ld by;
    check L445() else D129();
  L442():
    dr18 = tryDispatchBuiltin.1("$", r260);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L444() else L443(dr18);
  L443(r262):
    r263 = `$`(r262, <sym mon>);
    goto L441(r263);
  L451():
    r270 = ld r1;
    check L453() else D134();
  L452():
    r268 = dyn base49(<lang `$`(r1, mon)>, <lang `+`(`*`(12.0, `(`(`-`(`$`(to0, year), `$`(r1, year)))), `$`(to0, mon))>, <sym by>);
    goto L109(r268);
  L479():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L476(dx32);
  L480():
    p15 = prom<V +>{
      r299 = ld r1;
      r300 = force? r299;
      checkMissing(r300);
      return r300;
    };
    r302 = dyn as_Date7(p15);
    check L481() else D142();
  D72():
    deopt 303 [r157];
  D79():
    deopt 332 [by41];
  D116():
    deopt 458 [r233];
  D120():
    deopt 470 [to15];
  D129():
    deopt 507 [by61];
  D134():
    deopt 523 [r270];
  D142():
    deopt 550 [r302];
  L71(dx5):
    st by = dx5;
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L311() else L312();
  L79():
    goto L82(1.0);
  L82(r180):
    st by = r180;
    goto L77(r180);
  L306():
    goto L70(r157);
  L307():
    dr4 = tryDispatchBuiltin.1("[", r156);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L309() else L308(dr4);
  L308(r159):
    valid4 = ld valid;
    check L310() else D73();
  L328():
    by42 = force? by41;
    checkMissing(by42);
    length9 = ldf length in base;
    r174 = dyn length9(by42);
    check L329() else D80();
  L330():
    sym35 = ldf `as.integer`;
    base35 = ldf `as.integer` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L331() else L332();
  L405():
    goto L100(r233);
  L415():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L412(dx12);
  L416():
    to16 = force? to15;
    checkMissing(to16);
    c61 = `is.object`(to16);
    if c61 then L418() else L419(to16);
  L444():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L441(dx18);
  L445():
    by62 = force? by61;
    checkMissing(by62);
    length_out17 = ld `length.out`;
    check L446() else D130();
  L453():
    r271 = force? r270;
    checkMissing(r271);
    c66 = `is.object`(r271);
    if c66 then L455() else L456(r271);
  L481():
    st res = r302;
    goto L96();
  D73():
    deopt 304 [r159, valid4];
  D80():
    deopt 335 [r174];
  D130():
    deopt 510 [length_out17];
  L72(r162):
    r164 = `==`(r162, 2);
    c48 = `as.logical`(r164);
    if c48 then L315() else L73();
  L80(r177):
    goto L82(r177);
  L309():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L71(dx4);
  L310():
    valid5 = force? valid4;
    __2 = ldf `[` in base;
    r160 = dyn __2(r159, valid5);
    goto L71(r160);
  L311():
    by26 = ld by2;
    check L313() else D74();
  L312():
    r161 = dyn base32(<sym by2>);
    goto L72(r161);
  L329():
    goto L78(r174);
  L331():
    by43 = ld by2;
    check L333() else D81();
  L332():
    r176 = dyn base35(<lang `[`(by2, 1)>);
    goto L80(r176);
  L417(dx15):
    by57 = ld by;
    check L421() else D121();
  L418():
    dr14 = tryDispatchBuiltin.1("$", to16);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L420() else L419(dr14);
  L419(to18):
    r244 = `$`(to18, <sym year>);
    goto L417(r244);
  L446():
    length_out18 = force? length_out17;
    checkMissing(length_out18);
    seq_int5 = ldf `seq.int` in base;
    r264 = dyn seq_int5(dx19, by62, length_out18);
    check L447() else D131();
  L454(dx21):
    to21 = ld to0;
    check L458() else D135();
  L455():
    dr20 = tryDispatchBuiltin.1("$", r271);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L457() else L456(dr20);
  L456(r273):
    r274 = `$`(r273, <sym mon>);
    goto L454(r274);
  D74():
    deopt 310 [by26];
  D81():
    deopt 340 [by43];
  D121():
    deopt 473 [by57];
  D131():
    deopt 514 [r264];
  D135():
    deopt 527 [12.0, to21];
  L73():
    goto L76(NULL);
  L76(r170):
    goto L77(r170);
  L313():
    by27 = force? by26;
    checkMissing(by27);
    length8 = ldf length in base;
    r163 = dyn length8(by27);
    check L314() else D75();
  L315():
    by28 = ld by;
    check L316() else D76();
  L333():
    by44 = force? by43;
    checkMissing(by44);
    c51 = `is.object`(by44);
    if c51 then L334() else L335(by44);
  L420():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L417(dx14);
  L421():
    by58 = force? by57;
    checkMissing(by58);
    seq_int4 = ldf `seq.int` in base;
    r245 = dyn seq_int4(dx13, dx15, by58);
    check L422() else D122();
  L447():
    goto L107(r264);
  L457():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L454(dx20);
  L458():
    to22 = force? to21;
    checkMissing(to22);
    c67 = `is.object`(to22);
    if c67 then L460() else L461(12.0, to22);
  D75():
    deopt 313 [r163];
  D76():
    deopt 316 [by28];
  D122():
    deopt 476 [r245];
  L81(dx9):
    as_integer1 = ldf `as.integer` in base;
    r179 = dyn as_integer1(dx9);
    check L337() else D82();
  L314():
    goto L72(r163);
  L316():
    by29 = force? by28;
    checkMissing(by29);
    sym33 = ldf `as.integer`;
    base33 = ldf `as.integer` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L317() else L318();
  L334():
    dr8 = tryDispatchBuiltin.1("[", by44);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L336() else L335(dr8);
  L335(by46):
    __4 = ldf `[` in base;
    r178 = dyn __4(by46, 1);
    goto L81(r178);
  L422():
    goto L102(r245);
  L459(r278, dx23):
    r280 = ld r1;
    check L463() else D136();
  L460():
    dr22 = tryDispatchBuiltin.1("$", to22);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L462() else L461(12.0, dr22);
  L461(r276, to24):
    r279 = `$`(to24, <sym year>);
    goto L459(r276, r279);
  D82():
    deopt 346 [r179];
  D136():
    deopt 529 [r278, dx23, r280];
  L74(by32, r166):
    r169 = `*`(by32, r166);
    st by = r169;
    goto L76(r169);
  L317():
    by33 = ld by2;
    check L319() else D77();
  L318():
    r165 = dyn base33(<lang `[`(by2, 1)>);
    goto L74(by29, r165);
  L336():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L81(dx8);
  L337():
    goto L80(r179);
  L462():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L459(12.0, dx22);
  L463():
    r281 = force? r280;
    checkMissing(r281);
    c68 = `is.object`(r281);
    if c68 then L465() else L466(r278, dx23, r281);
  D77():
    deopt 319 [by29, by33];
  L319():
    by34 = force? by33;
    checkMissing(by34);
    c49 = `is.object`(by34);
    if c49 then L320() else L321(by29, by34);
  L464(r287, dx28, dx29):
    r289 = `-`(dx28, dx29);
    r290 = `*`(r287, r289);
    to25 = ld to0;
    check L468() else D137();
  L465():
    dr24 = tryDispatchBuiltin.1("$", r281);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L467() else L466(r278, dx23, dr24);
  L466(r284, dx25, r285):
    r288 = `$`(r285, <sym year>);
    goto L464(r284, dx25, r288);
  D137():
    deopt 533 [r290, to25];
  L75(by40, dx7):
    as_integer = ldf `as.integer` in base;
    r168 = dyn as_integer(dx7);
    check L323() else D78();
  L320():
    dr6 = tryDispatchBuiltin.1("[", by34);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L322() else L321(by29, dr6);
  L321(by37, by38):
    __3 = ldf `[` in base;
    r167 = dyn __3(by38, 1);
    goto L75(by37, r167);
  L467():
    dx27 = getTryDispatchBuiltinValue(dr24);
    goto L464(r278, dx23, dx27);
  L468():
    to26 = force? to25;
    checkMissing(to26);
    c69 = `is.object`(to26);
    if c69 then L470() else L471(r290, to26);
  D78():
    deopt 325 [by40, r168];
  L322():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L75(by29, dx6);
  L323():
    goto L74(by40, r168);
  L469(r294, dx31):
    r296 = `+`(r294, dx31);
    by63 = ld by;
    check L473() else D138();
  L470():
    dr26 = tryDispatchBuiltin.1("$", to26);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L472() else L471(r290, dr26);
  L471(r292, to28):
    r295 = `$`(to28, <sym mon>);
    goto L469(r292, r295);
  D138():
    deopt 537 [by63];
  L472():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L469(r290, dx30);
  L473():
    by64 = force? by63;
    checkMissing(by64);
    seq_int6 = ldf `seq.int` in base;
    r297 = dyn seq_int6(dx21, r296, by64);
    check L474() else D139();
  D139():
    deopt 540 [r297];
  L474():
    goto L109(r297);
  }
}