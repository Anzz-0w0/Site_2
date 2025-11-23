/* ----------- THEME ----------- */
:root {
    --bg: #0d0f1a;
    --card: #1a1d2e;
    --accent: #7aa2f7;
    --text: #e6e6e6;
    --muted: #b3b3b3;
    --radius: 12px;
    --transition: 0.3s ease;
    font-family: "Poppins", sans-serif;
}

body {
    margin: 0;
    background: var(--bg);
    color: var(--text);
}

/* ----------- HEADER ----------- */
header {
    text-align: center;
    padding: 3rem 1rem;
    background: linear-gradient(135deg, #1f2340, #0d0f1a);
}

header h1 {
    font-size: 3rem;
    color: var(--accent);
    margin-bottom: 0.5rem;
}

header p {
    font-size: 1.2rem;
    color: var(--muted);
}

/* ----------- PROFILE (FLEXBOX) ----------- */
.profile-section {
    display: flex;
    gap: 2rem;
    padding: 3rem 10%;
    align-items: center;
    flex-wrap: wrap;
}

.profile-section img {
    width: 180px;
    height: 180px;
    border-radius: 50%;
    object-fit: cover;
    border: 3px solid var(--accent);
}

.profile-section .bio {
    max-width: 500px;
}

/* ----------- SHOWCASE GRID ----------- */
.showcase-grid {
    padding: 2rem 10%;
}

.showcase-grid h2 {
    margin-bottom: 1rem;
    color: var(--accent);
}

.grid-container {
    display: grid;
    gap: 1rem;
    grid-template-columns: repeat(auto-fit, minmax(220px, 1fr));
}

.grid-item {
    background: var(--card);
    padding: 1rem;
    border-radius: var(--radius);
    transition: var(--transition);
}

.grid-item:hover {
    transform: translateY(-5px);
}

/* ----------- HOBBIES / INTERESTS ----------- */
.hobbies {
    padding: 3rem 10%;
}

.hobbies h2 {
    color: var(--accent);
    margin-bottom: 1rem;
}

.hobby-cards {
    display: flex;
    flex-wrap: wrap;
    gap: 1rem;
}

.hobby-card {
    background: var(--card);
    padding: 1rem;
    border-radius: var(--radius);
    flex: 1 1 220px;
    transition: var(--transition);
}

.hobby-card:hover {
    transform: scale(1.03);
}

/* ----------- WORKS / GALLERY ----------- */
.gallery {
    padding: 3rem 10%;
}

.gallery h2 {
    color: var(--accent);
}

.gallery-items {
    display: grid;
    gap: 1rem;
    grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
}

.gallery-item {
    background: var(--card);
    padding: 1rem;
    border-radius: var(--radius);
}

.gallery-item img {
    width: 100%;
    border-radius: var(--radius);
}

/* ----------- FOOTER ----------- */
footer {
    text-align: center;
    padding: 1.5rem;
    color: var(--muted);
    margin-top: 3rem;
}
