fun main() {
  () -+> V { reg r:cls, reg seq:cls, reg ISOdate:cls, reg r1:V, reg p:p(V +), reg ISOdate1:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg seq1:cls, reg ISOdate2:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg seq2:cls, reg ISOdate3:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg seq3:cls, reg ISOdate4:cls, reg r12:V, reg p4:p(V +), reg ISOdate5:cls, reg r14:V, reg p5:p(V +), reg r16:V, reg seq4:cls, reg sym:cls, reg base:cls, reg guard:L, reg r17:V, reg r18:V, reg ISOdate6:cls, reg r19:V, reg c:cls, reg r20:V, reg p6:p(V +), reg r22:V, reg seq5:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg ISOdate7:cls, reg r25:V, reg c1:cls, reg r26:V, reg p7:p(V +), reg r28:V, reg seq6:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg ISOdate8:cls, reg r31:V, reg c2:cls, reg r32:V, reg p8:p(V +), reg r34:V |
    mkenv;
    r = clos inner303251908;
    st `seq.POSIXt` = r;
    seq = ldf seq;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      ISOdate = ldf ISOdate;
      r1 = dyn ISOdate(1910.0, 1.0, 1.0);
      return r1;
    };
    p1 = prom<V +>{
      ISOdate1 = ldf ISOdate;
      r3 = dyn ISOdate1(1999.0, 1.0, 1.0);
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
      ISOdate2 = ldf ISOdate;
      r6 = dyn ISOdate2(2000.0, 1.0, 1.0);
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
      ISOdate3 = ldf ISOdate;
      r9 = dyn ISOdate3(2000.0, 1.0, 31.0);
      return r9;
    };
    r11 = dyn seq2[, by, `length.out`](p3, "month", 4.0);
    check L5() else D5();
  D5():
    deopt 24 [r11];
  L5():
    seq3 = ldf seq;
    check L6() else D6();
  D6():
    deopt 26 [];
  L6():
    p4 = prom<V +>{
      ISOdate4 = ldf ISOdate;
      r12 = dyn ISOdate4(1990.0, 1.0, 1.0);
      return r12;
    };
    p5 = prom<V +>{
      ISOdate5 = ldf ISOdate;
      r14 = dyn ISOdate5(2000.0, 1.0, 1.0);
      return r14;
    };
    r16 = dyn seq3[, , by](p4, p5, "quarter");
    check L7() else D7();
  D7():
    deopt 31 [r16];
  L7():
    seq4 = ldf seq;
    check L8() else D8();
  D8():
    deopt 33 [];
  L8():
    p6 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r18):
      return r18;
    L1():
      ISOdate6 = ldf ISOdate;
      r19 = dyn ISOdate6(2000.0, 3.0, 20.0);
      c = ldf c in base;
      r20 = dyn c(r19);
      goto L0(r20);
    L2():
      r17 = dyn base(<lang ISOdate(2000.0, 3.0, 20.0)>);
      goto L0(r17);
    };
    r22 = dyn seq4[, by, `length.out`](p6, "day", 10.0);
    check L9() else D9();
  D9():
    deopt 39 [r22];
  L9():
    seq5 = ldf seq;
    check L10() else D10();
  D10():
    deopt 41 [];
  L10():
    p7 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      ISOdate7 = ldf ISOdate;
      r25 = dyn ISOdate7(2000.0, 3.0, 20.0);
      c1 = ldf c in base;
      r26 = dyn c1(r25);
      goto L0(r26);
    L2():
      r23 = dyn base1(<lang ISOdate(2000.0, 3.0, 20.0)>);
      goto L0(r23);
    };
    r28 = dyn seq5[, by, `length.out`](p7, "DSTday", 10.0);
    check L11() else D11();
  D11():
    deopt 47 [r28];
  L11():
    seq6 = ldf seq;
    check L12() else D12();
  D12():
    deopt 49 [];
  L12():
    p8 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      ISOdate8 = ldf ISOdate;
      r31 = dyn ISOdate8(2000.0, 3.0, 20.0);
      c2 = ldf c in base;
      r32 = dyn c2(r31);
      goto L0(r32);
    L2():
      r29 = dyn base2(<lang ISOdate(2000.0, 3.0, 20.0)>);
      goto L0(r29);
    };
    r34 = dyn seq6[, by, `length.out`](p8, "7 DSTdays", 4.0);
    check L13() else D13();
  D13():
    deopt 55 [r34];
  L13():
    popenv;
    return r34;
  }
}
fun inner303251908(from, to, by, `length.out`, `along.with`, `...`) {
  (reg from:*, reg to:*, reg by:*, reg length_out:*, reg along_with:*, reg ddd:dots) -+> V { var from:*, var to:*, var by:*, var `length.out`:*, reg length_out_isMissing:L, reg length_out_orDefault:*, var `along.with`:*, reg along_with_isMissing:L, reg along_with_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg from1:*, reg from2:V, reg inherits:cls, reg r7:V, reg r8:V, reg c1:L, reg stop1:cls, reg r9:V, reg as_POSIXct:cls, reg from3:*, reg from4:V, reg p:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg cfrom:*, reg cfrom1:V, reg length:cls, reg r15:V, reg r16:V, reg c2:L, reg stop2:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg cfrom2:*, reg cfrom3:V, reg attr:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg missing1:cls, reg r24:V, reg r25:V, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg to1:*, reg to2:V, reg inherits1:cls, reg r28:V, reg r29:V, reg c4:L, reg stop3:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg as_POSIXct1:cls, reg to3:*, reg to4:V, reg p1:p(V +), reg r35:V, reg length1:cls, reg r36:V, reg r37:V, reg c5:L, reg stop4:cls, reg r38:V, reg r39:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg missing2:cls, reg r43:V, reg r44:V, reg c6:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg along_with1:*, reg along_with2:V, reg length2:cls, reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg length_out1:*, reg length_out2:V, reg c7:V, reg r51:V, reg c8:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg r53:V, reg length_out3:*, reg length_out4:V, reg length3:cls, reg r54:V, reg r55:V, reg c9:L, reg stop5:cls, reg r56:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg length_out5:*, reg length_out6:V, reg r60:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg r62:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r63:V, reg r64:V, reg missing3:cls, reg r65:V, reg r66:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r67:V, reg r68:V, reg missing4:cls, reg r69:V, reg r70:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r71:V, reg r72:V, reg length_out7:*, reg length_out8:V, reg c10:V, reg r73:V, reg c11:cls, reg r74:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r75:V, reg r76:V, reg status:*, reg status1:V, reg sum:cls, reg r77:V, reg r78:V, reg c12:L, reg stop6:cls, reg r79:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r81:V, reg r82:V, reg missing5:cls, reg r83:V, reg c13:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r84:V, reg r85:V, reg cfrom4:*, reg cfrom5:V, reg unclass:cls, reg r86:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r87:V, reg r88:V, reg as_POSIXct2:cls, reg to5:*, reg to6:V, reg p2:p(V +), reg r90:V, reg unclass1:cls, reg r91:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r92:V, reg r93:V, reg from5:*, reg from6:V, reg to7:*, reg to8:V, reg length_out9:*, reg length_out10:V, reg seq_int:cls, reg r94:V, reg _POSIXct:cls, reg res:*, reg res1:V, reg p3:p(V +), reg tz:*, reg tz1:V, reg p4:p(V +), reg r97:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r100:V, reg r101:V, reg by1:*, reg by2:V, reg length4:cls, reg r102:V, reg r103:V, reg c14:L, reg stop7:cls, reg r104:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r106:V, reg r107:V, reg by3:*, reg by4:V, reg inherits2:cls, reg r108:V, reg c15:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r109:V, reg r110:V, reg by5:*, reg by6:V, reg attr1:cls, reg r111:V, reg c16:L, reg c17:L, reg c18:L, reg c19:L, reg c20:L, reg c21:L, reg c22:L, reg c23:L, reg i_ddd:dots, reg i:V, reg c24:L, reg c25:L, reg c26:L, reg c27:L, reg c28:L, reg r112:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r115:V, reg r116:V, reg r117:V, reg by7:*, reg by8:V, reg unclass2:cls, reg r118:V, reg r119:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r121:V, reg r122:V, reg by9:*, reg by10:V, reg c29:L, reg c30:L, reg strsplit:cls, reg by11:*, reg by12:V, reg p5:p(V +), reg r124:V, reg c31:L, reg r126:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r127:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r128:V, reg r129:V, reg by13:*, reg by14:V, reg length5:cls, reg r130:V, reg r131:V, reg c32:L, reg c33:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r132:V, reg c37:L, reg r133:V, reg by15:*, reg by16:V, reg length6:cls, reg r134:V, reg r135:V, reg c38:L, reg c39:V, reg c41:L, reg stop8:cls, reg r136:V, reg pmatch:cls, reg by17:*, reg by18:V, reg c42:L, reg by20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r138:V, reg by23:V, reg r139:V, reg by24:*, reg by25:V, reg length7:cls, reg r140:V, reg __1:cls, reg r141:V, reg p6:p(V +), reg sym29:cls, reg base29:cls, reg guard29:L, reg r143:V, reg r144:V, reg c43:cls, reg r145:V, reg p7:p(V +), reg r147:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r148:V, reg r149:V, reg valid:*, reg valid1:V, reg is_na:cls, reg r150:V, reg c44:L, reg stop9:cls, reg r151:V, reg valid2:*, reg valid3:V, reg r153:V, reg c45:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r154:V, reg r155:V, reg c46:cls, reg r156:V, reg c47:L, reg r158:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg valid4:*, reg valid5:V, reg __2:cls, reg r159:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r160:V, reg r161:V, reg by26:*, reg by27:V, reg length8:cls, reg r162:V, reg r163:V, reg c48:L, reg by28:*, reg by29:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r164:V, reg by32:V, reg r165:V, reg by33:*, reg by34:V, reg c49:L, reg by37:V, reg by38:V, reg dr6:V, reg dc3:L, reg dx6:V, reg by40:V, reg dx7:V, reg __3:cls, reg r166:V, reg as_integer:cls, reg r167:V, reg r168:V, reg r169:V, reg r170:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r171:V, reg r172:V, reg by41:*, reg by42:V, reg length9:cls, reg r173:V, reg r174:V, reg c50:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r175:V, reg r176:V, reg by43:*, reg by44:V, reg c51:L, reg by46:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r177:V, reg as_integer1:cls, reg r178:V, reg r179:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r180:V, reg r181:V, reg by47:*, reg by48:V, reg is_numeric:cls, reg r182:V, reg r183:V, reg c52:L, reg stop10:cls, reg r184:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r185:V, reg r186:V, reg by49:*, reg by50:V, reg is_na1:cls, reg r187:V, reg c53:L, reg stop11:cls, reg r188:V, reg valid6:*, reg valid7:V, reg r190:V, reg c54:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r191:V, reg r192:V, reg as_POSIXct3:cls, reg from7:*, reg from8:V, reg p8:p(V +), reg r194:V, reg unclass3:cls, reg r195:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r196:V, reg r197:V, reg length_out11:*, reg length_out12:V, reg c55:V, reg r198:V, reg c56:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r199:V, reg r200:V, reg from9:*, reg from10:V, reg by51:*, reg by52:V, reg length_out13:*, reg length_out14:V, reg seq_int1:cls, reg r201:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r203:V, reg r204:V, reg as_POSIXct4:cls, reg to9:*, reg to10:V, reg p9:p(V +), reg r206:V, reg unclass4:cls, reg r207:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r208:V, reg r209:V, reg to11:*, reg to12:V, reg from11:*, reg from12:V, reg r210:V, reg by53:*, reg by54:V, reg seq_int2:cls, reg r211:V, reg from13:*, reg from14:V, reg r212:V, reg _POSIXct1:cls, reg res2:*, reg res3:V, reg p10:p(V +), reg tz2:*, reg tz3:V, reg p11:p(V +), reg r215:V, reg as_POSIXlt:cls, reg from15:*, reg from16:V, reg p12:p(V +), reg r217:V, reg valid8:*, reg valid9:V, reg r218:V, reg c57:L, reg sym43:cls, reg base43:cls, reg guard43:L, reg r219:V, reg r220:V, reg missing6:cls, reg r221:V, reg c58:L, reg sym44:cls, reg base44:cls, reg guard44:L, reg r222:V, reg r223:V, reg r224:*, reg r225:V, reg c59:L, reg r227:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r228:V, reg by55:*, reg by56:V, reg length_out15:*, reg length_out16:V, reg seq_int3:cls, reg r229:V, reg as_POSIXlt1:cls, reg to13:*, reg to14:V, reg p13:p(V +), reg r232:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r233:V, reg r234:V, reg r235:*, reg r236:V, reg c60:L, reg r238:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r239:V, reg to15:*, reg to16:V, reg c61:L, reg to18:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r240:V, reg by57:*, reg by58:V, reg seq_int4:cls, reg r241:V, reg yr:*, reg yr1:V, reg l:*, reg c62:L, reg yr3:V, reg l2:*, reg dr16:V, reg dc8:L, reg dx16:V, reg yr5:V, reg dx17:V, reg r242:V, reg _in_:cls, reg valid10:*, reg valid11:V, reg p14:p(V +), reg sym46:cls, reg base46:cls, reg guard46:L, reg r244:V, reg r245:V, reg c63:cls, reg r246:V, reg p15:p(V +), reg r248:V, reg c64:L, reg valid12:*, reg valid13:V, reg r249:V, reg c65:L, reg by59:*, reg by60:V, reg r250:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r252:V, reg r253:V, reg missing7:cls, reg r254:V, reg c66:L, reg sym48:cls, reg base48:cls, reg guard48:L, reg r255:V, reg r256:V, reg r257:*, reg r258:V, reg c67:L, reg r260:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r261:V, reg by61:*, reg by62:V, reg length_out17:*, reg length_out18:V, reg seq_int5:cls, reg r262:V, reg as_POSIXlt2:cls, reg to19:*, reg to20:V, reg p16:p(V +), reg r265:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r266:V, reg r267:V, reg r268:*, reg r269:V, reg c68:L, reg r271:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r272:V, reg to21:*, reg to22:V, reg c69:L, reg r274:R, reg to24:V, reg dr22:V, reg dc11:L, reg dx22:V, reg r276:R, reg dx23:V, reg r277:V, reg r278:*, reg r279:V, reg c70:L, reg r282:R, reg dx25:V, reg r283:V, reg dr24:V, reg dc12:L, reg dx27:V, reg r285:R, reg dx28:V, reg dx29:V, reg r286:V, reg r287:V, reg r288:V, reg to25:*, reg to26:V, reg c71:L, reg r290:V, reg to28:V, reg dr26:V, reg dc13:L, reg dx30:V, reg r292:V, reg dx31:V, reg r293:V, reg r294:V, reg by63:*, reg by64:V, reg seq_int6:cls, reg r295:V, reg mon:*, reg mon1:V, reg l3:*, reg c72:L, reg mon3:V, reg l5:*, reg dr28:V, reg dc14:L, reg dx32:V, reg mon5:V, reg dx33:V, reg r296:V, reg valid14:*, reg valid15:V, reg r297:V, reg c73:L, reg sym50:cls, reg base50:cls, reg guard50:L, reg r298:V, reg r299:V, reg missing8:cls, reg r300:V, reg r301:V, reg c74:L, reg sym51:cls, reg base51:cls, reg guard51:L, reg r304:V, reg r305:I, reg r306:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r309:V, reg r310:I, reg r311:V, reg as_POSIXct5:cls, reg to29:*, reg to30:V, reg p17:p(V +), reg r313:V, reg unclass5:cls, reg r314:V, reg sym53:cls, reg base53:cls, reg guard53:L, reg r319:V, reg r320:I, reg r321:V, reg r322:V, reg as_POSIXct6:cls, reg from17:*, reg from18:V, reg p18:p(V +), reg r324:V, reg unclass6:cls, reg r325:V, reg r326:V, reg by65:*, reg by66:V, reg r327:V, reg r328:V, reg r329:V, reg r330:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r332:V, reg r333:V, reg r334:*, reg r335:V, reg c75:L, reg r337:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r338:V, reg by67:*, reg by68:V, reg length_out19:*, reg length_out20:V, reg seq_int7:cls, reg r339:V, reg l6:*, reg c76:L, reg r341:V, reg l8:*, reg dr32:V, reg dc16:L, reg dx36:V, reg r343:V, reg dx37:V, reg r344:V, reg l9:*, reg c77:L, reg r346:I, reg l11:*, reg dr34:V, reg dc17:L, reg dx38:V, reg dx39:V, reg r349:V, reg as_POSIXct7:cls, reg r350:*, reg r351:V, reg p19:p(V +), reg r353:V, reg sym55:cls, reg base55:cls, reg guard55:L, reg r354:V, reg r355:V, reg missing9:cls, reg r356:V, reg r357:V, reg c78:L, reg as_POSIXct8:cls, reg to31:*, reg to32:V, reg p20:p(V +), reg r359:V, reg by69:*, reg by70:V, reg r360:V, reg c79:L, reg res4:*, reg res5:V, reg c80:L, reg res7:V, reg dr36:V, reg dc18:L, reg dx40:V, reg dx41:V, reg res8:*, reg res9:V, reg to33:*, reg to34:V, reg r361:V, reg __5:cls, reg r362:V, reg dx42:V, reg res10:*, reg res11:V, reg c81:L, reg res13:V, reg dr38:V, reg dc19:L, reg dx43:V, reg res14:*, reg res15:V, reg to35:*, reg to36:V, reg r363:V, reg __6:cls, reg r364:V, reg res16:*, reg res17:V |
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
    if guard then L126() else L127();
  L2(r1):
    c = `as.logical`(r1);
    if c then L128() else L3();
  L126():
    missing = ldf missing in base;
    r2 = dyn missing(<sym from>);
    goto L2(r2);
  L127():
    r = dyn base(<sym from>);
    goto L2(r);
  L3():
    goto L4();
  L4():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L132() else L133();
  L128():
    stop = ldf stop;
    check L129() else D0();
  D0():
    deopt 4 [];
  L5(r6):
    r8 = `!`(r6);
    c1 = `as.logical`(r8);
    if c1 then L136() else L6();
  L129():
    r3 = dyn stop("'from' must be specified");
    check L130() else D1();
  L132():
    from1 = ld from;
    check L134() else D2();
  L133():
    r5 = dyn base1(<sym from>, "POSIXt");
    goto L5(r5);
  D1():
    deopt 6 [r3];
  D2():
    deopt 11 [from1];
  L6():
    goto L7();
  L7():
    as_POSIXct = ldf `as.POSIXct`;
    check L140() else D6();
  L130():
    goto L4();
  L134():
    from2 = force? from1;
    checkMissing(from2);
    inherits = ldf inherits in base;
    r7 = dyn inherits(from2, "POSIXt", FALSE);
    check L135() else D3();
  L136():
    stop1 = ldf stop;
    check L137() else D4();
  D3():
    deopt 16 [r7];
  D4():
    deopt 19 [];
  D6():
    deopt 25 [];
  L135():
    goto L5(r7);
  L137():
    r9 = dyn stop1("'from' must be a \"POSIXt\" object");
    check L138() else D5();
  L140():
    p = prom<V +>{
      from3 = ld from;
      from4 = force? from3;
      checkMissing(from4);
      return from4;
    };
    r12 = dyn as_POSIXct(p);
    check L141() else D7();
  D5():
    deopt 21 [r9];
  D7():
    deopt 27 [r12];
  L138():
    goto L7();
  L141():
    st cfrom = r12;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L142() else L143();
  L8(r14):
    r16 = `!=`(r14, 1);
    c2 = `as.logical`(r16);
    if c2 then L146() else L9();
  L142():
    cfrom = ld cfrom;
    check L144() else D8();
  L143():
    r13 = dyn base2(<sym cfrom>);
    goto L8(r13);
  D8():
    deopt 31 [cfrom];
  L9():
    goto L10();
  L10():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L150() else L151();
  L144():
    cfrom1 = force? cfrom;
    checkMissing(cfrom1);
    length = ldf length in base;
    r15 = dyn length(cfrom1);
    check L145() else D9();
  L146():
    stop2 = ldf stop;
    check L147() else D10();
  D9():
    deopt 34 [r15];
  D10():
    deopt 38 [];
  L11(r20):
    st tz = r20;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L154() else L155();
  L145():
    goto L8(r15);
  L147():
    r17 = dyn stop2("'from' must be of length 1");
    check L148() else D11();
  L150():
    cfrom2 = ld cfrom;
    check L152() else D12();
  L151():
    r19 = dyn base3(<sym cfrom>, "tzone");
    goto L11(r19);
  D11():
    deopt 40 [r17];
  D12():
    deopt 45 [cfrom2];
  L12(r23):
    r25 = `!`(r23);
    c3 = `as.logical`(r25);
    if c3 then L156() else L13();
  L148():
    goto L10();
  L152():
    cfrom3 = force? cfrom2;
    checkMissing(cfrom3);
    attr = ldf attr in base;
    r21 = dyn attr(cfrom3, "tzone");
    check L153() else D13();
  L154():
    missing1 = ldf missing in base;
    r24 = dyn missing1(<sym to>);
    goto L12(r24);
  L155():
    r22 = dyn base4(<sym to>);
    goto L12(r22);
  D13():
    deopt 49 [r21];
  L13():
    goto L20();
  L20():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L175() else L176();
  L153():
    goto L11(r21);
  L156():
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L157() else L158();
  L14(r27):
    r29 = `!`(r27);
    c4 = `as.logical`(r29);
    if c4 then L161() else L15();
  L21(r42):
    r44 = `!`(r42);
    c6 = `as.logical`(r44);
    if c6 then L177() else L22();
  L157():
    to1 = ld to;
    check L159() else D14();
  L158():
    r26 = dyn base5(<sym to>, "POSIXt");
    goto L14(r26);
  L175():
    missing2 = ldf missing in base;
    r43 = dyn missing2(<sym along.with>);
    goto L21(r43);
  L176():
    r41 = dyn base7(<sym along.with>);
    goto L21(r41);
  D14():
    deopt 57 [to1];
  L15():
    goto L16();
  L16():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L165() else L166();
  L22():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L183() else L184();
  L24():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L199() else L200();
  L159():
    to2 = force? to1;
    checkMissing(to2);
    inherits1 = ldf inherits in base;
    r28 = dyn inherits1(to2, "POSIXt", FALSE);
    check L160() else D15();
  L161():
    stop3 = ldf stop;
    check L162() else D16();
  L177():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L178() else L179();
  D15():
    deopt 62 [r28];
  D16():
    deopt 65 [];
  L17(r33):
    r37 = `!=`(r33, 1.0);
    c5 = `as.logical`(r37);
    if c5 then L170() else L18();
  L23(r46):
    st `length.out` = r46;
    goto L24();
  L25(r50):
    r51 = `!`(r50);
    c8 = `as.logical`(r51);
    if c8 then L186() else L26();
  L31(r62):
    st status = r62;
    sym16 = ldf sum;
    base16 = ldf sum in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L209() else L210();
  L160():
    goto L14(r28);
  L162():
    r30 = dyn stop3("'to' must be a \"POSIXt\" object");
    check L163() else D17();
  L165():
    as_POSIXct1 = ldf `as.POSIXct`;
    check L167() else D18();
  L166():
    r32 = dyn base6(<lang as.POSIXct(to)>);
    goto L17(r32);
  L178():
    along_with1 = ld `along.with`;
    check L180() else D23();
  L179():
    r45 = dyn base8(<sym along.with>);
    goto L23(r45);
  L183():
    length_out1 = ld `length.out`;
    check L185() else D25();
  L184():
    r49 = dyn base9(<sym length.out>);
    goto L25(r49);
  L199():
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L201() else L202();
  L200():
    r61 = dyn base12(<lang `!`(missing(to))>, <lang `!`(missing(by))>, <lang `!`(is.null(length.out))>);
    goto L31(r61);
  D17():
    deopt 67 [r30];
  D18():
    deopt 73 [];
  D23():
    deopt 94 [along_with1];
  D25():
    deopt 100 [length_out1];
  L18():
    goto L19(NULL);
  L19(r39):
    goto L20();
  L26():
    goto L24();
  L32(r64):
    r66 = `!`(r64);
    sym14 = ldf missing;
    base14 = ldf missing in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L203() else L204();
  L35(r76):
    r78 = `!=`(r76, 2);
    c12 = `as.logical`(r78);
    if c12 then L213() else L36();
  L163():
    goto L16();
  L167():
    p1 = prom<V +>{
      to3 = ld to;
      to4 = force? to3;
      checkMissing(to4);
      return to4;
    };
    r35 = dyn as_POSIXct1(p1);
    check L168() else D19();
  L170():
    stop4 = ldf stop;
    check L171() else D21();
  L180():
    along_with2 = force? along_with1;
    checkMissing(along_with2);
    length2 = ldf length in base;
    r47 = dyn length2(along_with2);
    check L181() else D24();
  L185():
    length_out2 = force? length_out1;
    checkMissing(length_out2);
    c7 = `==`(length_out2, NULL);
    goto L25(c7);
  L186():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L187() else L188();
  L201():
    missing3 = ldf missing in base;
    r65 = dyn missing3(<sym to>);
    goto L32(r65);
  L202():
    r63 = dyn base13(<sym to>);
    goto L32(r63);
  L209():
    status = ld status;
    check L211() else D33();
  L210():
    r75 = dyn base16(<sym status>);
    goto L35(r75);
  D19():
    deopt 75 [r35];
  D21():
    deopt 81 [];
  D24():
    deopt 97 [r47];
  D33():
    deopt 145 [status];
  L27(r53):
    r55 = `!=`(r53, 1);
    c9 = `as.logical`(r55);
    if c9 then L191() else L28();
  L33(r68):
    r70 = `!`(r68);
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L205() else L206();
  L36():
    goto L37();
  L37():
    sym17 = ldf missing;
    base17 = ldf missing in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L217() else L218();
  L168():
    length1 = ldf length in base;
    r36 = dyn length1(r35);
    check L169() else D20();
  L171():
    r38 = dyn stop4("'to' must be of length 1");
    check L172() else D22();
  L181():
    goto L23(r47);
  L187():
    length_out3 = ld `length.out`;
    check L189() else D26();
  L188():
    r52 = dyn base10(<sym length.out>);
    goto L27(r52);
  L203():
    missing4 = ldf missing in base;
    r69 = dyn missing4(<sym by>);
    goto L33(r69);
  L204():
    r67 = dyn base14(<sym by>);
    goto L33(r67);
  L211():
    status1 = force? status;
    checkMissing(status1);
    sum = ldf sum in base;
    r77 = dyn sum(status1);
    check L212() else D34();
  L213():
    stop6 = ldf stop;
    check L214() else D35();
  D20():
    deopt 77 [r36];
  D22():
    deopt 83 [r38];
  D26():
    deopt 106 [length_out3];
  D34():
    deopt 148 [r77];
  D35():
    deopt 152 [];
  L28():
    goto L29();
  L29():
    sym11 = ldf ceiling;
    base11 = ldf ceiling in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L195() else L196();
  L34(r72):
    r73 = `!`(r72);
    c11 = ldf c in base;
    r74 = dyn c11(r66, r70, r73);
    check L208() else D32();
  L38(r82):
    c13 = `as.logical`(r82);
    if c13 then L219() else L39();
  L169():
    goto L17(r36);
  L172():
    goto L19(r38);
  L189():
    length_out4 = force? length_out3;
    checkMissing(length_out4);
    length3 = ldf length in base;
    r54 = dyn length3(length_out4);
    check L190() else D27();
  L191():
    stop5 = ldf stop;
    check L192() else D28();
  L205():
    length_out7 = ld `length.out`;
    check L207() else D31();
  L206():
    r71 = dyn base15(<sym length.out>);
    goto L34(r71);
  L212():
    goto L35(r77);
  L214():
    r79 = dyn stop6("exactly two of 'to', 'by' and 'length.out' / 'along.with' must be specified");
    check L215() else D36();
  L217():
    missing5 = ldf missing in base;
    r83 = dyn missing5(<sym by>);
    goto L38(r83);
  L218():
    r81 = dyn base17(<sym by>);
    goto L38(r81);
  D27():
    deopt 109 [r54];
  D28():
    deopt 113 [];
  D31():
    deopt 136 [length_out7];
  D32():
    deopt 141 [r74];
  D36():
    deopt 154 [r79];
  L30(r59):
    st `length.out` = r59;
    goto L24();
  L39():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L239() else L240();
  L190():
    goto L27(r54);
  L192():
    r56 = dyn stop5("'length.out' must be of length 1");
    check L193() else D29();
  L195():
    length_out5 = ld `length.out`;
    check L197() else D30();
  L196():
    r58 = dyn base11(<sym length.out>);
    goto L30(r58);
  L207():
    length_out8 = force? length_out7;
    checkMissing(length_out8);
    c10 = `==`(length_out8, NULL);
    goto L34(c10);
  L208():
    goto L31(r74);
  L215():
    goto L37();
  L219():
    sym18 = ldf unclass;
    base18 = ldf unclass in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L220() else L221();
  D29():
    deopt 115 [r56];
  D30():
    deopt 119 [length_out5];
  L40(r85):
    st from = r85;
    sym19 = ldf unclass;
    base19 = ldf unclass in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L224() else L225();
  L44(r101):
    r103 = `!=`(r101, 1);
    c14 = `as.logical`(r103);
    if c14 then L243() else L45();
  L193():
    goto L29();
  L197():
    length_out6 = force? length_out5;
    checkMissing(length_out6);
    r60 = ceiling(length_out6);
    goto L30(r60);
  L220():
    cfrom4 = ld cfrom;
    check L222() else D37();
  L221():
    r84 = dyn base18(<sym cfrom>);
    goto L40(r84);
  L239():
    by1 = ld by;
    check L241() else D48();
  L240():
    r100 = dyn base21(<sym by>);
    goto L44(r100);
  D37():
    deopt 162 [cfrom4];
  D48():
    deopt 198 [by1];
  L41(r88):
    st to = r88;
    sym20 = ldf `seq.int`;
    base20 = ldf `seq.int` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L229() else L230();
  L45():
    goto L46();
  L46():
    st valid = 0;
    sym22 = ldf inherits;
    base22 = ldf inherits in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L247() else L248();
  L222():
    cfrom5 = force? cfrom4;
    checkMissing(cfrom5);
    unclass = ldf unclass in base;
    r86 = dyn unclass(cfrom5);
    check L223() else D38();
  L224():
    as_POSIXct2 = ldf `as.POSIXct`;
    check L226() else D39();
  L225():
    r87 = dyn base19(<lang as.POSIXct(to)>);
    goto L41(r87);
  L241():
    by2 = force? by1;
    checkMissing(by2);
    length4 = ldf length in base;
    r102 = dyn length4(by2);
    check L242() else D49();
  L243():
    stop7 = ldf stop;
    check L244() else D50();
  D38():
    deopt 165 [r86];
  D39():
    deopt 170 [];
  D49():
    deopt 201 [r102];
  D50():
    deopt 205 [];
  L42(r93):
    st res = r93;
    _POSIXct = ldf `.POSIXct`;
    check L235() else D46();
  L47(r107):
    c15 = `as.logical`(r107);
    if c15 then L251() else L48();
  L223():
    goto L40(r86);
  L226():
    p2 = prom<V +>{
      to5 = ld to;
      to6 = force? to5;
      checkMissing(to6);
      return to6;
    };
    r90 = dyn as_POSIXct2(p2);
    check L227() else D40();
  L229():
    from5 = ld from;
    check L231() else D42();
  L230():
    r92 = dyn base20[, , `length.out`](<sym from>, <sym to>, <sym length.out>);
    goto L42(r92);
  L242():
    goto L44(r102);
  L244():
    r104 = dyn stop7("'by' must be of length 1");
    check L245() else D51();
  L247():
    by3 = ld by;
    check L249() else D52();
  L248():
    r106 = dyn base22(<sym by>, "difftime");
    goto L47(r106);
  D40():
    deopt 172 [r90];
  D42():
    deopt 178 [from5];
  D46():
    deopt 189 [];
  D51():
    deopt 207 [r104];
  D52():
    deopt 215 [by3];
  L48():
    sym25 = ldf `is.character`;
    base25 = ldf `is.character` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L283() else L284();
  L58():
    sym37 = ldf `is.na`;
    base37 = ldf `is.na` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L362() else L363();
  L227():
    unclass1 = ldf unclass in base;
    r91 = dyn unclass1(r90);
    check L228() else D41();
  L231():
    from6 = force? from5;
    checkMissing(from6);
    to7 = ld to;
    check L232() else D43();
  L235():
    p3 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    p4 = prom<V +>{
      tz = ld tz;
      tz1 = force? tz;
      checkMissing(tz1);
      return tz1;
    };
    r97 = dyn _POSIXct(p3, p4);
    check L236() else D47();
  L245():
    goto L46();
  L249():
    by4 = force? by3;
    checkMissing(by4);
    inherits2 = ldf inherits in base;
    r108 = dyn inherits2(by4, "difftime", FALSE);
    check L250() else D53();
  L251():
    sym23 = ldf attr;
    base23 = ldf attr in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L252() else L253();
  D41():
    deopt 174 [r91];
  D43():
    deopt 180 [to7];
  D47():
    deopt 192 [r97];
  D53():
    deopt 220 [r108];
  L49(r110):
    c16 = `is.vector`(r110, "any");
    if c16 then L256() else L257();
  L59(r122):
    c30 = `as.logical`(r122);
    if c30 then L286() else L60();
  L86(r186):
    c53 = `as.logical`(r186);
    if c53 then L366() else L87();
  L228():
    goto L41(r91);
  L232():
    to8 = force? to7;
    checkMissing(to8);
    length_out9 = ld `length.out`;
    check L233() else D44();
  L236():
    popenv;
    return r97;
  L250():
    goto L47(r108);
  L252():
    by5 = ld by;
    check L254() else D54();
  L253():
    r109 = dyn base23(<sym by>, "units");
    goto L49(r109);
  L283():
    by9 = ld by;
    check L285() else D58();
  L284():
    r121 = dyn base25(<sym by>);
    goto L59(r121);
  L362():
    by49 = ld by;
    check L364() else D89();
  L363():
    r185 = dyn base37(<sym by>);
    goto L86(r185);
  D44():
    deopt 182 [length_out9];
  D54():
    deopt 223 [by5];
  D58():
    deopt 249 [by9];
  D89():
    deopt 379 [by49];
  L60():
    sym36 = ldf `is.numeric`;
    base36 = ldf `is.numeric` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L354() else L355();
  L87():
    goto L88();
  L88():
    valid6 = ld valid;
    check L370() else D93();
  L233():
    length_out10 = force? length_out9;
    checkMissing(length_out10);
    seq_int = ldf `seq.int` in base;
    r94 = dyn seq_int(from6, to8, length_out10);
    check L234() else D45();
  L254():
    by6 = force? by5;
    checkMissing(by6);
    attr1 = ldf attr in base;
    r111 = dyn attr1(by6, "units");
    check L255() else D55();
  L256():
    c17 = inherits(r110, "factor", FALSE);
    if c17 then L258() else L259();
  L257():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L285():
    by10 = force? by9;
    checkMissing(by10);
    c29 = `is.character`(by10);
    goto L59(c29);
  L286():
    strsplit = ldf strsplit;
    check L287() else D59();
  L364():
    by50 = force? by49;
    checkMissing(by50);
    is_na1 = ldf `is.na` in base;
    r187 = dyn is_na1(by50);
    check L365() else D90();
  L366():
    stop11 = ldf stop;
    check L367() else D91();
  D45():
    deopt 186 [r94];
  D55():
    deopt 227 [r111];
  D59():
    deopt 253 [];
  D90():
    deopt 382 [r187];
  D91():
    deopt 384 [];
  D93():
    deopt 389 [valid6];
  L84(r181):
    r183 = `!`(r181);
    c52 = `as.logical`(r183);
    if c52 then L358() else L85();
  L234():
    goto L42(r94);
  L255():
    goto L49(r111);
  L258():
    c18 = `is.character`(r110);
    if c18 then L260() else L261();
  L259():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L258();
  L287():
    p5 = prom<V +>{
      by11 = ld by;
      by12 = force? by11;
      checkMissing(by12);
      return by12;
    };
    r124 = dyn strsplit[, , fixed](p5, " ", TRUE);
    check L288() else D60();
  L354():
    by47 = ld by;
    check L356() else D85();
  L355():
    r180 = dyn base36(<sym by>);
    goto L84(r180);
  L365():
    goto L86(r187);
  L367():
    r188 = dyn stop11("'by' is NA");
    check L368() else D92();
  L370():
    valid7 = force? valid6;
    checkMissing(valid7);
    r190 = `<=`(valid7, 5);
    c54 = `as.logical`(r190);
    if c54 then L371() else L89();
  D60():
    deopt 258 [r124];
  D85():
    deopt 366 [by47];
  D92():
    deopt 386 [r188];
  L50():
    goto L56(1.0);
  L51():
    goto L56(60.0);
  L52():
    goto L56(3600.0);
  L53():
    goto L56(86400.0);
  L54():
    goto L56(604800.0);
  L55():
    goto L56(NULL);
  L56(r112):
    sym24 = ldf unclass;
    base24 = ldf unclass in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L278() else L279();
  L85():
    goto L58();
  L89():
    as_POSIXlt = ldf `as.POSIXlt`;
    check L403() else D112();
  L260():
    c19 = `==`.6(r110, "secs");
    if c19 then L50() else L262();
  L261():
    i_ddd = dots[r110];
    i = `as.integer`(i_ddd);
    c24 = `==`.5(i, 1);
    if c24 then L50() else L267();
  L288():
    c31 = `is.object`(r124);
    if c31 then L289() else L290(r124);
  L356():
    by48 = force? by47;
    checkMissing(by48);
    is_numeric = ldf `is.numeric` in base;
    r182 = dyn is_numeric(by48);
    check L357() else D86();
  L358():
    stop10 = ldf stop;
    check L359() else D87();
  L368():
    goto L88();
  L371():
    sym38 = ldf unclass;
    base38 = ldf unclass in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L372() else L373();
  D86():
    deopt 369 [r182];
  D87():
    deopt 372 [];
  D112():
    deopt 449 [];
  L57(r116, r117):
    r119 = `*`(r116, r117);
    st by = r119;
    goto L58();
  L61(dx1):
    st by2 = dx1;
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L292() else L293();
  L90(r192):
    st from = r192;
    sym39 = ldf `is.null`;
    base39 = ldf `is.null` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L377() else L378();
  L262():
    c20 = `==`.6(r110, "mins");
    if c20 then L51() else L263();
  L267():
    c25 = `==`.5(i, 2);
    if c25 then L51() else L268();
  L278():
    by7 = ld by;
    check L280() else D56();
  L279():
    r115 = dyn base24(<sym by>);
    goto L57(r112, r115);
  L289():
    dr = tryDispatchBuiltin.1("[[", r124);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L291() else L290(dr);
  L290(r126):
    __ = ldf `[[` in base;
    r127 = dyn __(r126, 1);
    goto L61(r127);
  L357():
    goto L84(r182);
  L359():
    r184 = dyn stop10("invalid mode for 'by'");
    check L360() else D88();
  L372():
    as_POSIXct3 = ldf `as.POSIXct`;
    check L374() else D94();
  L373():
    r191 = dyn base38(<lang as.POSIXct(from)>);
    goto L90(r191);
  L403():
    p12 = prom<V +>{
      from15 = ld from;
      from16 = force? from15;
      checkMissing(from16);
      return from16;
    };
    r217 = dyn as_POSIXlt(p12);
    check L404() else D113();
  D56():
    deopt 242 [r112, by7];
  D88():
    deopt 374 [r184];
  D94():
    deopt 396 [];
  D113():
    deopt 451 [r217];
  L62(r129):
    r131 = `>`(r129, 2);
    c32 = `as.logical`(r131);
    if c32 then L63(c32) else L296();
  L91(r197):
    r198 = `!`(r197);
    c56 = `as.logical`(r198);
    if c56 then L380() else L92();
  L263():
    c21 = `==`.6(r110, "hours");
    if c21 then L52() else L264();
  L268():
    c26 = `==`.5(i, 3);
    if c26 then L52() else L269();
  L280():
    by8 = force? by7;
    checkMissing(by8);
    unclass2 = ldf unclass in base;
    r118 = dyn unclass2(by8);
    check L281() else D57();
  L291():
    dx = getTryDispatchBuiltinValue(dr);
    goto L61(dx);
  L292():
    by13 = ld by2;
    check L294() else D61();
  L293():
    r128 = dyn base26(<sym by2>);
    goto L62(r128);
  L360():
    goto L58();
  L374():
    p8 = prom<V +>{
      from7 = ld from;
      from8 = force? from7;
      checkMissing(from8);
      return from8;
    };
    r194 = dyn as_POSIXct3(p8);
    check L375() else D95();
  L377():
    length_out11 = ld `length.out`;
    check L379() else D97();
  L378():
    r196 = dyn base39(<sym length.out>);
    goto L91(r196);
  L404():
    st r1 = r217;
    valid8 = ld valid;
    check L405() else D114();
  D57():
    deopt 245 [r112, r118];
  D61():
    deopt 265 [by13];
  D95():
    deopt 398 [r194];
  D97():
    deopt 403 [length_out11];
  D114():
    deopt 453 [valid8];
  L63(c33):
    c41 = `as.logical`(c33);
    if c41 then L302() else L65();
  L92():
    sym41 = ldf unclass;
    base41 = ldf unclass in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L388() else L389();
  L94():
    _POSIXct1 = ldf `.POSIXct`;
    check L400() else D110();
  L264():
    c22 = `==`.6(r110, "days");
    if c22 then L53() else L265();
  L269():
    c27 = `==`.5(i, 4);
    if c27 then L53() else L270();
  L281():
    goto L57(r112, r118);
  L294():
    by14 = force? by13;
    checkMissing(by14);
    length5 = ldf length in base;
    r130 = dyn length5(by14);
    check L295() else D62();
  L296():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L297() else L298();
  L375():
    unclass3 = ldf unclass in base;
    r195 = dyn unclass3(r194);
    check L376() else D96();
  L379():
    length_out12 = force? length_out11;
    checkMissing(length_out12);
    c55 = `==`(length_out12, NULL);
    goto L91(c55);
  L380():
    sym40 = ldf `seq.int`;
    base40 = ldf `seq.int` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L381() else L382();
  L405():
    valid9 = force? valid8;
    checkMissing(valid9);
    r218 = `==`(valid9, 7);
    c57 = `as.logical`(r218);
    if c57 then L406() else L97();
  D62():
    deopt 268 [r130];
  D96():
    deopt 400 [r195];
  D110():
    deopt 444 [];
  L64(c37, r133):
    r135 = `<`(r133, 1);
    c38 = `as.logical`(r135);
    c39 = `||`(c37, c38);
    goto L63(c39);
  L65():
    goto L66();
  L66():
    pmatch = ldf pmatch;
    check L306() else D67();
  L93(r200):
    st res = r200;
    goto L94();
  L95(r204):
    st to0 = r204;
    sym42 = ldf `seq.int`;
    base42 = ldf `seq.int` in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L393() else L394();
  L97():
    _in_ = ldf `%in%`;
    check L443() else D126();
  L103():
    l9 = ld r1;
    c77 = `is.object`(l9);
    if c77 then L531() else L532(-1, l9);
  L265():
    c23 = `==`.6(r110, "weeks");
    if c23 then L54() else L266();
  L270():
    c28 = `==`.5(i, 5);
    if c28 then L54() else L271();
  L295():
    goto L62(r130);
  L297():
    by15 = ld by2;
    check L299() else D63();
  L298():
    r132 = dyn base27(<sym by2>);
    goto L64(c32, r132);
  L302():
    stop8 = ldf stop;
    check L303() else D65();
  L376():
    goto L90(r195);
  L381():
    from9 = ld from;
    check L383() else D98();
  L382():
    r199 = dyn base40[, by, `length.out`](<sym from>, <sym by>, <sym length.out>);
    goto L93(r199);
  L388():
    as_POSIXct4 = ldf `as.POSIXct`;
    check L390() else D102();
  L389():
    r203 = dyn base41(<lang as.POSIXct(to)>);
    goto L95(r203);
  L400():
    p10 = prom<V +>{
      res2 = ld res;
      res3 = force? res2;
      checkMissing(res3);
      return res3;
    };
    p11 = prom<V +>{
      tz2 = ld tz;
      tz3 = force? tz2;
      checkMissing(tz3);
      return tz3;
    };
    r215 = dyn _POSIXct1(p10, p11);
    check L401() else D111();
  L406():
    sym43 = ldf missing;
    base43 = ldf missing in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L407() else L408();
  D63():
    deopt 273 [c32, by15];
  D65():
    deopt 281 [];
  D67():
    deopt 287 [];
  D98():
    deopt 409 [from9];
  D102():
    deopt 423 [];
  D111():
    deopt 447 [r215];
  D126():
    deopt 498 [];
  L96(r209):
    from13 = ld from;
    check L399() else D109();
  L98(r220):
    c58 = `as.logical`(r220);
    if c58 then L409() else L99();
  L266():
    goto L55();
  L271():
    goto L55();
  L299():
    by16 = force? by15;
    checkMissing(by16);
    length6 = ldf length in base;
    r134 = dyn length6(by16);
    check L300() else D64();
  L303():
    r136 = dyn stop8("invalid 'by' string");
    check L304() else D66();
  L306():
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
    L1(by23, r139):
      __1 = ldf `[` in base;
      r141 = dyn __1(by23, r139);
      goto L0(r141);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      by24 = ld by2;
      by25 = force? by24;
      checkMissing(by25);
      length7 = ldf length in base;
      r140 = dyn length7(by25);
      goto L1(by20, r140);
    L6():
      r138 = dyn base28(<sym by2>);
      goto L1(by20, r138);
    };
    p7 = prom<V +>{
      sym29 = ldf c;
      base29 = ldf c in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r144):
      return r144;
    L1():
      c43 = ldf c in base;
      r145 = dyn c43("secs", "mins", "hours", "days", "weeks", "months", "years", "DSTdays", "quarters");
      goto L0(r145);
    L2():
      r143 = dyn base29("secs", "mins", "hours", "days", "weeks", "months", "years", "DSTdays", "quarters");
      goto L0(r143);
    };
    r147 = dyn pmatch(p6, p7);
    check L307() else D68();
  L383():
    from10 = force? from9;
    checkMissing(from10);
    by51 = ld by;
    check L384() else D99();
  L390():
    p9 = prom<V +>{
      to9 = ld to;
      to10 = force? to9;
      checkMissing(to10);
      return to10;
    };
    r206 = dyn as_POSIXct4(p9);
    check L391() else D103();
  L393():
    to11 = ld to0;
    check L395() else D105();
  L394():
    r208 = dyn base42(0.0, <lang `-`(to0, from)>, <sym by>);
    goto L96(r208);
  L401():
    popenv;
    return r215;
  L407():
    missing6 = ldf missing in base;
    r221 = dyn missing6(<sym to>);
    goto L98(r221);
  L408():
    r219 = dyn base43(<sym to>);
    goto L98(r219);
  L443():
    p14 = prom<V +>{
      valid10 = ld valid;
      valid11 = force? valid10;
      checkMissing(valid11);
      return valid11;
    };
    p15 = prom<V +>{
      sym46 = ldf c;
      base46 = ldf c in base;
      guard46 = `==`.4(sym46, base46);
      if guard46 then L1() else L2();
    L0(r245):
      return r245;
    L1():
      c63 = ldf c in base;
      r246 = dyn c63(6, 9);
      goto L0(r246);
    L2():
      r244 = dyn base46(6, 9);
      goto L0(r244);
    };
    r248 = dyn _in_(p14, p15);
    check L444() else D127();
  L530(dx39):
    st r1 = dx39;
    as_POSIXct7 = ldf `as.POSIXct`;
    check L534() else D155();
  L531():
    dr34 = tryDispatchBuiltin.0("$<-", l9, -1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L533() else L532(-1, dr34);
  L532(r346, l11):
    r349 = `$<-`(l11, <sym isdst>, -1);
    goto L530(r349);
  D64():
    deopt 276 [c32, r134];
  D66():
    deopt 283 [r136];
  D68():
    deopt 290 [r147];
  D99():
    deopt 411 [by51];
  D103():
    deopt 425 [r206];
  D105():
    deopt 432 [to11];
  D109():
    deopt 439 [r209, from13];
  D127():
    deopt 501 [r248];
  D155():
    deopt 620 [];
  L99():
    as_POSIXlt1 = ldf `as.POSIXlt`;
    check L421() else D119();
  L101():
    yr = ld yr;
    check L437() else D125();
  L300():
    goto L64(c32, r134);
  L304():
    goto L66();
  L307():
    st valid = r147;
    sym30 = ldf `is.na`;
    base30 = ldf `is.na` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L308() else L309();
  L384():
    by52 = force? by51;
    checkMissing(by52);
    length_out13 = ld `length.out`;
    check L385() else D100();
  L391():
    unclass4 = ldf unclass in base;
    r207 = dyn unclass4(r206);
    check L392() else D104();
  L395():
    to12 = force? to11;
    checkMissing(to12);
    from11 = ld from;
    check L396() else D106();
  L399():
    from14 = force? from13;
    checkMissing(from14);
    r212 = `+`(r209, from14);
    st res = r212;
    goto L94();
  L409():
    sym44 = ldf `seq.int`;
    base44 = ldf `seq.int` in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L410() else L411();
  L444():
    c64 = `as.logical`(r248);
    if c64 then L445() else L104();
  L533():
    dx38 = getTryDispatchBuiltinValue(dr34);
    goto L530(dx38);
  L534():
    p19 = prom<V +>{
      r350 = ld r1;
      r351 = force? r350;
      checkMissing(r351);
      return r351;
    };
    r353 = dyn as_POSIXct7(p19);
    check L535() else D156();
  D100():
    deopt 414 [length_out13];
  D104():
    deopt 427 [r207];
  D106():
    deopt 433 [to12, from11];
  D119():
    deopt 475 [];
  D125():
    deopt 492 [yr];
  D156():
    deopt 622 [r353];
  L67(r149):
    c44 = `as.logical`(r149);
    if c44 then L312() else L68();
  L100(r223):
    st yr = r223;
    goto L101();
  L104():
    valid14 = ld valid;
    check L496() else D143();
  L308():
    valid = ld valid;
    check L310() else D69();
  L309():
    r148 = dyn base30(<sym valid>);
    goto L67(r148);
  L385():
    length_out14 = force? length_out13;
    checkMissing(length_out14);
    seq_int1 = ldf `seq.int` in base;
    r201 = dyn seq_int1(from10, by52, length_out14);
    check L386() else D101();
  L392():
    goto L95(r207);
  L396():
    from12 = force? from11;
    checkMissing(from12);
    r210 = `-`(to12, from12);
    by53 = ld by;
    check L397() else D107();
  L410():
    r224 = ld r1;
    check L412() else D115();
  L411():
    r222 = dyn base44[, by, `length.out`](<lang `$`(r1, year)>, <sym by>, <sym length.out>);
    goto L100(r222);
  L421():
    p13 = prom<V +>{
      to13 = ld to;
      to14 = force? to13;
      checkMissing(to14);
      return to14;
    };
    r232 = dyn as_POSIXlt1(p13);
    check L422() else D120();
  L437():
    yr1 = force? yr;
    checkMissing(yr1);
    l = ld r1;
    c62 = `is.object`(l);
    if c62 then L439() else L440(yr1, l);
  L445():
    valid12 = ld valid;
    check L446() else D128();
  L535():
    st res = r353;
    sym55 = ldf missing;
    base55 = ldf missing in base;
    guard55 = `==`.4(sym55, base55);
    if guard55 then L536() else L537();
  D69():
    deopt 294 [valid];
  D101():
    deopt 418 [r201];
  D107():
    deopt 436 [by53];
  D115():
    deopt 462 [r224];
  D120():
    deopt 477 [r232];
  D128():
    deopt 502 [valid12];
  D143():
    deopt 561 [valid14];
  L68():
    goto L69();
  L69():
    valid2 = ld valid;
    check L316() else D73();
  L120(r355):
    r357 = `!`(r355);
    c78 = `as.logical`(r357);
    if c78 then L538() else L121();
  L310():
    valid1 = force? valid;
    checkMissing(valid1);
    is_na = ldf `is.na` in base;
    r150 = dyn is_na(valid1);
    check L311() else D70();
  L312():
    stop9 = ldf stop;
    check L313() else D71();
  L386():
    goto L93(r201);
  L397():
    by54 = force? by53;
    checkMissing(by54);
    seq_int2 = ldf `seq.int` in base;
    r211 = dyn seq_int2(0.0, r210, by54);
    check L398() else D108();
  L412():
    r225 = force? r224;
    checkMissing(r225);
    c59 = `is.object`(r225);
    if c59 then L414() else L415(r225);
  L422():
    st to = r232;
    sym45 = ldf `seq.int`;
    base45 = ldf `seq.int` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L423() else L424();
  L438(yr5, dx17):
    st r1 = dx17;
    goto L103();
  L439():
    dr16 = tryDispatchBuiltin.0("$<-", l, yr1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L441() else L440(yr1, dr16);
  L440(yr3, l2):
    r242 = `$<-`(l2, <sym year>, yr1);
    goto L438(yr3, r242);
  L446():
    valid13 = force? valid12;
    checkMissing(valid13);
    r249 = `==`(valid13, 9);
    c65 = `as.logical`(r249);
    if c65 then L447() else L105();
  L496():
    valid15 = force? valid14;
    checkMissing(valid15);
    r297 = `==`(valid15, 8);
    c73 = `as.logical`(r297);
    if c73 then L497() else L112();
  L536():
    missing9 = ldf missing in base;
    r356 = dyn missing9(<sym to>);
    goto L120(r356);
  L537():
    r354 = dyn base55(<sym to>);
    goto L120(r354);
  D70():
    deopt 297 [r150];
  D71():
    deopt 299 [];
  D73():
    deopt 304 [valid2];
  D108():
    deopt 439 [r211];
  L102(r234):
    st yr = r234;
    goto L101();
  L105():
    goto L106();
  L106():
    sym47 = ldf missing;
    base47 = ldf missing in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L450() else L451();
  L112():
    goto L103();
  L121():
    goto L125();
  L125():
    res16 = ld res;
    check L557() else D166();
  L311():
    goto L67(r150);
  L313():
    r151 = dyn stop9("invalid string for 'by'");
    check L314() else D72();
  L316():
    valid3 = force? valid2;
    checkMissing(valid3);
    r153 = `<=`(valid3, 5);
    c45 = `as.logical`(r153);
    if c45 then L317() else L70();
  L398():
    goto L96(r211);
  L413(dx11):
    by55 = ld by;
    check L417() else D116();
  L414():
    dr10 = tryDispatchBuiltin.1("$", r225);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L416() else L415(dr10);
  L415(r227):
    r228 = `$`(r227, <sym year>);
    goto L413(r228);
  L423():
    r235 = ld r1;
    check L425() else D121();
  L424():
    r233 = dyn base45(<lang `$`(r1, year)>, <lang `$`(to, year)>, <sym by>);
    goto L102(r233);
  L441():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L438(yr1, dx16);
  L447():
    by59 = ld by;
    check L448() else D129();
  L497():
    sym50 = ldf missing;
    base50 = ldf missing in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L498() else L499();
  L538():
    as_POSIXct8 = ldf `as.POSIXct`;
    check L539() else D157();
  D72():
    deopt 301 [r151];
  D116():
    deopt 465 [by55];
  D121():
    deopt 481 [r235];
  D129():
    deopt 506 [by59];
  D157():
    deopt 629 [];
  D166():
    deopt 654 [res16];
  L70():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L340() else L341();
  L78(r170):
    goto L58();
  L107(r253):
    c66 = `as.logical`(r253);
    if c66 then L452() else L108();
  L113(r299):
    r301 = `!`(r299);
    c74 = `as.logical`(r301);
    if c74 then L500() else L114();
  L314():
    goto L69();
  L317():
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L318() else L319();
  L416():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L413(dx10);
  L417():
    by56 = force? by55;
    checkMissing(by56);
    length_out15 = ld `length.out`;
    check L418() else D117();
  L425():
    r236 = force? r235;
    checkMissing(r236);
    c60 = `is.object`(r236);
    if c60 then L427() else L428(r236);
  L448():
    by60 = force? by59;
    checkMissing(by60);
    r250 = `*`(by60, 3.0);
    st by = r250;
    goto L106();
  L450():
    missing7 = ldf missing in base;
    r254 = dyn missing7(<sym to>);
    goto L107(r254);
  L451():
    r252 = dyn base47(<sym to>);
    goto L107(r252);
  L498():
    missing8 = ldf missing in base;
    r300 = dyn missing8(<sym to>);
    goto L113(r300);
  L499():
    r298 = dyn base50(<sym to>);
    goto L113(r298);
  L539():
    p20 = prom<V +>{
      to31 = ld to;
      to32 = force? to31;
      checkMissing(to32);
      return to32;
    };
    r359 = dyn as_POSIXct8(p20);
    check L540() else D158();
  L557():
    res17 = force? res16;
    checkMissing(res17);
    popenv;
    return res17;
  D117():
    deopt 468 [length_out15];
  D158():
    deopt 631 [r359];
  L71(r155):
    c47 = `is.object`(r155);
    if c47 then L321() else L322(r155);
  L79(r172):
    r174 = `==`(r172, 2);
    c50 = `as.logical`(r174);
    if c50 then L344() else L80();
  L108():
    as_POSIXlt2 = ldf `as.POSIXlt`;
    check L464() else D134();
  L110():
    mon = ld mon;
    check L490() else D142();
  L114():
    goto L118();
  L118():
    sym54 = ldf `seq.int`;
    base54 = ldf `seq.int` in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L515() else L516();
  L318():
    c46 = ldf c in base;
    r156 = dyn c46(1.0, 60.0, 3600.0, 86400.0, 604800.0);
    check L320() else D74();
  L319():
    r154 = dyn base31(1.0, 60.0, 3600.0, 86400.0, <lang `*`(7.0, 86400.0)>);
    goto L71(r154);
  L340():
    by41 = ld by2;
    check L342() else D81();
  L341():
    r171 = dyn base34(<sym by2>);
    goto L79(r171);
  L418():
    length_out16 = force? length_out15;
    checkMissing(length_out16);
    seq_int3 = ldf `seq.int` in base;
    r229 = dyn seq_int3(dx11, by56, length_out16);
    check L419() else D118();
  L426(dx13):
    to15 = ld to;
    check L430() else D122();
  L427():
    dr12 = tryDispatchBuiltin.1("$", r236);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L429() else L428(dr12);
  L428(r238):
    r239 = `$`(r238, <sym year>);
    goto L426(r239);
  L452():
    sym48 = ldf `seq.int`;
    base48 = ldf `seq.int` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L453() else L454();
  L500():
    sym51 = ldf floor;
    base51 = ldf floor in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L501() else L502();
  L540():
    st to = r359;
    by69 = ld by;
    check L541() else D159();
  D74():
    deopt 317 [r156];
  D81():
    deopt 346 [by41];
  D118():
    deopt 472 [r229];
  D122():
    deopt 484 [to15];
  D134():
    deopt 531 [];
  D142():
    deopt 556 [mon];
  D159():
    deopt 633 [by69];
  L72(dx5):
    st by = dx5;
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L325() else L326();
  L80():
    goto L83(1.0);
  L83(r179):
    st by = r179;
    goto L78(r179);
  L109(r256):
    st mon = r256;
    goto L110();
  L115(r305, r306):
    r330 = `+`(r305, r306);
    st `length.out` = r330;
    goto L118();
  L119(r333):
    l6 = ld r1;
    c76 = `is.object`(l6);
    if c76 then L526() else L527(r333, l6);
  L320():
    goto L71(r156);
  L321():
    dr4 = tryDispatchBuiltin.1("[", r155);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L323() else L322(dr4);
  L322(r158):
    valid4 = ld valid;
    check L324() else D75();
  L342():
    by42 = force? by41;
    checkMissing(by42);
    length9 = ldf length in base;
    r173 = dyn length9(by42);
    check L343() else D82();
  L344():
    sym35 = ldf `as.integer`;
    base35 = ldf `as.integer` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L345() else L346();
  L419():
    goto L100(r229);
  L429():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L426(dx12);
  L430():
    to16 = force? to15;
    checkMissing(to16);
    c61 = `is.object`(to16);
    if c61 then L432() else L433(to16);
  L453():
    r257 = ld r1;
    check L455() else D130();
  L454():
    r255 = dyn base48[, by, `length.out`](<lang `$`(r1, mon)>, <sym by>, <sym length.out>);
    goto L109(r255);
  L464():
    p16 = prom<V +>{
      to19 = ld to;
      to20 = force? to19;
      checkMissing(to20);
      return to20;
    };
    r265 = dyn as_POSIXlt2(p16);
    check L465() else D135();
  L490():
    mon1 = force? mon;
    checkMissing(mon1);
    l3 = ld r1;
    c72 = `is.object`(l3);
    if c72 then L492() else L493(mon1, l3);
  L501():
    sym52 = ldf unclass;
    base52 = ldf unclass in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L503() else L504();
  L502():
    r304 = dyn base51(<lang `/`(`(`(`-`(unclass(as.POSIXct(to)), unclass(as.POSIXct(from)))), `(`(`*`(by, 86400.0)))>);
    goto L115(2, r304);
  L515():
    r334 = ld r1;
    check L517() else D151();
  L516():
    r332 = dyn base54[, by, `length.out`](<lang `$`(r1, mday)>, <sym by>, <sym length.out>);
    goto L119(r332);
  L541():
    by70 = force? by69;
    checkMissing(by70);
    r360 = `>`(by70, 0.0);
    c79 = `as.logical`(r360);
    if c79 then L542() else L122();
  D75():
    deopt 318 [r158, valid4];
  D82():
    deopt 349 [r173];
  D130():
    deopt 518 [r257];
  D135():
    deopt 533 [r265];
  D151():
    deopt 598 [r334];
  L73(r161):
    r163 = `==`(r161, 2);
    c48 = `as.logical`(r163);
    if c48 then L329() else L74();
  L81(r176):
    goto L83(r176);
  L116(r310, r311):
    sym53 = ldf unclass;
    base53 = ldf unclass in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L508() else L509();
  L122():
    res10 = ld res;
    check L550() else D163();
  L124(dx42):
    st res = dx42;
    goto L125();
  L323():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L72(dx4);
  L324():
    valid5 = force? valid4;
    __2 = ldf `[` in base;
    r159 = dyn __2(r158, valid5);
    goto L72(r159);
  L325():
    by26 = ld by2;
    check L327() else D76();
  L326():
    r160 = dyn base32(<sym by2>);
    goto L73(r160);
  L343():
    goto L79(r173);
  L345():
    by43 = ld by2;
    check L347() else D83();
  L346():
    r175 = dyn base35(<lang `[`(by2, 1)>);
    goto L81(r175);
  L431(dx15):
    by57 = ld by;
    check L435() else D123();
  L432():
    dr14 = tryDispatchBuiltin.1("$", to16);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L434() else L433(dr14);
  L433(to18):
    r240 = `$`(to18, <sym year>);
    goto L431(r240);
  L455():
    r258 = force? r257;
    checkMissing(r258);
    c67 = `is.object`(r258);
    if c67 then L457() else L458(r258);
  L465():
    st to0 = r265;
    sym49 = ldf `seq.int`;
    base49 = ldf `seq.int` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L466() else L467();
  L491(mon5, dx33):
    st r1 = dx33;
    goto L103();
  L492():
    dr28 = tryDispatchBuiltin.0("$<-", l3, mon1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L494() else L493(mon1, dr28);
  L493(mon3, l5):
    r296 = `$<-`(l5, <sym mon>, mon1);
    goto L491(mon3, r296);
  L503():
    as_POSIXct5 = ldf `as.POSIXct`;
    check L505() else D144();
  L504():
    r309 = dyn base52(<lang as.POSIXct(to)>);
    goto L116(2, r309);
  L517():
    r335 = force? r334;
    checkMissing(r335);
    c75 = `is.object`(r335);
    if c75 then L519() else L520(r335);
  L525(r343, dx37):
    st r1 = dx37;
    goto L103();
  L526():
    dr32 = tryDispatchBuiltin.0("$<-", l6, r333);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L528() else L527(r333, dr32);
  L527(r341, l8):
    r344 = `$<-`(l8, <sym mday>, r333);
    goto L525(r341, r344);
  L542():
    res4 = ld res;
    check L543() else D160();
  D76():
    deopt 324 [by26];
  D83():
    deopt 354 [by43];
  D123():
    deopt 487 [by57];
  D144():
    deopt 574 [2];
  D160():
    deopt 637 [res4];
  D163():
    deopt 644 [res10];
  L74():
    goto L77(NULL);
  L77(r169):
    goto L78(r169);
  L111(r267):
    st mon = r267;
    goto L110();
  L117(r320, r321, r322):
    r326 = `-`(r321, r322);
    by65 = ld by;
    check L513() else D150();
  L327():
    by27 = force? by26;
    checkMissing(by27);
    length8 = ldf length in base;
    r162 = dyn length8(by27);
    check L328() else D77();
  L329():
    by28 = ld by;
    check L330() else D78();
  L347():
    by44 = force? by43;
    checkMissing(by44);
    c51 = `is.object`(by44);
    if c51 then L348() else L349(by44);
  L434():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L431(dx14);
  L435():
    by58 = force? by57;
    checkMissing(by58);
    seq_int4 = ldf `seq.int` in base;
    r241 = dyn seq_int4(dx13, dx15, by58);
    check L436() else D124();
  L456(dx19):
    by61 = ld by;
    check L460() else D131();
  L457():
    dr18 = tryDispatchBuiltin.1("$", r258);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L459() else L458(dr18);
  L458(r260):
    r261 = `$`(r260, <sym mon>);
    goto L456(r261);
  L466():
    r268 = ld r1;
    check L468() else D136();
  L467():
    r266 = dyn base49(<lang `$`(r1, mon)>, <lang `+`(`*`(12.0, `(`(`-`(`$`(to0, year), `$`(r1, year)))), `$`(to0, mon))>, <sym by>);
    goto L111(r266);
  L494():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L491(mon1, dx32);
  L505():
    p17 = prom<V +>{
      to29 = ld to;
      to30 = force? to29;
      checkMissing(to30);
      return to30;
    };
    r313 = dyn as_POSIXct5(p17);
    check L506() else D145();
  L508():
    as_POSIXct6 = ldf `as.POSIXct`;
    check L510() else D147();
  L509():
    r319 = dyn base53(<lang as.POSIXct(from)>);
    goto L117(r310, r311, r319);
  L518(dx35):
    by67 = ld by;
    check L522() else D152();
  L519():
    dr30 = tryDispatchBuiltin.1("$", r335);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L521() else L520(dr30);
  L520(r337):
    r338 = `$`(r337, <sym mday>);
    goto L518(r338);
  L528():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L525(r333, dx36);
  L543():
    res5 = force? res4;
    checkMissing(res5);
    c80 = `is.object`(res5);
    if c80 then L544() else L545(res5);
  L550():
    res11 = force? res10;
    checkMissing(res11);
    c81 = `is.object`(res11);
    if c81 then L551() else L552(res11);
  D77():
    deopt 327 [r162];
  D78():
    deopt 330 [by28];
  D124():
    deopt 490 [r241];
  D131():
    deopt 521 [by61];
  D136():
    deopt 537 [r268];
  D145():
    deopt 576 [2, r313];
  D147():
    deopt 581 [r310, r311];
  D150():
    deopt 586 [r320, r326, by65];
  D152():
    deopt 601 [by67];
  L82(dx9):
    as_integer1 = ldf `as.integer` in base;
    r178 = dyn as_integer1(dx9);
    check L351() else D84();
  L123(dx41):
    goto L124(dx41);
  L328():
    goto L73(r162);
  L330():
    by29 = force? by28;
    checkMissing(by29);
    sym33 = ldf `as.integer`;
    base33 = ldf `as.integer` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L331() else L332();
  L348():
    dr8 = tryDispatchBuiltin.1("[", by44);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L350() else L349(dr8);
  L349(by46):
    __4 = ldf `[` in base;
    r177 = dyn __4(by46, 1);
    goto L82(r177);
  L436():
    goto L102(r241);
  L459():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L456(dx18);
  L460():
    by62 = force? by61;
    checkMissing(by62);
    length_out17 = ld `length.out`;
    check L461() else D132();
  L468():
    r269 = force? r268;
    checkMissing(r269);
    c68 = `is.object`(r269);
    if c68 then L470() else L471(r269);
  L506():
    unclass5 = ldf unclass in base;
    r314 = dyn unclass5(r313);
    check L507() else D146();
  L510():
    p18 = prom<V +>{
      from17 = ld from;
      from18 = force? from17;
      checkMissing(from18);
      return from18;
    };
    r324 = dyn as_POSIXct6(p18);
    check L511() else D148();
  L513():
    by66 = force? by65;
    checkMissing(by66);
    r327 = `*`(by66, 86400.0);
    r328 = `/`(r326, r327);
    r329 = floor(r328);
    goto L115(r320, r329);
  L521():
    dx34 = getTryDispatchBuiltinValue(dr30);
    goto L518(dx34);
  L522():
    by68 = force? by67;
    checkMissing(by68);
    length_out19 = ld `length.out`;
    check L523() else D153();
  L544():
    dr36 = tryDispatchBuiltin.1("[", res5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L546() else L545(dr36);
  L545(res7):
    res8 = ld res;
    check L547() else D161();
  L551():
    dr38 = tryDispatchBuiltin.1("[", res11);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L553() else L552(dr38);
  L552(res13):
    res14 = ld res;
    check L554() else D164();
  D84():
    deopt 360 [r178];
  D132():
    deopt 524 [length_out17];
  D146():
    deopt 578 [2, r314];
  D148():
    deopt 583 [r310, r311, r324];
  D153():
    deopt 604 [length_out19];
  D161():
    deopt 639 [res7, res8];
  D164():
    deopt 646 [res13, res14];
  L75(by32, r165):
    r168 = `*`(by32, r165);
    st by = r168;
    goto L77(r168);
  L331():
    by33 = ld by2;
    check L333() else D79();
  L332():
    r164 = dyn base33(<lang `[`(by2, 1)>);
    goto L75(by29, r164);
  L350():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L82(dx8);
  L351():
    goto L81(r178);
  L461():
    length_out18 = force? length_out17;
    checkMissing(length_out18);
    seq_int5 = ldf `seq.int` in base;
    r262 = dyn seq_int5(dx19, by62, length_out18);
    check L462() else D133();
  L469(dx21):
    to21 = ld to0;
    check L473() else D137();
  L470():
    dr20 = tryDispatchBuiltin.1("$", r269);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L472() else L471(dr20);
  L471(r271):
    r272 = `$`(r271, <sym mon>);
    goto L469(r272);
  L507():
    goto L116(2, r314);
  L511():
    unclass6 = ldf unclass in base;
    r325 = dyn unclass6(r324);
    check L512() else D149();
  L523():
    length_out20 = force? length_out19;
    checkMissing(length_out20);
    seq_int7 = ldf `seq.int` in base;
    r339 = dyn seq_int7(dx35, by68, length_out20);
    check L524() else D154();
  L546():
    dx40 = getTryDispatchBuiltinValue(dr36);
    goto L123(dx40);
  L547():
    res9 = force? res8;
    checkMissing(res9);
    to33 = ld to;
    check L548() else D162();
  L553():
    dx43 = getTryDispatchBuiltinValue(dr38);
    goto L124(dx43);
  L554():
    res15 = force? res14;
    checkMissing(res15);
    to35 = ld to;
    check L555() else D165();
  D79():
    deopt 333 [by29, by33];
  D133():
    deopt 528 [r262];
  D137():
    deopt 541 [12.0, to21];
  D149():
    deopt 585 [r310, r311, r325];
  D154():
    deopt 608 [r339];
  D162():
    deopt 640 [res7, res9, to33];
  D165():
    deopt 647 [res13, res15, to35];
  L333():
    by34 = force? by33;
    checkMissing(by34);
    c49 = `is.object`(by34);
    if c49 then L334() else L335(by29, by34);
  L462():
    goto L109(r262);
  L472():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L469(dx20);
  L473():
    to22 = force? to21;
    checkMissing(to22);
    c69 = `is.object`(to22);
    if c69 then L475() else L476(12.0, to22);
  L512():
    goto L117(r310, r311, r325);
  L524():
    goto L119(r339);
  L548():
    to34 = force? to33;
    checkMissing(to34);
    r361 = `<=`(res9, to34);
    __5 = ldf `[` in base;
    r362 = dyn __5(res7, r361);
    goto L123(r362);
  L555():
    to36 = force? to35;
    checkMissing(to36);
    r363 = `>=`(res15, to36);
    __6 = ldf `[` in base;
    r364 = dyn __6(res13, r363);
    goto L124(r364);
  L76(by40, dx7):
    as_integer = ldf `as.integer` in base;
    r167 = dyn as_integer(dx7);
    check L337() else D80();
  L334():
    dr6 = tryDispatchBuiltin.1("[", by34);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L336() else L335(by29, dr6);
  L335(by37, by38):
    __3 = ldf `[` in base;
    r166 = dyn __3(by38, 1);
    goto L76(by37, r166);
  L474(r276, dx23):
    r278 = ld r1;
    check L478() else D138();
  L475():
    dr22 = tryDispatchBuiltin.1("$", to22);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L477() else L476(12.0, dr22);
  L476(r274, to24):
    r277 = `$`(to24, <sym year>);
    goto L474(r274, r277);
  D80():
    deopt 339 [by40, r167];
  D138():
    deopt 543 [r276, dx23, r278];
  L336():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L76(by29, dx6);
  L337():
    goto L75(by40, r167);
  L477():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L474(12.0, dx22);
  L478():
    r279 = force? r278;
    checkMissing(r279);
    c70 = `is.object`(r279);
    if c70 then L480() else L481(r276, dx23, r279);
  L479(r285, dx28, dx29):
    r287 = `-`(dx28, dx29);
    r288 = `*`(r285, r287);
    to25 = ld to0;
    check L483() else D139();
  L480():
    dr24 = tryDispatchBuiltin.1("$", r279);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L482() else L481(r276, dx23, dr24);
  L481(r282, dx25, r283):
    r286 = `$`(r283, <sym year>);
    goto L479(r282, dx25, r286);
  D139():
    deopt 547 [r288, to25];
  L482():
    dx27 = getTryDispatchBuiltinValue(dr24);
    goto L479(r276, dx23, dx27);
  L483():
    to26 = force? to25;
    checkMissing(to26);
    c71 = `is.object`(to26);
    if c71 then L485() else L486(r288, to26);
  L484(r292, dx31):
    r294 = `+`(r292, dx31);
    by63 = ld by;
    check L488() else D140();
  L485():
    dr26 = tryDispatchBuiltin.1("$", to26);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L487() else L486(r288, dr26);
  L486(r290, to28):
    r293 = `$`(to28, <sym mon>);
    goto L484(r290, r293);
  D140():
    deopt 551 [by63];
  L487():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L484(r288, dx30);
  L488():
    by64 = force? by63;
    checkMissing(by64);
    seq_int6 = ldf `seq.int` in base;
    r295 = dyn seq_int6(dx21, r294, by64);
    check L489() else D141();
  D141():
    deopt 554 [r295];
  L489():
    goto L111(r295);
  }
}