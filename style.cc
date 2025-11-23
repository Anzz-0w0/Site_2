@import url("https://fonts.googleapis.com/css2?family=Poppins:wght@300;400;600;700&display=swap");

* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  font-family: "Poppins", system-ui, -apple-system, BlinkMacSystemFont, "Segoe UI", sans-serif;
  color: #f7f7ff;
  line-height: 1.6;
  padding: 20px;
  background:
    radial-gradient(circle at top, rgba(125, 249, 255, 0.15) 0, transparent 55%),
    radial-gradient(circle at bottom, rgba(171, 121, 255, 0.25) 0, transparent 60%),
    #020208 url("gojo-bg.jpg") center top / cover fixed no-repeat;
}

/* Glassy central card like Gojo’s barrier */
.page-wrapper {
  max-width: 960px;
  margin: 0 auto;
  background: rgba(5, 5, 18, 0.8);
  border-radius: 22px;
  border: 1px solid rgba(111, 246, 255, 0.4);
  box-shadow:
    0 0 30px rgba(111, 246, 255, 0.15),
    0 0 60px rgba(123, 60, 255, 0.3);
  backdrop-filter: blur(16px);
  padding: 26px 22px 32px;
}

/* Header – strong Gojo energy */
.site-header {
  text-align: center;
  margin-bottom: 40px;
  padding-bottom: 18px;
  border-bottom: 1px solid rgba(143, 255, 255, 0.35);
}

.site-header h1 {
  font-size: 2.6rem;
  letter-spacing: 0.18em;
  text-transform: uppercase;
  text-shadow:
    0 0 8px rgba(111, 246, 255, 0.9),
    0 0 18px rgba(123, 60, 255, 0.8);
}

.tagline {
  margin-top: 6px;
  font-size: 0.95rem;
  color: #c6d0ff;
  opacity: 0.9;
}

/* Intro / Gojo profile zone */
.intro {
  margin-bottom: 40px;
}

.intro-inner {
  display: flex;
  gap: 22px;
  align-items: center;
  justify-content: center;
  flex-wrap: wrap;
  padding: 20px;
  border-radius: 18px;
  background:
    linear-gradient(135deg, rgba(8, 8, 26, 0.9), rgba(9, 9, 36, 0.9)),
    url("gojo-pattern.png");
  background-size: cover;
  background-blend-mode: soft-light;
  border: 1px solid rgba(171, 121, 255, 0.75);
  box-shadow:
    0 0 18px rgba(171, 121, 255, 0.5),
    0 0 26px rgba(111, 246, 255, 0.5);
}

.profile-img {
  width: 190px;
  height: 190px;
  border-radius: 50%;
  object-fit: cover;
  border: 3px solid #6ff6ff;
  box-shadow:
    0 0 12px rgba(111, 246, 255, 0.9),
    0 0 30px rgba(123, 60, 255, 0.85);
  filter: saturate(1.2);
}

.bio {
  max-width: 420px;
}

.bio h2 {
  margin-bottom: 8px;
  font-size: 1.5rem;
  color: #e3e6ff;
}

.bio p {
  font-size: 0.98rem;
  color: #c7cdfa;
}

/* Section headings */
.showcase-grid h2,
.interests h2 {
  margin-bottom: 8px;
  font-size: 1.35rem;
  color: #e0e4ff;
  text-transform: uppercase;
  letter-spacing: 0.12em;
}

/* Showcase – think Hollow Purple cards */
.showcase-grid {
  margin-bottom: 40px;
}

.showcase-grid .grid-container {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(190px, 1fr));
  gap: 20px;
  margin-top: 18px;
}

.card {
  background: radial-gradient(circle at top, #151633, #050515 70%);
  border-radius: 16px;
  padding: 16px 14px;
  text-align: center;
  border: 1px solid rgba(111, 246, 255, 0.6);
  box-shadow:
    0 0 18px rgba(111, 246, 255, 0.2),
    0 0 26px rgba(123, 60, 255, 0.35);
  font-size: 0.95rem;
  position: relative;
  overflow: hidden;
  transition:
    transform 0.25s ease,
    box-shadow 0.25s ease,
    border-color 0.25s ease,
    background-position 0.25s ease;
  background-size: 200% 200%;
}

.card::before {
  content: "";
  position: absolute;
  inset: -40%;
  background: radial-gradient(circle at center, rgba(111, 246, 255, 0.25), transparent 60%);
  transform: scale(0);
  opacity: 0;
  transition: transform 0.35s ease, opacity 0.35s ease;
}

.card:hover {
  transform: translateY(-4px) scale(1.03);
  border-color: rgba(171, 121, 255, 0.95);
  box-shadow:
    0 0 22px rgba(111, 246, 255, 0.85),
    0 0 38px rgba(171, 121, 255, 0.95);
  background-position: 0% 100%;
}

.card:hover::before {
  transform: scale(1);
  opacity: 1;
}

.note {
  margin-top: 10px;
  font-size: 0.9rem;
  color: #a9b3ff;
  opacity: 0.9;
}

/* Interests – pill chips like cursed orbs */
.interests {
  margin-bottom: 32px;
}

.interests .interest-cards {
  display: flex;
  justify-content: center;
  gap: 14px;
  flex-wrap: wrap;
  margin-top: 16px;
}

.icard {
  background: linear-gradient(135deg, #060617, #10102a);
  border-radius: 999px;
  padding: 9px 22px;
  font-size: 0.92rem;
  border: 1px solid rgba(171, 121, 255, 0.7);
  box-shadow:
    0 0 12px rgba(171, 121, 255, 0.6),
    0 0 20px rgba(111, 246, 255, 0.45);
  transition:
    background 0.18s ease,
    transform 0.18s ease,
    box-shadow 0.18s ease,
    color 0.18s ease;
}

.icard:hover {
  background: linear-gradient(135deg, #6ff6ff, #7b3cff, #e85dff);
  color: #050511;
  transform: translateY(-2px);
  box-shadow:
    0 0 18px rgba(111, 246, 255, 0.9),
    0 0 28px rgba(123, 60, 255, 0.95);
}

/* Footer – calm Gojo vibe */
.site-footer {
  text-align: center;
  margin-top: 40px;
  padding-top: 18px;
  border-top: 1px solid rgba(143, 255, 255, 0.35);
  color: #c8d1ff;
}

.site-footer p {
  margin-bottom: 4px;
}

.site-footer a {
  color: #6ff6ff;
  text-decoration: none;
  font-weight: 500;
  position: relative;
}

.site-footer a::after {
  content: "";
  position: absolute;
  left: 0;
  bottom: -2px;
  width: 0;
  height: 2px;
  background: linear-gradient(90deg, #6ff6ff, #7b3cff, #e85dff);
  transition: width 0.2s ease;
}

.site-footer a:hover::after {
  width: 100%;
}

.site-footer a:hover {
  text-shadow:
    0 0 8px rgba(111, 246, 255, 0.9),
    0 0 18px rgba(171, 121, 255, 0.9);
}

.tiny {
  margin-top: 6px;
  font-size: 0.8rem;
  opacity: 0.7;
}

/* Mobile tweaks */
@media (max-width: 480px) {
  body {
    padding: 14px;
  }

  .site-header h1 {
    font-size: 2.1rem;
    letter-spacing: 0.12em;
  }

  .profile-img {
    width: 170px;
    height: 170px;
  }

  .page-wrapper {
    padding: 20px 16px 24px;
  }
}
