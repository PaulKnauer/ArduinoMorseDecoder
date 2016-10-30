#include "MorseCharBTree.h"

#include "Arduino.h"

MorseCharBTree::MorseCharBTree() {
  _root = new MorseChar('*');
  MorseChar *e = new MorseChar('E');
  MorseChar *t = new MorseChar('T');
  _root->setChildren(e, t);

  MorseChar *i = new MorseChar('I');
  MorseChar *a = new MorseChar('A');
  e->setChildren(i, a);

  MorseChar *n = new MorseChar('N');
  MorseChar *m = new MorseChar('M');
  t->setChildren(n, m);

  MorseChar *s = new MorseChar('S');
  MorseChar *u = new MorseChar('U');
  i->setChildren(s, u);

  MorseChar *r = new MorseChar('R');
  MorseChar *w = new MorseChar('W');
  a->setChildren(r, w);

  MorseChar *d = new MorseChar('D');
  MorseChar *k = new MorseChar('K');
  n->setChildren(d, k);

  MorseChar *g = new MorseChar('G');
  MorseChar *o = new MorseChar('O');
  m->setChildren(g, o);

  MorseChar *h = new MorseChar('H');
  MorseChar *v = new MorseChar('V');
  s->setChildren(h, v);

  MorseChar *f = new MorseChar('F');
  MorseChar *uDiaeresis = new MorseChar('*');
  u->setChildren(f, uDiaeresis);

  MorseChar *l = new MorseChar('L');
  MorseChar *aDiaeresis = new MorseChar('*');
  r->setChildren(l, aDiaeresis);

  MorseChar *p = new MorseChar('P');
  MorseChar *j = new MorseChar('J');
  w->setChildren(p, j);

  MorseChar *b = new MorseChar('B');
  MorseChar *x = new MorseChar('X');
  d->setChildren(b, x);

  MorseChar *c = new MorseChar('C');
  MorseChar *y = new MorseChar('Y');
  k->setChildren(c, y);

  MorseChar *z = new MorseChar('Z');
  MorseChar *q = new MorseChar('Q');
  g->setChildren(z, q);

  MorseChar *oDiaeresis = new MorseChar('*');
  MorseChar *digraph = new MorseChar('*');
  o->setChildren(oDiaeresis, digraph);

  MorseChar *five = new MorseChar('5');
  MorseChar *four = new MorseChar('4');
  h->setChildren(five, four);

  MorseChar *sCircumflex = new MorseChar('*');
  MorseChar *three = new MorseChar('3');
  v->setChildren(sCircumflex, three);

  MorseChar *eAcute = new MorseChar('*');
  f->setChildren(eAcute, NULL);

  MorseChar *dStroke = new MorseChar('*');
  MorseChar *two = new MorseChar('2');
  uDiaeresis->setChildren(dStroke, two);

  MorseChar *eGrave = new MorseChar('*');
  l->setChildren(NULL, eGrave);

  MorseChar *plus = new MorseChar('+');
  aDiaeresis->setChildren(plus, NULL);

  MorseChar *thorn = new MorseChar('*');
  MorseChar *aGrave = new MorseChar('*');
  p->setChildren(thorn, aGrave);

  MorseChar *jCurcumflex = new MorseChar('*');
  MorseChar *one = new MorseChar('1');
  j->setChildren(jCurcumflex, one);

  MorseChar *six = new MorseChar('6');
  MorseChar *equals = new MorseChar('=');
  b->setChildren(six, equals);

  MorseChar *slash = new MorseChar('/');
  x->setChildren(slash, NULL);

  MorseChar *cCedilla = new MorseChar('*');
  MorseChar *nil1 = new MorseChar(' ');
  c->setChildren(cCedilla, nil1);

  MorseChar *hCircumflex = new MorseChar('*');
  //  MorseChar *openParenthesis = new MorseChar('(');
  y->setChildren(hCircumflex, NULL);

  MorseChar *seven = new MorseChar('7');
  MorseChar *nil2 = new MorseChar('*');
  z->setChildren(seven, nil2);

  MorseChar *gCircumflex = new MorseChar('*');
  MorseChar *nTilde = new MorseChar('*');
  q->setChildren(gCircumflex, nTilde);

  MorseChar *eight = new MorseChar('8');
  oDiaeresis->setChildren(eight, NULL);

  MorseChar *nine = new MorseChar('9');
  MorseChar *zero = new MorseChar('0');
  digraph->setChildren(nine, zero);

  MorseChar *questionMark = new MorseChar('?');
  MorseChar *underscore = new MorseChar('_');
  dStroke->setChildren(questionMark, underscore);

  MorseChar *doubleQuotes = new MorseChar('"');
  eGrave->setChildren(doubleQuotes, NULL);

  MorseChar *period = new MorseChar('.');
  plus->setChildren(NULL, period);

  MorseChar *commercialAt = new MorseChar('@');
  aGrave->setChildren(commercialAt, NULL);

  MorseChar *singleQuotes = new MorseChar('\'');
  one->setChildren(singleQuotes, NULL);

  MorseChar *hyphen = new MorseChar('-');
  six->setChildren(NULL, hyphen);

  MorseChar *semicolon = new MorseChar(';');
  MorseChar *exclamationMark = new MorseChar('!');
  nil1->setChildren(semicolon, exclamationMark);

  MorseChar *closeParenthesis = new MorseChar(')');
  hCircumflex->setChildren(NULL, closeParenthesis);

  MorseChar *comma = new MorseChar(',');
  nil2->setChildren(NULL, comma);

  MorseChar *colon = new MorseChar(':');
  eight->setChildren(colon, NULL);

  _cursor = _root;
}

void MorseCharBTree::dit() {
  _cursor = _cursor->getDitChild();
}

void MorseCharBTree::dah() {
  _cursor = _cursor->getDahChild();
}

char MorseCharBTree::letterSpace() {
  char decodedChar = _cursor->getChar();
  _cursor = _root;
  return decodedChar;
}

char MorseCharBTree::wordSpace() {
  _cursor = _root;
  return ' ';
}
